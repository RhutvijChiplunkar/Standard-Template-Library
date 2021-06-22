//============================================================================
// Name        : Queue STL.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<queue>
using namespace std;

int main() {
	queue<int> q;
	queue<int> q1;

	q.push(5);			//insert element in queue
	q.push(10);
	q.push(15);
	q.push(20);
	q.push(25);
	q.push(30);
	q.push(35);

	q.pop(); 			//remove element from front of queue

	cout<<"Front of Queue"<<endl;
	cout<<q.front()<<endl;			//returns front element of the queue
	cout<<"Rear of Queue"<<endl;
	cout<<q.back()<<endl;			//returns rear element of the queue
	cout<<"----------"<<endl;

	cout<<"Size of Queue"<<endl;
	cout<<q.size()<<endl;			//returns size of queue
	cout<<"----------"<<endl;

	cout<<"Empty function"<<endl;	//returns 0 if not empty, 1 if empty
	cout<<q.empty()<<endl;
	cout<<q1.empty()<<endl;
	cout<<"----------"<<endl;


	cout<<"Emplace function"<<endl;
	q.emplace(100);
	cout<<"Rear after emplace"<<endl;
	cout<<q.back();
	cout<<"\n----------"<<endl;

}

/* OUTPUT
 Front of Queue
10
Rear of Queue
35
----------
Size of Queue
6
----------
Empty function
0
1
----------
Emplace function
Rear after emplace
100
----------

 */
