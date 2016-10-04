//============================================================================
// Name        : HW.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<iterator>//beign(),end()
#include<cstring>
#include<cstdlib>//abs()
#include<initializer_list>
#include<fstream>
#include<sstream>
#include<map>
#include<list>
#include<deque>
#include<forward_list>

using namespace std;
forward_list<string> fact(forward_list<string> &fs,string &s1,string &s2){
	auto c2=fs.before_begin();
	for(auto c=fs.begin();c!=fs.end();c2=c++){
		if(*c!=s1)
			continue;
		fs.insert_after(c,s2);
		return fs;
	}
	fs.insert_after(c2,s2);
	return fs;
}



int main(){
	list<int>il={0,1,2,3,4,5,6,7,8,9};
	auto c=il.begin();
	while(c!=il.end()){
		if(*c%2){
			c=il.insert(c,*c);
			++c;
			++c;
		}
		else c=il.erase(c);
	}
	for(auto c2:il)
		cout<<c2<<endl;
	return 0;
}




















