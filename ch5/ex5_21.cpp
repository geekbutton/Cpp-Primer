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
	string s,s2;
	cin>>s;
	while(cin>>s2){
		if(!isupper(s2[0]))
			continue;
		if(s==s2){
			cout<<s<<endl;
			break;
		}
		else
			s=s2;
	}
	if (cin.eof())
		cout<<"no repeated"<<endl;
	return 0;
}
