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
	int acnt=0,ecnt=0,icnt=0,ocnt=0,ucnt=0,othercnt=0,xcnt=0,ycnt=0,zcnt=0;
	while(cin>>noskipws>>ch){
		if (ch=='a'|| ch=='A')
			++acnt;
		else if(ch=='e'|| ch=='E')
			++ecnt;
		else if(ch=='i' || ch=='I')
			++icnt;
		else if(ch=='o' || ch=='O')
			++ocnt;
		else if(ch=='u' || ch=='U')
			++ucnt;
		else if(ch==' ')
			++xcnt;
		else if(ch=='\t')
			++ycnt;
		else if(ch=='\n')
			++zcnt;
		else ++othercnt;
	}
	cout<<"a:"<<acnt<<endl;
	cout<<"e:"<<ecnt<<endl;
	cout<<"i:"<<icnt<<endl;
	cout<<"o:"<<ocnt<<endl;
	cout<<"u:"<<ucnt<<endl;
	cout<<"space:"<<xcnt<<endl;
	cout<<"\\t:"<<ycnt<<endl;
	cout<<"\\n:"<<zcnt<<endl;
	cout<<"other:"<<othercnt<<endl;
	return 0;
}
