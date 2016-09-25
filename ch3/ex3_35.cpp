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
#include<iterator>
//#include<algorithm>
//#include<stdio.h>
using namespace std;


int main(){
	int arr[6]={};
	int x=0;
	for(int i=0;i<6;++i){
		cin>>x;
		arr[i]=x;
	}
	int *beg=begin(arr);
	int *last=end(arr);
	for(beg;beg!=last;++beg){
		*beg=0;
	}
	for(auto c:arr)
		cout<<c<<endl;
	return 0;
}
