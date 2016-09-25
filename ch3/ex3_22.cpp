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
//#include<algorithm>
//#include<stdio.h>
using namespace std;


int main(){
	vector<string>v;
	string s;
	while(cin>>s)
		v.push_back(s);
	for(auto c=v.begin();c!=v.end() && !c->empty();++c){
		for(auto &c1:*c)
			c1=toupper(c1);
		cout<<*c<<endl;
	}
	return 0;
}
