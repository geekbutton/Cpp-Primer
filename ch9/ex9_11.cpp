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
vector<int>::iterator fact(vector<int>::iterator begin,vector<int>::iterator last,int i){
	for(;begin!=last;++begin)
		if(*begin==i)
			return begin;
	return last;
}



int main(){
	vector<int>iv={1,2,3,4,5,6};

	vector<int>iv1;
	vector<int>iv2=iv;
	vector<int>iv3={1,2,3};
	vector<int>iv4=(iv.begin(),iv.end());
	vector<int>iv5=(6);
	vector<int>iv6=(6,6);
	return 0;
}




















