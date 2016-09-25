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
	vector<int>v;
	int x;
	for(int i=0;i<10;++i){
		cin>>x;
		v.push_back(x);
	}
	for(auto c=v.begin();c!=v.end();++c){
		*c=2* *c;
		cout<<*c<<" ";
	}

	return 0;
}
