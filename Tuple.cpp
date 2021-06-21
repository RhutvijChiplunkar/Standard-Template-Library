//============================================================================
// Name        : Tuple STL.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

//A tuple is an object that can hold a number of elements. The elements can be of different data types.

#include <iostream>
#include<tuple>
#include<string>
using namespace std;

int main() {

	tuple<char,int,float> t1('A',5,8.5);

	/*get() :- get() is used to access the tuple values and modify them, it accepts the index and
			   tuple name as arguments to access a particular tuple element.*/
	cout<<"Values of tuple t1"<<endl;
	cout<<get<0>(t1)<<endl;
	cout<<get<1>(t1)<<endl;
	cout<<get<2>(t1)<<endl;
	cout<<"----------"<<endl;


	tuple<int,int,int> t2;
	t2=make_tuple(10,20,30);		//make_tuple() is used to assign tuple with values
	cout<<"Values of tuple t2"<<endl;
	cout<<get<0>(t2)<<endl;
	cout<<get<1>(t2)<<endl;
	cout<<get<2>(t2)<<endl;
	cout<<"----------"<<endl;


	//tuple_size :- It returns the number of elements present in the tuple.
	tuple<int,char,int> t3(10,'A',5);
	tuple<char,int,int,float> t4('C',20,80,8.96);
	cout<<"Size of t3 and t4 are::"<<endl;
	cout<<tuple_size<decltype(t3)>::value<<endl;
	cout<<tuple_size<decltype(t4)>::value<<endl;
	cout<<"----------"<<endl;

	//swap() :- The swap(), swaps the elements of the two different tuples.
	tuple<int,int,int> t5(10,20,30);
	tuple<int,int,int> t6(1,2,3);

	t5.swap(t6);
	cout<<"After swap"<<endl;
	cout<<get<0>(t5)<<" "<<get<1>(t5)<<" "<<get<2>(t5)<<endl;
	cout<<get<0>(t6)<<" "<<get<1>(t6)<<" "<<get<2>(t6)<<endl;
	cout<<"----------"<<endl;

	/* tie() :- The work of tie() is to unpack the tuple values into separate variables.
			 There are two variants of tie(), with and without “ignore” , the “ignore”
			 ignores a particular tuple element and stops it from getting unpacked.*/

	tuple<int,int> t7(10,20);
	tuple<int,char,int> t8(25,'r',50);

	int a,b,x,y;
	tie(a,b)=t7;
	tie(x,ignore,y)=t8;
	cout<<"tie() function"<<endl;
	cout<<"Without ignore"<<endl;
	cout<<a<<" "<<b<<endl;
	cout<<"With ignore"<<endl;
	cout<<x<<" "<<y<<endl;
	cout<<"----------"<<endl;

	/*tuple_cat() :- This function concatenates two tuples and returns a new tuple.*/
	tuple<int,int> t9(10,20);
	tuple<int,char,int> t10(25,'r',50);
	auto t11=tuple_cat(t9,t10);
	cout<<"tuple_cat() function"<<endl;
	cout<<get<0>(t11)<<endl;
	cout<<get<2>(t11)<<endl;
	cout<<get<4>(t11)<<endl;
	cout<<"----------"<<endl;

}

 /*OUTPUT
Values of tuple t1
A
5
8.5
----------
Values of tuple t2
10
20
30
----------
Size of t3 and t4 are::
3
4
----------
After swap
1 2 3
10 20 30
----------
tie() function
Without ignore
10 20
With ignore
25 50
----------
tuple_cat() function
10
25
50
----------

  */
