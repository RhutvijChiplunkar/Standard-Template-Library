//============================================================================
// Name        : Priority Queue STL.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<queue>
#include<vector>
using namespace std;


int main() {

	/*priority_queue is just like a normal queue except the element removed from the queue is always the greatest among all the elements
	  in the queue, thus this container is usually used to replicate Max Heap in C++. Elements can be inserted at any order and it have
	  O(log(n)) time complexity for insertion.*/

	//method to declare a priority queue
	priority_queue<int> pq;
	priority_queue<int> pq1;

	/*push function
	This method inserts an element in the priority_queue. The insertion of the elements have time complexity of logarithmic time.*/
	pq.push(10);
	pq.push(100);
	pq.push(70);
	pq.push(50);
	pq.push(20);

	/*empty and size functions
	size() returns the number of element present in the priority _queue, whereas empty() returns Boolean true
	if the priority_queue is empty else Boolean false is returned.*/
	cout<<"empty() and size()"<<endl;
	cout<<pq1.empty()<<endl;
	cout<<pq.size()<<endl;
	cout<<"----------"<<endl;

	//default C++ creates a max-heap
	/*pop function
	This method removes the topmost element from the priority_queue (greatest element) ,reducing the size of the priority queue by 1.
	top function
	This method returns the element at the top of the priority_queue which is the greatest element present in the queue.*/

	cout<<"Priority Queue elements in max heap are:"<<endl;
	for(int i=0;i<=4;i++){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<"\n----------"<<endl;




	// C++ program to demonstrate min heap
	priority_queue<int,vector<int>, greater<int>> min_pq;

	min_pq.push(10);
	min_pq.push(100);
	min_pq.push(70);
	min_pq.push(50);
	min_pq.push(20);

	cout<<"Priority Queue elements in min heap are:"<<endl;
	for(auto i=0;i<=4;i++){
		cout<<min_pq.top()<<" ";
		min_pq.pop();
	}
	cout<<"\n----------"<<endl;

}

/* OUTPUT
empty() and size()
1
5
----------
Priority Queue elements in max heap are:
100 70 50 20 10
----------
Priority Queue elements in min heap are:
10 20 50 70 100
----------
 */
