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
#include<numeric>	//accumulate
#include<functional>

using namespace std;
using namespace std::placeholders;
bool check_size(const string &s,string::size_type sz){
	return s.size()<sz;
}

int main(){
	vector<int>iv;
	int x;
	string s;
	cin>>s;
	while(cin>>x)
		iv.push_back(x);
	auto c=find_if(iv.begin(),iv.end(),bind(check_size,s,_1));
	cout<<*c<<endl;
	return 0;
}




















