#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int> m;
    
    /* unordered_map is an associated container that stores elements formed by the combination of key-value and a mapped value. 
    The key value is used to uniquely identify the element and the mapped value is the content associated with the key. 
    Both key and value can be of any type predefined or user-defined. Internally unordered_map is implemented using Hash Table, 
    the key provided to map are hashed into indices of a hash table that is why the performance of data structure depends on 
    hash function a lot but on an average, the cost of search, insert and delete from the hash table is O(1).  */

    m[1]=10;
	m[4]=20;
	m[2]=30;
    m[5]=70;
	m[3]=130;

    for(auto itr:m){
        cout<<itr.first<<"->"<<itr.second<<endl;
    }

}

/*OUPTUT
3->130
1->10 
4->20 
2->30 
5->70 
*/