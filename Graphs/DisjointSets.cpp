int find(int A[],int X)
{
       //add code here
       if(A[X]==X) return X;
       return A[X]=find(A,A[X]);
       
}
void unionSet(int A[],int X,int Z)
{
	//add code here.
	int U=find(A,X);
	int V=find(A,Z);
	A[U]=V;
}
https://www.geeksforgeeks.org/problems/disjoint-set-union-find/1
