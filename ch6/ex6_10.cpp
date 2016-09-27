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

void fact(int *p,int *q){
	int x;
	x=*p;
	*p=*q;
	*q=x;
}

int main(){
	int x,y;
	cin>>x>>y;
	fact(&x,&y);
	cout<<x<<endl<<y<<endl;
	return 0;
}
