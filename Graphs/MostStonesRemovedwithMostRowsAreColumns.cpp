class DisjointSet {
public:
    vector<int> parent;
    vector<int> rank;

    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int findUpr(int u) {
        if (parent[u] == u) {
            return u;
        }
        return parent[u] = findUpr(parent[u]); // Path compression
    }

    void unionByRank(int u, int v) {
        int upr_u = findUpr(u);
        int upr_v = findUpr(v);
        if (upr_u != upr_v) {
            if (rank[upr_u] > rank[upr_v]) {
                parent[upr_v] = upr_u;
            } else if (rank[upr_u] < rank[upr_v]) {
                parent[upr_u] = upr_v;
            } else {
                parent[upr_u] = upr_v;
                rank[upr_v]++;
            }
        }
    }
};

class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        int maxRow = 0;
        int maxCol = 0;
        for (const auto& stone : stones) {
            maxRow = max(maxRow, stone[0]);
            maxCol = max(maxCol, stone[1]);
        }

        DisjointSet ds(maxRow + maxCol + 2); // Adding extra 1 to accommodate indexing

        // Connect stones in the same row or column
        for (const auto& stone : stones) {
            ds.unionByRank(stone[0], stone[1] + maxRow + 1); // Offset column index
        }

        unordered_set<int> uniqueParents;
        for (const auto& stone : stones) {
            uniqueParents.insert(ds.findUpr(stone[0]));
            uniqueParents.insert(ds.findUpr(stone[1] + maxRow + 1));
        }

        return n - uniqueParents.size();
    }
https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/description/
