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
#include<list>

using namespace std;
vector<int>::iterator fact(vector<int>::iterator begin,vector<int>::iterator last,int i){
	for(;begin!=last;++begin)
		if(*begin==i)
			return begin;
	return last;
}



int main(){
	vector<int>iv={1,2,3,4,5,6},iv2;
	int x;
	while(cin>>x)
		iv2.push_back(x);
	if(iv==iv2)
		cout<<"True"<<endl;
	else if(iv<iv2)
		cout<<"iv<iv2"<<endl;
	else cout<<"iv>iv2"<<endl;
	return 0;
}




















