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

struct Sales_data{
	string bookNo;
	int units_sold=0;
	double revenue=0.0;
};

int main(){
	Sales_data item1,item2;
	double price=0.0,price2=0.0;
	cin>>item1.bookNo>>item1.units_sold>>price;
	cin>>item2.bookNo>>item2.units_sold>>price2;
	double revenue=item1.units_sold*price+item2.units_sold*price2;
	double price3=revenue/(item1.units_sold+item2.units_sold);
	cout<<item1.bookNo<<" "<<item1.units_sold+item2.units_sold<<" "<<revenue<<" "<<price3<<endl;
	return 0;
}
