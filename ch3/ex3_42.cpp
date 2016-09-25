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
//#include<algorithm>
//#include<stdio.h>
using namespace std;



int main(){
	vector<int>iv={};
	int arr[6],x;
	for(int i=0;i<6;i++){
		cin>>x;
		iv.push_back(x);
	}
	int i=0;
	for(auto beg=begin(arr);beg!=end(arr);++beg){

		*beg=iv[i];
		++i;
	}
	for(auto c:arr)
		cout<<c<<endl;
	return 0;
}
