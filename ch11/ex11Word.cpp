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
#include<map> 		//map,multimap
#include<set>		//set,multiset

using namespace std;
using namespace std::placeholders;
map<string,string> fact1(string s,map<string,string> &word){
	ifstream in(s);
	string x,x2,x3,y;
	while(getline(in,x)){
		istringstream is(x);
		is>>x2;
		while(is>>x3){
			y=y+x3;
			y=y+" ";
		}
		word.insert({x2,x3});
	}
	return word;
}
void fact2(string s,string s2,map<string,string> &word){
	ifstream in(s);
	ofstream out(s2);
	string x,x2;
	while(getline(in,x)){
		istringstream is(x);
		while(is>>x2){
			auto c=word.find(x2);
			if(c!=word.end())
				out<<c->second<<" ";
			else	out<<x2<<" ";
		}
		out<<"\n";
	}
}

int main(){
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	map<string,string>word;
	fact1(s1,word);
	fact2(s2,s3,word);
	return 0;
}




















