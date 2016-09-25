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
	vector<int>v(11);
	int x;
	auto c=v.begin();
	while(cin>>x){
		(*(c+x/10))++;
	}
	for(auto c:v)
		cout<<c<<endl;
	return 0;
}
