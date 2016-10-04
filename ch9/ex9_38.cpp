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

using namespace std;
forward_list<string> fact(forward_list<string> &fs,string &s1,string &s2){
	auto c2=fs.before_begin();
	for(auto c=fs.begin();c!=fs.end();c2=c++){
		if(*c!=s1)
			continue;
		fs.insert_after(c,s2);
		return fs;
	}
	fs.insert_after(c2,s2);
	return fs;
}



int main(){
	vector<int>iv;
	cout<<iv.size()<<endl<<iv.capacity()<<endl;
	int x;
	while(cin>>x)
		iv.push_back(x);
	cout<<iv.size()<<endl<<iv.capacity()<<endl;
	iv.reserve(20);
	cout<<iv.size()<<endl<<iv.capacity()<<endl;
	while(iv.size()!=iv.capacity())
		iv.push_back(6);
	cout<<iv.size()<<endl<<iv.capacity()<<endl;
	iv.push_back(6);
	cout<<iv.size()<<endl<<iv.capacity()<<endl;
	return 0;
}




















