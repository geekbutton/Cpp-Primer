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
#include "Sales_item.h"
//#include<algorithm>
//#include<stdio.h>
using namespace std;

int main(){
	int a=1,b=2;
	int *p1=&a;
	int *p2=&b;
	p1=&b;
	*p2=a;
	cout<<*p1<<*p2<<endl;
	return 0;
}
