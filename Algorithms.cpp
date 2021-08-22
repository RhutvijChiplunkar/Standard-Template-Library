//============================================================================
// Name        : Algorithms C++ STL.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	/*STL provide different types of algorithms that can be implemented upon any of the container with the help of iterators.
	  Thus now we don’t have to define complex algorithm instead we just use the built in functions provided by the algorithm library in STL.
	  Algorithm functions provided by algorithm library works on the iterators, not on the containers.
 	  Thus one algorithm function can be used on any type of container.
 	  A range is any sequence of objects that can be accessed through iterators or pointers*/

	int a=10,b=5;
	/*max and min values-->get maximum and minimum values*/
	cout<<"Maximum:"<<max(a,b)<<endl;
	cout<<"Minimum:"<<min(a,b)<<endl;
	cout<<"----------"<<endl;

	//sort(start,end) used to sort given container
	/* *****This function internally uses IntroSort-->it is implemented using hybrid of QuickSort, HeapSort and InsertionSort ******  */
	int ar[10]={15,122,956,48,75,84,966,320,7,487};
	sort(ar,ar+10);
	cout<<"Sorted array::";
	for(auto i:ar){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"----------------"<<endl;

	/*is_sorted method-->This function of the STL, returns true if the given range is sorted.*/
	cout<<"is_sorted method"<<endl;
	cout<<is_sorted(ar,ar+10)<<endl;
	cout<<"----------------"<<endl;

	/* Binary search-->This function returns Boolean true if the element is present in the given range, else Boolean false is returned. */
	vector<int> arr={11,22,33,44,55,66,77,11};
	vector<int>::iterator i,j;
	cout<<"Binary search::"<<endl;
	cout<<binary_search(ar,ar+11,84)<<endl;
	cout<<binary_search(arr.begin(),arr.end(),77)<<endl;
	cout<<"----------------"<<endl;

	/* Upper Bound and Lower Bound Search Algorithms in STL
	 * upper_bound() returns an iterator to the elements in the given range which does not compare greater than the given value.
	 * The range given should be already sorted for upper_bound() to work properly
	 * lower_bound() returns an iterator to the elements in the given range which does no compare less than the given value.
	 * The range given should be already sorted for lower_bound() to work properly.*/
	int array[6]={5,10,15,20,25,30};
	int *ptr=lower_bound(array,array+6,20);
	int *ptr1=lower_bound(array,array+6,23);
	cout<<"Lower bound"<<endl;
	cout<<(*ptr)<<endl;
	cout<<(*ptr1)<<endl;

	int *ptr2=upper_bound(array,array+6,20);
	int *ptr3=upper_bound(array,array+6,26);
	cout<<"Upper bound"<<endl;
	cout<<(*ptr2)<<endl;
	cout<<(*ptr3)<<endl;
	cout<<"----------------"<<endl;

	/* Non Modifying Algorithms in C++ STL
	   count(first ,last ,value)-->used to count occurance of particular element in string/array/container
	   equal method
	   equal() compares the elements in two ranges, if all the elements in one range compares equal to their corresponding elements
	   in other range, Boolean true is returned, else Boolean false is returned.*/
	string x="abcdabcadafa",y="abcdabcadafa";
	char c='a';
	cout<<"count of integer:"<<count(arr.begin(),arr.end(),11)<<endl;
	cout<<"count of character in string:"<<count(x.begin(),x.end(),c)<<endl;

	vector<int> ar1={1,2,3,4};
	vector<int> ar2={1,2,3,4};
	cout<<equal(ar1.begin(),ar1.end(),ar2.begin())<<endl;
	cout<<"----------------"<<endl;


}
