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
void elimDups(vector<string> &s){
	sort(s.begin(),s.end());
	auto c=unique(s.begin(),s.end());
	s.erase(c,s.end());
}
bool isShorter(const string &s1,const string &s2){
	return s1.size()<s2.size();
}
bool fact(string &s){
	return (s.size()>=5)?true:false;
}


int main(){
	int i=6;
	auto f=[i](int &i2){return i+i2;};
	return 0;
}




















