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
#include<fstream>
#include<sstream>
#include<map>

using namespace std;
bool fact(vector<int>::iterator begin,vector<int>::iterator last,int i){
	for(;begin!=last;++begin)
		if(*begin==i)
			return true;
	return false;
}



int main(){
	int x,i;
	vector<int>iv;
	cin>>i;
	while(cin>>x)
		iv.push_back(x);
	cout<<fact(iv.begin(),iv.end(),i)<<endl;
	return 0;
}




















