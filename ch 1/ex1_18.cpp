//============================================================================
// Name        : HW.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<set>
#include<iomanip>
//#include<algorithm>
//#include<stdio.h>
using namespace std;

int main(){
	int a,b;
	if(cin>>a){
		int n=1;
		while(cin>>b){
			if(b==a)
				++n;
			else
			{
				cout<<a<<" occurs "<<n<<" times"<<endl;
				a=b;
				n=1;
			}

		}
		cout<<a<<" occurs "<<n<<" times"<<endl;
	}

	return 0;
}
