//============================================================================
// Name        : Iterators STL.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	/*Iterators are used to point to the containers in STL, because of iterators it is possible for an algorithm to manipulate
	 *different types of data structures/Containers.
	Algorithms in STL don’t work on containers, instead they work on iterators, they manipulate the data pointed by the iterators.*/

	vector<int> v={1,2,3,4};
	vector<int>::iterator i;
	cout<<"for vector"<<endl;
	for(i=v.begin();i!=v.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"--------------"<<endl;

	list<int> l={10,20,30,40};
	list<int>::iterator j;
	cout<<"for list"<<endl;
	for(j=l.begin();j!=l.end();j++){
		cout<<*j<<" ";
	}
	cout<<endl;
	cout<<"--------------"<<endl;

	/*Operations on iterators*/

	/*advance() Operation-->It will increment the iterator i by the value of the distance. If the value of distance is negative,
	 * then iterator will be decremented.*/
	vector<int> v1;
	vector<int>::iterator k,m,n;
	for(int i=1;i<6;i++){
		v1.push_back(i);
	}

	cout<<"advance() operation"<<endl;
	k=v1.begin();
	advance(k,3);		//pointer shifts 3 positions front i.e 4th element
	cout<<*k<<endl;
	advance(k,-2);		//pointer shifts 2 positions back i.e 2nd element
	cout<<*k<<endl;
	cout<<"--------------"<<endl;

	/*distance() Operation-->It will return the number of elements or we can say distance between the first and the last iterator. */
	cout<<"distance() operation"<<endl;
	k=v1.begin();
	m=v1.end();
	cout<<distance(k,m)<<endl;
	cout<<"--------------"<<endl;

	/*next() Operation
	It will return the nth iterator to i, i.e iterator pointing to the nth element from the element pointed by i.*/
	cout<<"next() operation"<<endl;
	m=next(k,2);
	cout<<*m<<endl;
	cout<<"--------------"<<endl;

	/*prev() Operation
	It will return the nth predecessor to i, i.e iterator pointing to the nth predecessor element from the element pointed by i.*/
	cout<<"prev() operation"<<endl;
	n=prev(m,1);		//(m is at 3)
	cout<<*n<<endl;
	cout<<"--------------"<<endl;
}

/* OUTPUT
for vector
1 2 3 4
--------------
for list
10 20 30 40
--------------
advance() operation
4
2
--------------
distance() operation
5
--------------
next() operation
3
--------------
prev() operation
2
--------------*/
