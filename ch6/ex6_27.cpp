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

int fact(initializer_list<int>ii){
	int sum=0;
	for(auto beg=ii.begin();beg!=ii.end();++beg)
		sum+=*beg;
	return sum;
}


int main(){
	cout<<fact({1,2,3,4,5,6,7,8,9,10})<<endl;
	return 0;
}
