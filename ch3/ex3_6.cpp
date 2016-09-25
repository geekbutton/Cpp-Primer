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
//#include<algorithm>
//#include<stdio.h>
using namespace std;


int main(){
	string s;
	cin>>s;
	for (auto &c:s)
		c='X';
	cout<<s<<endl;

	return 0;
}
