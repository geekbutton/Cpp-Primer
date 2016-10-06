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

int main(){
	ifstream fin("E:/C++/Cpp Primer/ch10/Test1.txt");
	istream_iterator<string>in(fin),eof;
	vector<string>sv;
	while(in!=eof)
		sv.push_back(*in++);
	for(auto c:sv)
		cout<<c<<endl;
	return 0;
}




















