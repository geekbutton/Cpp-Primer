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
#include<cstdlib>//abs()
#include<initializer_list>


using namespace std;

struct Sales_data{
	string isbn(){return bookNo;}
	Sales_data &combine(Sales_data sx){
		units_sold+=sx.units_sold;
		revenue+=sx.revenue;
		return *this;
	}
	double aprice()const{
		if(units_sold)
			return revenue/units_sold;
		else return 0;
	}

	string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};
Sales_data add(const Sales_data x1,const Sales_data x2){
	Sales_data sum=x1;
	sum.combine(x2);
	return sum;
}
istream &read(istream &is,Sales_data &x1){
	double price=0.0;
	is>>x1.bookNo>>x1.units_sold>>price;
	x1.revenue=x1.units_sold*price;
	return is;
}
ostream &print(ostream &os,Sales_data x2){
	os<<x2.bookNo<<" "<<x2.units_sold<<" "<<x2.revenue<<" "<<(x2.revenue/x2.units_sold)<<endl;
	return os;
}

int main(){
	double price,price2;
	Sales_data sd1,sd2;
	if(read(cin,sd1)){
		while(read(cin,sd2)){
			if(sd1.bookNo==sd2.bookNo)
				sd1.combine(sd2);
			else{
				print(cout,sd1);
				sd1=sd2;
			}
		}
		print(cout,sd1);
	}
	else cout<<"No data"<<endl;
	return 0;
}




















