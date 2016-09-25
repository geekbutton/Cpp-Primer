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
	string s,s1;
	//直接相连
	while(cin>>s1)
		s+=s1;
	cout<<s<<endl;

	//通过空格间隔
	if(cin>>s){
		while(cin>>s1)
			s=s+"　"+s1;
		cout<<s<<endl;
	}
	return 0;
}
