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
	string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};

int main(){

	 Sales_data sd1,sd2;
	 if(cin>>sd1.bookNo>>sd1.units_sold>>sd1.revenue){
		 double price=sd1.units_sold*sd1.revenue;
		 while(cin>>sd2.bookNo>>sd2.units_sold>>sd2.revenue){
			 if(sd1.bookNo==sd2.bookNo){
				 sd1.units_sold+=sd2.units_sold;
				 price+=sd2.units_sold*sd2.revenue;
			 }
			 else{
				 cout<<sd1.bookNo<<" "<<sd1.units_sold<<" "<<price<<" "<<sd1.revenue<<endl;
				 sd1.bookNo=sd2.bookNo;
				 sd1.units_sold=sd2.units_sold;
				 sd1.revenue=sd2.revenue;
				 price=sd1.units_sold*sd1.revenue;
			 }
		 }
		 cout<<sd1.bookNo<<" "<<sd1.units_sold<<" "<<price<<" "<<sd1.revenue<<endl;
	 }
	 else cerr<<"No data"<<endl;
	return 0;
}
