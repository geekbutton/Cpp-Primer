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
	multimap<string,string>author{{"a","1"},{"b","3"},{"b","1"},{"c","1"},{"a","2"},{"b","2"}};
	map<string,multiset<string>>x;
	for(auto &c:author)
		x[c.first].insert(c.second);
	for(auto c:x){
		cout<<c.first<<endl;
		for(auto c2:c.second)
			cout<<c2<<" ";
		cout<<endl;
	}
	return 0;
}




















