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
	string s1,s2;
	cin>>s1>>s2;
	char c1[]={'h','e'};
	char c2[]={'h','a'};
	if(s1==s2)
		cout<<"s1=s2"<<endl;
	else if(s1>s2)
		cout<<"s1>s2"<<endl;
	else cout<<"s1<s2"<<endl;

	if(strcmp(c1,c2)==0)
		cout<<"c1==c2"<<endl;
	else if(strcmp(c1,c2)>0)
		cout<<"c1>c2"<<endl;
	else cout<<"c1<c2"<<endl;
	return 0;
}
