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
	Sales_data()=default;
	Sales_data(const string &s):bookNo(s){}
	Sales_data(const string &s,unsigned n,double p):bookNo(s),units_sold(n),price(p*n){}
	Sales_data(istream &is){read(cin,*this);}

	friend Sales_data add(const Sales_data ,const Sales_data );
	friend istream &read(istream &,Sales_data &);
	friend ostream &print(ostream &,Sales_data &);

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
private:
	string bookNo;
	unsigned units_sold=1;
	double revenue=0.0;
	double price=0.0;
};
//Sales_data add(const Sales_data ,const Sales_data );
//istream &read(istream &,Sales_data &);
//ostream &print(ostream &,Sales_data &);

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
ostream &print(ostream &os,Sales_data &x2){
	os<<x2.bookNo<<" "<<x2.units_sold<<" "<<x2.revenue<<" "<<(x2.revenue/x2.units_sold)<<endl;
	return os;
}

int main(){
	Sales_data s1;
	Sales_data s2("hello");
	Sales_data s3("world",1,10);
	Sales_data s4(cin);
	print(cout,s1);
	print(cout,s2);
	print(cout,s3);
	print(cout,s4);
	return 0;
}




















