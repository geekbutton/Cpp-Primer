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
struct Sales_data;
istream &read(istream &,Sales_data &);

struct Person{
	Person()=default;
	Person(string s,string s2):name(s),address(s2){}
	Person(istream &is);

	friend istream &read(istream &,Person &);
	friend ostream &print(ostream &,Person );

	string rname()const{return name;}
	string raddress()const{return address;}
private:
	string name;
	string address;
};
istream &read(istream &is,Person &item){
	is>>item.name>>item.address;
	return is;
}
ostream &print(ostream &os,Person item){
	os<<item.name<<" "<<item.address<<endl;
	return os;
}
Person::Person(istream &is){
	read(is,*this);
}

int main(){
	Person p;
	Person p2("mokaka","ezhou");
	Person p3(cin);
	print(cout,p);
	print(cout,p2);
	print(cout,p3);
	return 0;
}




















