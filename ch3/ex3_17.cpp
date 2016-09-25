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
	vector<string>v1;
	string s;
	while(cin>>s)
		v1.push_back(s);
	for(auto &c:v1){
		for(auto &c2:c)
			c2=toupper(c2);
	}
	for(auto c:v1)
		cout<<c<<endl;
	return 0;
}
