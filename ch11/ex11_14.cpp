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
	vector<pair<string,string>>pv;
		string x;
		vector<string>sv;
		while(1){
			if(cin>>x && x!="end"){
				string s;
				string i;
				while(cin>>s>>i && s!="end"){
					family[x].push_back(s);
					pv.push_back({s,i});
				}
			}
			else break;
		}
		for(auto c:family){
			cout<<c.first<<endl;
			for(auto c2:c.second){
				cout<<c2<<" ";
				for(auto c3=pv.begin();c3!=pv.end();++c3){
					if(c3->first==c2)
						cout<<c3->second<<endl;;
				}
				cout<<endl;
			}

		}
	return 0;
}




















