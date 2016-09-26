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
	int grade;
	string s;
	while(cin>>grade){
	s=(grade>=90)?"high pass":(grade>=75)?"pass":(grade>=60)?"low pass":"fail";
	cout<<s<<endl;
	}

	return 0;
}
