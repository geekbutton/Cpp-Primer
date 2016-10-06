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
	vector<int>iv;
	int x;
	while(cin>>x)
		iv.push_back(x);
	list<int>il;
	unique_copy(iv.begin(),iv.end(),back_inserter(il));
	for(auto c:il){
		  cout<<c<<endl;
	}
	return 0;
}




















