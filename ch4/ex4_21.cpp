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
	vector<int>iv;
	int x;
	while(cin>>x){
		(x%2!=0)?iv.push_back(2*x):iv.push_back(x);
	}
	for(auto c:iv)
		cout<<c<<endl;
	return 0;
}
