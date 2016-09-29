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



struct Person{
	string rname()const{return name;}
	string raddress()const{return address;}

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

int main(){
	Person x;
	read(cin,x);
	print(cout,x);

	return 0;
}




















