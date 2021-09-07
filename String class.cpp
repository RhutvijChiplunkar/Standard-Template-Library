//============================================================================
// Name        : String class C++.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<string>//============================================================================
// Name        : String class C++.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s,str,test="strings in c++";

	cout<<"Enter string with more than 2 words::"<<endl;
	getline(cin,str);
	cout<<"using getline():"<<str<<endl;		//cin reads string only until 1 space character appears

	/*cout<<"Enter string with more than 2 words::"<<endl;
	cin>>s;
	cout<<"using cin:"<<s<<endl;
	cout<<"------------------"<<endl;*/

	cout<<"String previously declared along with space"<<endl;
	cout<<test<<endl;
	cout<<"------------------"<<endl;

	string s1("Strings");
	string s2,s3;
	cout<<"Creating copy of string"<<endl;
	s2=s1;
	cout<<s2<<endl;
	s3.assign(s1);
	cout<<s3<<endl;
	cout<<"------------------"<<endl;

	/*Strings are basically array of characters, hence we can use all array functions on strings*/
	string st="Rhutvij Chiplunkar";
	cout<<"size(),max_size() and capacity()"<<endl;
	cout<<st.size()<<endl;
	cout<<st.max_size()<<endl;
	cout<<st.capacity()<<endl;
	cout<<"------------------"<<endl;

	cout<<"For traversals"<<endl;
	cout<<st.at(6)<<endl;
	cout<<st[8]<<endl;
	cout<<"------------------"<<endl;

	cout<<"substr(),find(),rfind() and swap()"<<endl;
	string a="Tutorials",b="Lectures";
	cout<<a.substr(5,3)<<endl;		//substr(start index,length)
	a.swap(b);
	cout<<"After swap():"<<endl;
	cout<<a<<" "<<b<<endl;
	cout<<"find() function:"<<endl;
	cout<<a.find("e")<<endl;		//gives index of first occurence from LHS
	cout<<"rfind() function:"<<endl;
	cout<<a.rfind("e")<<endl;		//gives index of first occurence from RHS
	cout<<"------------------"<<endl;


	/*Remove a particular character from string*/
	cout<<"Remove a particular character from string"<<endl;
	string x;
	cout<<"Enter a string::";
	cin>>x;
	cout<<"Enter a character you want to remove::";
	char y;cin>>y;
    	x.erase(remove(x.begin(),x.end(),y),x.end());
    	cout<<"Modified String:"<<x<<endl;
}

/*OUTPUT
Enter string with more than 2 words::
Rhutvij Chiplunkar
using getline():Rhutvij Chiplunkar
Enter string with more than 2 words::
Rhutvij Chips
using cin:Rhutvij
------------------
String previously declared along with space
strings in c++
------------------
Creating copy of string
Strings
Strings
------------------
size(),max_size() and capacity()
18
4611686018427387903
18
------------------
For traversals
j
C
------------------
substr(),find(),rfind() and swap()
ial
After swap():
Lectures Tutorials
find() function:
1
rfind() function:
6
------------------
Remove a particular character from string
Enter a string::ababcdab
Enter a character you want to remove::a
Modified String:bbcdb
------------------
*/

