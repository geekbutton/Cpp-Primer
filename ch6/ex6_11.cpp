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

void reset(int &x){
	x=0;
}

int main(){
	int x;
	cin>>x;
	reset(x);
	cout<<x<<endl;;
	return 0;
}
