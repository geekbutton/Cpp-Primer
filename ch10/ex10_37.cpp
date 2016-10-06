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
	list<int>il(5);
	vector<int>iv(10);
	int x,n=10;
	while(n--){
		cin>>x;
		iv.push_back(x);
	}

	copy(iv.rbegin()+3,iv.rbegin()+8,il.begin());
	for(auto c:il)
		cout<<c<<endl;
	return 0;
}




















