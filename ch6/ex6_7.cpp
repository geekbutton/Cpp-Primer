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

int fact(){
	static int x=0;
	return x++;
}

int main(){
	for(int i=0;i<10;++i)
		cout<<fact()<<endl;
	return 0;
}
