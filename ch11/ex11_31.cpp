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
#include<map> 		//map,multimap
#include<set>		//set,multiset

using namespace std;
using namespace std::placeholders;

int main(){
	multimap<string,string>author{{"a","1"},{"a","2"},{"b","1"}};
	string s;
	cin>>s;
	auto c=author.find(s);
	if(c!=author.end())
		author.erase(s);
	for(auto c2=author.begin();c2!=author.end();++c2)
		cout<<c2->first<<" "<<c2->second<<endl;
	return 0;
}




















