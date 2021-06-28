//============================================================================
// Name        : List STL.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<list>			// Linked list can be implemented by using the list container.
using namespace std;

int main() {
	//declaring methods
	list<int> l;
	list<int> l1{25,48,7,29,61,30,118,493,1,0};
	list<int> l2={{1,11,21,31,41}};

	/*	push_back and push_front functions
		push_back(element) method is used to push elements into a list from the back.
		push_front(element) method is used to push elements into a list from the front.*/

	cout<<"push_back() & push_front()"<<endl;

	for(int i=5;i<=8;i++){
		l.push_back(i);
	}
	for(int i=4;i>=1;i--){
		l.push_front(i);
	}
	for(auto i:l){
		cout<<i<<" ";
	}
	cout<<"\n----------"<<endl;

	/*pop_back and pop_front functions
	pop_front() removes first element from the start of the list. While pop_back() removes first element from the end of the list.*/
	cout<<"pop_back() & pop_front()"<<endl;
	l.pop_back();
	l.pop_front();
	for(auto i:l){
		cout<<i<<" ";
	}
	cout<<"\n----------"<<endl;


	cout<<"begin(),back(),size() and empty()"<<endl;
	cout<<l.front()<<endl;
	cout<<l.back()<<endl;
	cout<<l.size()<<endl;
	cout<<l.empty()<<endl;
	cout<<"----------"<<endl;

	/*reverse function-->This method can be used to reverse a list completely.*/
	cout<<"reverse() function"<<endl;
	l.reverse();
	for(auto i:l){
		cout<<i<<" ";
	}
	cout<<"\n----------"<<endl;

	/*sort function->sort() method sorts the given list. It does not create new sorted list but changes the position of elements
	 *  within an existing list to sort it.*/
	cout<<"sort() function"<<endl;
	l1.sort();
	for(auto i:l1){
		cout<<i<<" ";
	}
	cout<<"\n----------"<<endl;

	/*insert function->This method, as the name suggests, inserts an element at specific position, in a list.
	 * There are 3 variations of insert(), they are as follows :
	insert(iterator, element) : inserts element in the list before the position pointed by the iterator.
	insert(iterator, count, element) : inserts element in the list before the position pointed by the iterator, count number of times.
	insert(iterator, start_iterator, end_iterator): insert the element pointed by start_iterator to the element pointed by
	end_iterator before the position pointed by iterator
	 */
	cout<<"insert() functions"<<endl;
	l2.insert(l.begin(),0);
	l2.insert(l.begin(),3,10);
	for(auto i:l2){
		cout<<i<<" ";
	}
	cout<<"\n----------"<<endl;

	cout<<!(5>=2)<<endl;
}

/* OUTPUT
push_back() & push_front()
1 2 3 4 5 6 7 8
----------
pop_back() & pop_front()
2 3 4 5 6 7
----------
begin(),back(),size() and empty()
2
7
6
0
----------
reverse() function
7 6 5 4 3 2
----------
sort() function
0 1 7 25 29 30 48 61 118 493
----------
insert() functions
1 11 21 31 41
----------
*/

