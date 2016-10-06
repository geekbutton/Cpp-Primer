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

using namespace std;



int main(){
	int x;
	vector<int>iv;
	while(cin>>x)
		iv.push_back(x);
	fill_n(iv.begin(),iv.size(),0);
	for(auto c:iv)
		cout<<c<<endl;
	return 0;
}




















