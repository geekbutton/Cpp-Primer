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

void fact(int* &p,int* &q){
	int *a;
	a=p;
	p=q;
	q=a;
}


int main(){
	int a,b;
	cin>>a>>b;
	int *p=&a,*q=&b;
	fact(p,q);
	cout<<*p<<endl<<*q<<endl;
	return 0;
}
