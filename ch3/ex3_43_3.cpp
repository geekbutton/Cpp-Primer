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
	//using int_arr=int [4];

	int ia[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
	for(int (*p)[4]=begin(ia);p!=end(ia);++p){	//int_arr *p=begin(ia);
		for(int *q=(*p);q!=end(*p);++q)
			cout<<*q<<endl;
	}
	return 0;
}
