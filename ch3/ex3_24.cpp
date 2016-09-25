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
//#include<algorithm>
//#include<stdio.h>
using namespace std;


int main(){
	vector<int>v;
	int x;
	while(cin>>x)
		v.push_back(x);
	for(auto c=v.begin();c!=v.begin()+v.size()/2;++c)
		cout<<(*c+*(v.end()-(c-v.begin())-1))<<endl;
	if(v.size()%2!=0)
		cout<<*(v.begin()+v.size()/2)<<endl;
	return 0;
}
