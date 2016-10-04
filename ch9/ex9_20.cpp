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
	list<int>il;
	deque<int>id1,id2;
	int x;
	while(cin>>x)
		il.push_back(x);
	for(auto c:il){
		if(c%2==0)
			id1.push_back(c);
		else id2.push_back(c);
	}
	for(auto c:id1)
		cout<<c<<endl;
	cout<<endl;
	for(auto c:id2)
		cout<<c<<endl;
	return 0;
}




















