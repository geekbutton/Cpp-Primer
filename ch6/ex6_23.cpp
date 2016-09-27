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

void print(const int a){
	cout<<a<<endl;
}
void print2(const int *beg,const int *last){
	while(beg!=last)
		cout<<*beg++<<endl;
}

int main(){
	int i=0;
	int j[2]={0,1};
	print(i);
	int *beg=begin(j);
	int *last=end(j);
	print2(beg,last);
	return 0;
}
