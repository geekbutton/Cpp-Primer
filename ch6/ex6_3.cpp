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

int fact(int x){
	int sum=1;
	while(x>1){
		sum*=x;
		--x;
	}
	return sum;
}

int main(){
	int x;
	cin>>x;
	cout<<fact(x)<<endl;
	return 0;
}
