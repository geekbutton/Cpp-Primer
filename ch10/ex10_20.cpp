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

using namespace std;
bool fact(string &s){
	return s.size()>6;
}

int main(){
	vector<string>sv;
	string s;
	while(cin>>s)
		sv.push_back(s);
	cout<<count_if(sv.begin(),sv.end(),fact)<<endl;
	return 0;
}




















