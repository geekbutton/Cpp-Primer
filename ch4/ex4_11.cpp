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
	int a,b,c,d;
	while(cin>>a>>b>>c>>d){
	if(a>b && b>c && c>d)
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	else cout<<"NOT OK"<<endl;
	}
	return 0;
}
