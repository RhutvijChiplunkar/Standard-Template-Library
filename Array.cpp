//============================================================================
// Name        : Array STL.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<algorithm>
#include<array>	//static array
using namespace std;

int main() {
	array<int,7> arr={1,2,3,4,5,6,7};
	cout<<"size functions"<<endl;
	cout<<arr.size()<<endl;		//returns size of array
	cout<<arr.max_size()<<endl;	//returns maximum size of array
	cout<<"----------"<<endl;

	//at function-->This method returns value in the array at the given range
	cout<<"traversal functions"<<endl;
	cout<<arr.at(5)<<endl;
	for(long long int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";			//returns 0 for null values
	}
	cout<<endl;

	cout<<arr.front()<<endl;
	cout<<arr.back()<<endl;
	cout<<"----------"<<endl;


	//fill() function-->This method assigns the given value to every element of the array
	array<int,5> arr2;
	arr2.fill(5);
	for(long long int i=0;i<arr2.size();i++){
		cout<<arr2[i]<<" ";
	}
	cout<<"\n----------"<<endl;

	cout<<"swap functions"<<endl;
	array<char,2> a1={'a','b'};
	array<char,2> a2={'x','y'};

	a1.swap(a2);
	cout<<a1[0]<<" "<<a1[1]<<endl;
	cout<<a2[0]<<" "<<a2[1]<<endl;
	cout<<"----------"<<endl;

	//begin function-->This method returns the iterator pointing to the first element of the array
	//end function-->This method returns an iterator pointing to an element next to the last element in the array
	array<int,6> arr3={5,8,44,93,1,7};
	sort(arr3.begin(),arr3.end());
	for(auto x:arr3){
		cout<<x<<" ";
	}
	cout<<"\n----------"<<endl;
}

/* OUTPUT
size functions
7
7
----------
traversal functions
6
1 2 3 4 5 6 7
1
7
----------
5 5 5 5 5
----------
swap functions
x y
a b
----------
1 5 7 8 44 93
----------
 */
