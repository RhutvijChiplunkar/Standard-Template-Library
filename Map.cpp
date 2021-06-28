//============================================================================
// Name        : Map STL.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<map>
using namespace std;

int main() {
	/*Maps are associative containers that store elements in a mapped fashion.
	 Each element has a key value and a mapped value. No two mapped values can have same key values.
	 that keys are arranged in ascending order, its because maps always arrange its keys in sorted order.
	 In case the keys are of string type, they are sorted lexicographically*/

	//creation of map
	map<int,int> m;
	map<string,int> m1={{"a",1},{"b",2},{"c",3}};
	map<string,int> m2{{"a",1},{"b",2},{"c",3}};

	//inserting values
	//METHOD 1
	m[1]=10;
	m[2]=20;
	m[3]=30;

	//METHOD 2
	m.insert(pair<int,int> (4,40));
	m.insert(pair<int,int> (5,50));
	m.insert(pair<int,int> (6,60));

	cout<<"Inserting elements and display using at()"<<endl;
	for(auto i=1;i<=6;i++){
		cout<<m.at(i)<<endl;
	}
	cout<<"----------"<<endl;

	cout<<"Inserting elements and display using index->[]"<<endl;
	for(auto i=1;i<=6;i++){
		cout<<m[i]<<endl;
	}
	cout<<"----------"<<endl;

	/*empty, size and max_size
	empty() returns boolean true if the map is empty, else it returns Boolean false.
	size() returns number of entries in the map, an entry consist of a key and a value.
	max_size() returns the upper bound of the entries that a map can contain (maximum possible entries)
	based on the memory allocated to the map.*/
	cout<<"empty(), size() and max_size()"<<endl;
	cout<<m.empty()<<endl;
	cout<<m.size()<<endl;
	cout<<m.max_size()<<endl;
	cout<<"----------"<<endl;

	/*erase and clear
	erase() removes the entry from the map pointed by the iterator (which is passed as parameter),
	however if we want to remove all the elements from the map, we can use clear(), it clears the map and sets its size to 0.*/
	cout<<"clear() and erase()"<<endl;
	m1.erase("a");
	cout<<"After erase: "<<m1.size()<<endl;
	m1.clear();
	cout<<"After clear: "<<m1.size()<<endl;
	cout<<"----------"<<endl;

}


/* OUTPUT
Inserting elements and display using at()
10
20
30
40
50
60
----------
Inserting elements and display using index->[]
10
20
30
40
50
60
----------
empty(), size() and max_size()
0
6
230584300921369395
----------
clear() and erase()
After erase: 2
After clear: 0
----------

 */
