//============================================================================
// Name        : HW.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<set>
#include<iomanip>
//#include<algorithm>
//#include<stdio.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	if (a==b)
		cout<<a<<endl;
	if(a<b){
		while(a<=b){
			cout<<a<<endl;
			++a;
		}
	}
	else if(a>b){
		while(b<=a){
			cout<<b<<endl;
			++b;
		}
	}

	return 0;
}
