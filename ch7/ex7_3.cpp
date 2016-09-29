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

int main(){
	 double price=0.0,price2=0.0;
	 Sales_data sd1,sd2;
	 if(cin>>sd1.bookNo>>sd1.units_sold>>price){
		 sd1.revenue=sd1.units_sold*price;
		 while(cin>>sd2.bookNo>>sd2.units_sold>>price2){
			 sd2.revenue=sd2.units_sold*price2;
			 if(sd1.bookNo==sd2.bookNo){
				 sd1.combine(sd2);
				 price=sd1.aprice();
			 }
			 else{
				 cout<<sd1.isbn()<<" "<<sd1.units_sold<<" "<<price<<" "<<sd1.revenue<<endl;
				 sd1.bookNo=sd2.bookNo;
				 sd1.units_sold=sd2.units_sold;
				 sd1.revenue=sd2.revenue;
			 }
		 }
		 cout<<sd1.isbn()<<" "<<sd1.units_sold<<" "<<price<<" "<<sd1.revenue<<endl;
	 }
	 else cerr<<"No data"<<endl;
	return 0;
}
