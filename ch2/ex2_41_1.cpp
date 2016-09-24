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
	Sales_data item1;
	double price=0.0;
	cin>>item1.bookNo>>item1.units_sold>>price;
	item1.revenue=item1.units_sold*price;
	cout<<item1.bookNo<<" "<<item1.units_sold<<" "<<item1.revenue<<" "<<price<<endl;
	return 0;
}
