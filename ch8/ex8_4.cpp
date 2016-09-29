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

using namespace std;
ifstream &fact(ifstream& in){
	vector<string>sv;
	string s;
	in.open("E:/C++/Cpp Primer/ch8/Test1.txt");
	while(getline(in,s))
		sv.push_back(s);
	for(auto c:sv)
		cout<<c<<endl;
	return in;
}

int main(){
	ifstream input;
	fact(input);
	return 0;
}




















