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



int main(){
	ifstream in("E:/C++/Cpp Primer/ch8/Test1.txt");
	string s;
	vector<string>sv;
	while(getline(in,s))
		sv.push_back(s);
	for(auto c:sv){
		istringstream sin(c);
		string s2;
		while(sin>>s2)
			cout<<s2<<endl;
	}
	return 0;
}




















