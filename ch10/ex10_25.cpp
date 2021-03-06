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
void elimDups(vector<string> &s){
	sort(s.begin(),s.end());
	auto c=unique(s.begin(),s.end());
	s.erase(c,s.end());
}
bool isShorter(const string &s1,const string &s2){
	return s1.size()<s2.size();
}
bool check_size(const string &s,string::size_type sz){
	return s.size()>=sz;
}
void big(vector<string>&sv,vector<string>::size_type n){
	elimDups(sv);
	stable_sort(sv.begin(),sv.end(),isShorter);
	auto c=find_if(sv.begin(),sv.end(),bind(check_size,_1,n));
	cout<<sv.end()-c<<endl;
	for(auto c2=c;c2!=sv.end();++c2)
		cout<<*c2<<endl;
}


int main(){
	vector<string>sv;
	string s;
	while(cin>>s)
		sv.push_back(s);
	big(sv,5);
	return 0;
}




















