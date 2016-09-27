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

bool fact(const string &s){
	for(auto c:s){
		if(isupper(c))
			return true;
	}
	return false;
}
void fact2(string &s){
	for(auto &c:s)
		c=tolower(c);
}

int main(){
	string s;
	cin>>s;
	if(fact(s))
		cout<<"True"<<endl;
	else cout<<"False"<<endl;
	fact2(s);
	for(auto c:s)
		cout<<c;
	return 0;
}
