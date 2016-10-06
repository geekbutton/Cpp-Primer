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
#include<deque>
#include<forward_list>
#include<algorithm>

using namespace std;



int main(){
	string x,i;
	vector<string>iv;
	cin>>i;
	while(cin>>x)
		iv.push_back(x);
	cout<<count(iv.begin(),iv.end(),i)<<endl;
	return 0;
}




















