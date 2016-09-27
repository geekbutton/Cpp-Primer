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
	 vector<int>iv,iv2={0,1,1,2,3,5,8};
	 int x;
	 while(cin>>x)
		 iv.push_back(x);
	 auto n=iv.size();
	 auto n2=iv2.size();
	 int i=(n>n2)?n2:n;
	 for(int c=0;c<i;++c){
		 if(iv[c]!=iv2[c]){
			 cout<<"False"<<endl;
			 return 0;
		 }
	 }
	cout<<"True"<<endl;
	return 0;
}
