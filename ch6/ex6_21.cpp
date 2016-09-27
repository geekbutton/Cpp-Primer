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
//#include<algorithm>
//#include<stdio.h>
using namespace std;

int fact(int a,const int *p){
	return (a>*p)?a:*p;
}


int main(){
	int a,b;
	cin>>a>>b;
	int *p=&b;
	cout<<fact(a,p)<<endl;
	return 0;
}
