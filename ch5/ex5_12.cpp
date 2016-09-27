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
	int ffcnt=0,flcnt=0,ficnt=0;
	string s;
	while(cin>>s){
		for(int i=0;i<s.size();++i){
			if(s[i]=='f'){
				switch(s[i+1]){
					case'f':++ffcnt;break;
					case'l':++flcnt;break;
					case'i':++ficnt;break;
					default:break;
				}
			}
		}
	}
	cout<<"ffcnt:"<<ffcnt<<endl;
	cout<<"flcnt:"<<flcnt<<endl;
	cout<<"ficnt:"<<ficnt<<endl;
	return 0;
}
