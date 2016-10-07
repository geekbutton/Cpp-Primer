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
	map<string,vector<string>>family;
	string x;
	vector<string>sv;
	while(1){
		if(cin>>x && x!="end"){
			string s;
			while(cin>>s && s!="end")
				family[x].push_back(s);
		}
		else break;
	}
	for(auto c:family){
		cout<<c.first<<endl;
		for(auto c2:c.second)
			cout<<c2<<" ";
		cout<<endl;
	}
	return 0;
}




















