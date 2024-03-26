class Queue {

	int front, rear;
	vector<int> arr;

public:
	Queue()
	{
		front = 0;
		rear = 0;
		arr.resize(100001);
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e)
	{
		// Write your code here.
		if(rear-front<100001){
			arr[rear%100001]=e;
			rear++;
		}
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{
		// Write your code here.
		if(front<rear){
			front++;
			return arr[(front-1)%100001];
		}
		else return -1;
	}
};