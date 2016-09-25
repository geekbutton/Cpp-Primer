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
	vector<int>v1;
	int x;
	while(cin>>x)
		v1.push_back(x);
	decltype(v1.size()) n=v1.size();
	for(int i=0;i<n-1;++i)
		cout<<(v1[i]+v1[i+1])<<endl;
	return 0;
}
