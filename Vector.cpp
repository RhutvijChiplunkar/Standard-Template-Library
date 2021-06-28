//============================================================================
// Name        : Vector STL.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	//different methods to declare a vector
	vector<int> v;
	vector<int> v1={1,2,3,4,5,6};
	vector<int> v2{11,22,33,44,55,66};


	//push_back() is used for inserting an element at the end of the vector
	for(int i=1;i<=8;i++){
		v.push_back(i);
	}
	cout<<"push_back()"<<endl;
	for(auto i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"----------"<<endl;

	//pop_back() – It is used to pop or remove elements from a vector from the back.
	cout<<"pop_back()"<<endl;
	for(int i=1;i<=4;i++){
		v.pop_back();
	}
	for(auto i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"----------"<<endl;


	/*
	 * front and back functions-->vector_name.front() retuns the element at the front of the vector
	   While vector_name.back() returns the element at the back of the vector
	   size function-->This method returns the size of the vector.
	   capacity function-->This method returns the number of elements that can be inserted in the vector based on the memory allocated to the vector.
	*/
	cout<<"begin(),back(),size() and capacity()"<<endl;
	cout<<v.front()<<endl;
	cout<<v.back()<<endl;
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	cout<<"----------"<<endl;

	//insert() – It inserts new elements before the element at the specified position
	//vector_name.insert (position, val) or vector_name.insert(position, count, val)
	cout<<"insert()"<<endl;
	v.insert(v.begin(),0);
	v.insert(v.end(),5);
	for(auto i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"----------"<<endl;

	//swap function-->This method interchanges value of two vectors.
	vector<int> v3={1,2,3,4,5,6};
	vector<int> v4={11,22,33,44,55,66};
	v3.swap(v4);
	cout<<"After swap"<<endl;
	for(auto i:v3){
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i:v4){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"----------"<<endl;

	//v.clear() will clear it, but not delete it.
	cout<<"After clear()"<<endl;
	v4.clear();
	cout<<v4.size()<<endl;
	cout<<"----------"<<endl;

	//at function-->This method works same in case of vector as it works for array
	cout<<"at() function"<<endl;
	for(auto i=0;i<v.size();i++){
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	cout<<"----------"<<endl;

}

/* OUTPUT
push_back()
1 2 3 4 5 6 7 8
----------
pop_back()
1 2 3 4
----------
begin(),back(),size() and capacity()
1
4
4
8
----------
insert()
0 1 2 3 4 5
----------
After swap
11 22 33 44 55 66
1 2 3 4 5 6
----------
After clear()
0
----------
at() function
0 1 2 3 4 5
----------

*/
