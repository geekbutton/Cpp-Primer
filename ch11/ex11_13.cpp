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
	vector<pair<string,int>>pv,pv2,pv3;
	string s;
	int x;
	while(cin>>s>>x){
		pv.push_back({s,x});
		pv2.push_back(make_pair(s,x));
		pv3.push_back(pair<string,int>(s,x));
	}
	for(auto c:pv){
		cout<<c.first<<" "<<c.second<<endl;
	}
	for(auto c:pv2){
			cout<<c.first<<" "<<c.second<<endl;
		}
	for(auto c:pv3){
			cout<<c.first<<" "<<c.second<<endl;
		}
	return 0;
}




















