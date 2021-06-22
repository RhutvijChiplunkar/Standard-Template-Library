//============================================================================
// Name        : Stack STL.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<stack>
using namespace std;

int main() {
	stack<int> S;
	stack<int> S1;

	S.push(5);				//insert element in stack
	S.push(10);
	S.push(15);
	S.push(20);
	S.push(25);

	S.pop();						//remove the element from top of stack

	cout<<"Top of Stack"<<endl;
	cout<<S.top()<<endl;			//returns top element of stack
	cout<<"----------"<<endl;

	cout<<"Size of Stack"<<endl;
	cout<<S.size()<<endl;			//returns size of stack
	cout<<"----------"<<endl;

	cout<<"Empty function"<<endl;	//returns 0 if not empty, 1 if empty
	cout<<S.empty()<<endl;
	cout<<S1.empty()<<endl;
	cout<<"----------"<<endl;

/*  NOTE::
 	 While push() function inserts a copy of the value or the parameter passed to the function
	 into the container at the top, the emplace() function constructs a new element as the
	 value of the parameter and then adds it to the top of the container.  */

	cout<<"Emplace function"<<endl;
	S.emplace(100);
	cout<<"Top after emplace"<<endl;
	cout<<S.top();
	cout<<"\n----------"<<endl;

}

/* OUTPUT
Top of Stack
20
----------
Size of Stack
4
----------
Empty function
0
1
----------
Emplace function
Top after emplace
100
----------
 *
 */
