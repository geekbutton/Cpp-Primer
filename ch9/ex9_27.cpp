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
vector<int>::iterator fact(vector<int>::iterator begin,vector<int>::iterator last,int i){
	for(;begin!=last;++begin)
		if(*begin==i)
			return begin;
	return last;
}



int main(){
	forward_list<int>fi;
	auto c=fi.before_begin();
	int x;
	while(cin>>x)
		c=fi.insert_after(c,x);
	auto c2=fi.begin();
	c=fi.before_begin();
	while(c2!=fi.end()){
		if(*c2%2!=0)
			c2=fi.erase_after(c);
		else{
			c=c2;
			++c2;
		}
	}
	for(auto i:fi)
		cout<<i<<endl;
	return 0;
}




















