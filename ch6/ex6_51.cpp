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

void f(){
	cout<<"one"<<endl;
}
void f(int i){
	cout<<"two"<<endl;
}
void f(int i1,int i2){
	cout<<"three"<<endl;
}
void f(double d1,double d2){
	cout<<"four"<<endl;
}

int main(){
//	f(2.56,42); wrong
	f(42);
	f(42,0);
	f(2.56,3.14);
	return 0;
}
