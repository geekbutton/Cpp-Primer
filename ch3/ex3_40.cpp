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
	char c1[]="hello ";
	char c2[]="world";
	char c3[100]={};
	strcat(c1,c2);
	strcpy(c3,c1);
	for(auto c:c3)
		cout<<c;
	return 0;
}
