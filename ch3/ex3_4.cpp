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
	string s1,s2;
	cin>>s1>>s2;
	if(s1!=s2)
	{
		if(s1>s2)
			cout<<s1<<endl;
		else cout<<s2<<endl;
	}

	if(s1.size()!=s2.size()){
		if(s1.size()>s2.size())
			cout<<s1<<endl;
		else cout<<s2<<endl;
	}
	return 0;
}
