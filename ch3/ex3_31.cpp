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
	int arr[10]={};
	for(int i=0;i<10;++i)
		arr[i]=i;
	for(auto c:arr)
		cout<<c<<endl;
	return 0;
}
