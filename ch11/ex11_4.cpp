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
	map<string,size_t>word_count;
	string s;
	while(cin>>s){
		for(auto &c:s)
			c=tolower(c);
		for(auto c=s.begin();c!=s.end();){
			if(ispunct(*c))
				c=s.erase(c);
			else ++c;
		}
		++word_count[s];
	}
	for(auto c:word_count)
		cout<<c.first<<" occurs "<<c.second<<((c.second>1)?" times":" time")<<endl;
	return 0;
}




















