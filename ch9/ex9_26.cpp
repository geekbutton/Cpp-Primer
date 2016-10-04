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

using namespace std;
vector<int>::iterator fact(vector<int>::iterator begin,vector<int>::iterator last,int i){
	for(;begin!=last;++begin)
		if(*begin==i)
			return begin;
	return last;
}



int main(){
	vector<int>iv;
	list<int>il;
	int ia[]={0,1,1,2,3,5,8,13,21,55,89};
	for(auto c:ia){
		iv.push_back(c);
		il.push_back(c);
	}
	auto c=iv.begin();
	auto c2=il.begin();
	while(c!=iv.end()){
		if(*c%2==0)
			c=iv.erase(c);
		else ++c;
	}
	while(c2!=il.end()){
		if(*c2%2!=0)
			c2=il.erase(c2);
		else ++c2;
		}
	for(auto c:iv)
		cout<<c<<endl;
	cout<<endl;
	for(auto c:il)
		cout<<c<<endl;
	return 0;
}




















