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
	istream_iterator<int>in(cin),eof;
	ostream_iterator<int>out(cout);
	vector<int>iv;
	copy(in,eof,back_inserter(iv));
	sort(iv.begin(),iv.end());
	copy(iv.begin(),iv.end(),out);
	return 0;
}




















