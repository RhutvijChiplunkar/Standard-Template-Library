//============================================================================
// Name        : Set STL.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<set>
using namespace std;

int main() {
	/*Sets are a type of associative containers in which each element has to be unique, because the value of the element identifies it.
	 * The value of the element cannot be modified once it is added to the set, though it is possible to remove and add the
	 * modified value of that element.
	 
	   The elements in set are always returned in sorted order*/
	   
	set<int> s;


	s.insert(25);
	s.insert(5);
	s.insert(5);	//repeated elements are not considered again
	s.insert(15);
	s.insert(15);
	s.insert(20);
	s.insert(10);
	s.insert(25);

	cout<<"The set is"<<endl;
	for(auto i:s)
		cout<<i<<" ";
	cout<<endl;
	cout<<"----------"<<endl;
	s.erase(5);

	cout<<"After erase"<<endl;
	for(auto i:s)
		cout<<i<<" ";
	cout<<endl;
	cout<<"----------"<<endl;

	//count(const g) � Returns 1 or 0 based on the element �g� is present in the set or not.
	cout<<"count()"<<endl;
	cout<<s.count(15)<<endl;
	cout<<s.count(155)<<endl;
	cout<<"----------"<<endl;


	cout<<"empty(), size() and max_size()"<<endl;
	cout<<s.empty()<<endl;
	cout<<s.size()<<endl;
	cout<<s.max_size()<<endl;
	cout<<"----------"<<endl;

	//Returns an iterator to the element �g� in the set if found, else returns the iterator to end.
	cout<<"find()"<<endl;
	set<int>::iterator it;
	it=s.find(25);
	cout<<*it<<endl;
	cout<<"----------"<<endl;

}
/*OUTPUT
The set is
5 10 15 20 25
----------
After erase
10 15 20 25
----------
count()
1
0
----------
empty(), size() and max_size()
0
4
230584300921369395
----------
find()
25
----------
*/
