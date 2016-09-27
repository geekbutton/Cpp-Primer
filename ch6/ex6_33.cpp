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

int fact(vector<int>iv,decltype(iv.size()) i){
	if(i>0){
		cout<<iv[iv.size()-i]<<endl;
		return fact(iv,--i);
	}
	else return 0;
}


int main(){
	vector<int>iv;
	int x;
	while(cin>>x)
		iv.push_back(x);
	int i=iv.size();
	fact(iv,i);
	return 0;
}
