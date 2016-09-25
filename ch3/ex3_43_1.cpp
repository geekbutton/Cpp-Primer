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
	for(int (&arr)[4]:ia){	//int_arr &arr:ia;
		for(int x:arr)
			cout<<x<<endl;
	}
	return 0;
}
