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
		while(cin>>item2){
			if(item2.isbn()==item.isbn())
				item+=item2;
			else{
				cout<<item<<endl;
				item=item2;
			}
		}
		cout<<item<<endl;
	}
	return 0;
}
