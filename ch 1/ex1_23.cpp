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
#include "Sales_item.h"
//#include<algorithm>
//#include<stdio.h>
using namespace std;

int main(){
	Sales_item item,item2;
	if(cin>>item){
		int n=1;
		while(cin>>item2){
			if(item2.isbn()==item.isbn())
				++n;
			else{
				cout<<item.isbn()<<" occurs "<<n<<" times"<<endl;
				item=item2;
				n=1;
			}
		}
		cout<<item.isbn()<<" occurs "<<n<<" times"<<endl;
	}
	return 0;
}
