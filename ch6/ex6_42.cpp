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

string make_plural(size_t ctr,const string &word,const string &ending="s"){
	return (ctr>1)?word+ending:word;
}

int main(){
	cout<<make_plural(1,"success","es")<<endl<<make_plural(1,"failure")<<endl;
	cout<<make_plural(2,"success","es")<<endl<<make_plural(2,"failure")<<endl;
	return 0;
}
