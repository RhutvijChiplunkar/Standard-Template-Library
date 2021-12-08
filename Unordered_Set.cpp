#include<bits/stdc++.h>
using namespace std;

int main(){
    /* An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table so that 
    the insertion is always randomized. All operations on the unordered_set takes constant time O(1) on an average 
    which can go up to linear time O(n) in worst case which depends on the internally used hash function, 
    but practically they perform very well and generally provide a constant time lookup operation.  
    
    unordered_set is a set in which key can be stored in any order, so unordered*/

    unordered_set<int> s;

    s.insert(25);
	s.insert(5);
	s.insert(5);	//repeated elements are not considered again
	s.insert(15);
	s.insert(20);
	s.insert(10);
	s.insert(25); 
    s.insert(11);
    s.insert(75);

    cout<<"The unordered set is"<<endl;
	for(auto i:s)
		cout<<i<<" ";
	cout<<endl;

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
	unordered_set<int>::iterator it;
	it=s.find(25);
	cout<<*it<<endl;
	cout<<"----------"<<endl;
}

/*OUPTUT
The unordered set is
11 10 25 5 15 75 20
After erase
11 10 25 5 15 75 20
----------
count()
1
0
----------
empty(), size() and max_size()
0
7
536870911
----------
find()
25
----------
*/