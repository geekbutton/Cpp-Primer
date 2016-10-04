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
	vector<int>iv={1,2,3};
	int a,b,c,d;
	a=iv.at(0);
	b=iv[0];
	c=iv.front();
	d=iv.back();
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	return 0;
}




















