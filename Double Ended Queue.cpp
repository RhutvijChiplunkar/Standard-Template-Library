//============================================================================
// Name        : Deque STL.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<deque>
//#include<vector>
using namespace std;

int main() {

	/*	Double ended queues are sequence containers with the feature of expansion and contraction on both the ends.
		They are similar to vectors, but are more efficient in case of insertion and deletion of elements.*/
	 
	//declaring methods
	deque<int> dq;
	int a[]={1,2,3,4,5};
	deque<int> dq1(a,a+5);

	/*inserting elements*/
	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.push_front(1);
	dq.push_front(2);
	dq.push_front(3);

	cout<<"After push_back() and push_front()"<<endl;
	for(auto i:dq){
		cout<<i<<" ";
	}
	cout<<"\n---------------"<<endl;

	/*pop_back and pop_front functions
	pop_back() removes an element from the back of the deque whereas pop_front removes an element from the front of the deque,
	both decreasing the size of the deque by one.*/
	dq.pop_back();
	dq.pop_front();
	cout<<"After pop_back() and pop_front()"<<endl;
	for(auto i:dq){
		cout<<i<<" ";
	}
	cout<<"\n---------------"<<endl;


	/*empty, size and max_size functions
	empty() returns Boolean true if the deque is empty, else Boolean false is returned.
	size() returns the number of elements present in the deque
	max_size() returns the number of element the given deque can hold*/
	cout<<"empty(),size() and max_size()"<<endl;
	cout<<dq.empty()<<endl;
	cout<<dq.size()<<endl;
	cout<<dq.max_size()<<endl;
	cout<<"---------------"<<endl;

	//element access
	cout<<"at(), [], front() and back() "<<endl;
	cout<<dq.at(0)<<endl;
	cout<<dq[1]<<endl;
	cout<<dq.front()<<endl;
	cout<<dq.back()<<endl;
	cout<<"---------------"<<endl;
}

/* OUTPUT
After push_back() and push_front()
3 2 1 10 20 30
---------------
After pop_back() and pop_front()
2 1 10 20
---------------
empty(),size() and max_size()
0
4
2305843009213693951
---------------
at(), [], front() and back()
2
1
2
20
---------------
 */
