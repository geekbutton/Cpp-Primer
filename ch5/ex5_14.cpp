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
//#include<algorithm>
//#include<stdio.h>
using namespace std;



int main(){
	vector<string>sv;
	string s,x;
	while(cin>>s)
		sv.push_back(s);
	x=sv[0];
	int n=1,n2=0;
	for(decltype(sv.size()) i=1;i<sv.size();++i){
		if(x==sv[i])
			++n;
		else {
			if(n>n2){
				n2=n;
				s=x;
			}
			x=sv[i];
			n=1;
			continue;
		}
		if(n>n2){
			n2=n;
			s=x;
		}
	}
	if(n2>1)
		cout<<s<<':'<<n2<<endl;
	else cout<<"No one"<<endl;
	return 0;
}
