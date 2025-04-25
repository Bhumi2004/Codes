#include<bits/stdc++.h>
using namespace std;
class Queue{
	int front,size;
	int *arr;
	int capacity;
	public:
		Queue(int c)
		{
			arr=new int [c];
			capacity=c;
			size=0;
			front =0;
		}
		int getFront()
		{
			if(size==0)
			return -1;
			return arr[front];
		}
		int getRear()
		{
			if(size==0)
			return -1;
			int rear=(front+size-1)%capacity;
			return arr[rear];
		}
		void enqueue(int x)
		{
			if(size==capacity)
			return ;
			int rear=(front+size)%capacity;
			arr[rear]=x;
			size++;
			
		}
		int dequeue()
		{
			if(size==0)
			return -1;
			int res=arr[front];
			front =(front+1)%capacity;
			size--;
			return res;
		}
};

int main()
{
	Queue q(4);
	q.enqueue(10);
	    cout << q.getFront() << " " << q.getRear() << endl;
    q.enqueue(20);
    cout << q.getFront() << " " << q.getRear() << endl;
    q.enqueue(30);
    cout << q.getFront() << " " << q.getRear() << endl;
    q.enqueue(40);
    cout << q.getFront() << " " << q.getRear() << endl;
    q.dequeue();
    cout << q.getFront() << " " << q.getRear() << endl;
    q.dequeue();
    cout << q.getFront() << " " << q.getRear() << endl;
    q.enqueue(50);
    cout << q.getFront() << " " << q.getRear() << endl;
    return 0;

}
