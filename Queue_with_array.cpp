#include<iostream>
#include<queue>
#include<vector>>
using namespace std;
 
class Queue{
	vector<int>q;
	public:
		bool isEmpty()
		{
			return q.empty();
		}
		void qEnqueue(int data)
		{
			q.push_back(data);
		}
		void qDequeue()
		{
			if(!isEmpty())
			 q.erase(q.begin());
		}
		int getFront()
		{
				if(isEmpty()) return -1;
				return q.front();
		}
		int getRear()
		{
				if(isEmpty()) return -1;
				return q.back();
						}
						
     void display() {
        for (int i = 0; i < q.size(); i++) {
            cout << q[i] << " ";
        }
        cout << endl;
    }
						
};
int main()
{
	Queue q;
	q.qEnqueue(1);
	q.qEnqueue(2);
	q.qEnqueue(3);
	q.qEnqueue(4);
	q.qEnqueue(5);
	cout<<q.getFront()<<endl;
	q.qDequeue();
	q.qEnqueue(6);
	q.display();
	
}
