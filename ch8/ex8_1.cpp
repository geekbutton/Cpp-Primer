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
istream &fact(istream& is){
	string s;
	while(is>>s)
		cout<<s<<endl;
	is.clear();
	return is;
}

int main(){
	fact(cin);
	return 0;
}




















