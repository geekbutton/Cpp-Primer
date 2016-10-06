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
	vector<int>iv{1,2,3,4,5,6,7,8,9};
	vector<int>iv1,iv2;
	list<int>iv3;
	copy(iv.begin(),iv.end(),inserter(iv1,iv1.begin()));
	copy(iv.begin(),iv.end(),back_inserter(iv2));
	copy(iv.begin(),iv.end(),front_inserter(iv3));
	for(auto c:iv1)
		cout<<c<<" ";
	cout<<endl;
	for(auto c:iv2)
			cout<<c<<" ";
	cout<<endl;
	for(auto c:iv3)
			cout<<c<<" ";

	return 0;
}




















