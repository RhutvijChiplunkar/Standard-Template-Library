//============================================================================
// Name        : STL PAIR.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<utility>
using namespace std;

int main() {

	//default values aare 0,0
	pair<int,int> p1;
	cout<<p1.first<<endl;
	cout<<p1.second<<endl;
	cout<<"----------"<<endl;

	//inserting values into pairs
	int x=10,y=20;
	pair<int,int> p2(x,y);
	cout<<p2.first<<endl;
	cout<<p2.second<<endl;
	cout<<"----------"<<endl;
	//OR
	pair<int,int> p3(100,200);
	p3.first=25;
	p3.second=50;
	cout<<p3.first<<endl;
	cout<<p3.second<<endl;
	cout<<"----------"<<endl;

	//make_pair method to make a pair
	pair<int,char> p4;
	p4=make_pair(10,'R');
	cout<<p4.first<<endl;
	cout<<p4.second<<endl;
	cout<<"----------"<<endl;


	//LOGICAL OPERATORS --> returns 1 or 0
	pair<int,int> p5(10,20),p6(10,10);
	cout<<(p6.first==p6.second)<<endl;
	cout<<(p5.first!=p5.second)<<endl;
	cout<<(p5.first==p6.first)<<endl;
	cout<<"----------"<<endl;


	/*swap : This function swaps the contents of one pair object with the contents of another pair object.
	The pairs must be of same type. */
	pair<int,char> s1,s2;
	s1=make_pair(1,'I');
	s2=make_pair(2,'N');
	s1.swap(s2);
	cout<<"After Swap:"<<endl;
	cout<<s1.first<<" "<<s1.second<<endl;
	cout<<s2.first<<" "<<s2.second<<endl;
	cout<<"----------"<<endl;

	//interchanging values in one pair
	pair<int,int> sw(10,20);
	int t=sw.first;
	sw.first=sw.second;
	sw.second=t;
	cout<<sw.first<<endl;
	cout<<sw.second<<endl;
	cout<<"----------"<<endl;
}


/* OUTPUT
 * 0
0
----------
10
20
----------
25
50
----------
10
R
----------
1
1
1
----------
After Swap:
2 N
1 I
----------
20
10
----------

 */
