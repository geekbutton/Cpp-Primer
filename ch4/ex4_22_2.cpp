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
		if(grade>=90)
			cout<<"high pass"<<endl;
		else if(grade>=75)
			cout<<"pass"<<endl;
		else if(grade>=60)
			cout<<"low pass"<<endl;
		else cout<<"fail"<<endl;
	}

	return 0;
}
