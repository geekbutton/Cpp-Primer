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
	list<int>il;
	int x;
	while(cin>>x)
		il.push_back(x);

	auto c=find(il.rbegin(),il.rend(),0);
	cout<<*--c<<endl;
	return 0;
}




















