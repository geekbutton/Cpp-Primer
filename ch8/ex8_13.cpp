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

using namespace std;
istream &fact(istream& is){
	string s;
	while(is>>s)
		cout<<s<<endl;
	is.clear();
	return is;
}

struct Personinfo{
	string name;
	vector<string>phones;
};

int main(){
	string s,s1;
	getline(cin,s);
	ifstream in(s);
	Personinfo pi;
	vector<Personinfo>pi2;
	while(getline(in,s1)){
		istringstream sin(s1);
		string s3;
		sin>>s3;
		pi.name=s3;
		while(sin>>s3)
			(pi.phones).push_back(s3);
		pi2.push_back(pi);
		pi.phones={};
	}
	for(auto c:pi2){
		cout<<c.name<<endl;
		for(auto c2:c.phones)
			cout<<c2<<" "<<endl;
	}
	return 0;
}




















