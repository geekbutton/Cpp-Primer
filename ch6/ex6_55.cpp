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

int fact1(int a,int b){
	return a+b;
}
int fact2(int a,int b){
	return a-b;
}
int fact3(int a,int b){
	return a*b;
}
int fact4(int a,int b){
	return a/b;
}

int main(){
//	f(2.56,42); wrong
	vector<int (*)(int,int)>iv;
	iv.push_back(fact1);
	iv.push_back(fact2);
	iv.push_back(fact3);
	iv.push_back(fact4);
	int a,b,i;
	cin>>a>>b>>i;
	cout<<iv[i](a,b)<<endl;
	return 0;
}
