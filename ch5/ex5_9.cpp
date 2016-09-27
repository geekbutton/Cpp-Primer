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
	char ch;
	int acnt=0,ecnt=0,icnt=0,ocnt=0,ucnt=0,othercnt=0;
	while(cin>>ch){
		if (ch=='a')
			++acnt;
		else if(ch=='e')
			++ecnt;
		else if(ch=='i')
			++icnt;
		else if(ch=='o')
			++ocnt;
		else if(ch=='u')
			++ucnt;
		else ++othercnt;
	}
	cout<<"a:"<<acnt<<endl;
	cout<<"e:"<<ecnt<<endl;
	cout<<"i:"<<icnt<<endl;
	cout<<"o:"<<ocnt<<endl;
	cout<<"u:"<<ucnt<<endl;
	cout<<"other:"<<othercnt<<endl;
	return 0;
}
