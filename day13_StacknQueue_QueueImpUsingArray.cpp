class Queue {

	int front, rear,cnt;
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
		arr[rear % arr.size()] = e;
		rear++;
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{
		// Write your code here.
		// int ele= arr[front];
		if(front == rear){
			return -1;
		}
		int res = arr[front % arr.size()];
		arr[front % arr.size()] = -1;
		front++;
		return res;
	}
};
