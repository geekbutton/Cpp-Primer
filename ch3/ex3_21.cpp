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
	vector<int>v1;
		vector<int>v2(10);
		vector<int>v3(10,42);
		vector<int>v4{10};
		vector<int>v5{10,42};
		vector<string>v6{10};
		vector<string>v7{10,"hi"};

		cout<<"v1:"<<v1.size()<<endl;
		for(auto c=v1.cbegin();c!=v1.cend();++c)
			cout<<*c<<" ";
		cout<<endl;
		cout<<"v2:"<<v2.size()<<endl;
			for(auto c=v2.cbegin();c!=v2.cend();++c)
				cout<<*c<<" ";
		cout<<endl;
		cout<<"v3:"<<v3.size()<<endl;
			for(auto c=v3.cbegin();c!=v3.cend();++c)
				cout<<*c<<" ";
		cout<<endl;
		cout<<"v4:"<<v4.size()<<endl;
			for(auto c=v4.cbegin();c!=v4.cend();++c)
				cout<<*c<<" ";
		cout<<endl;
		cout<<"v5:"<<v5.size()<<endl;
			for(auto c=v5.cbegin();c!=v5.cend();++c)
				cout<<*c<<" ";
		cout<<endl;
		cout<<"v6:"<<v6.size()<<endl;
			for(auto c=v6.cbegin();c!=v6.cend();++c)
				cout<<*c<<" ";
		cout<<endl;
		cout<<"v7:"<<v7.size()<<endl;
			for(auto c=v7.cbegin();c!=v7.cend();++c)
				cout<<*c<<" ";
		cout<<endl;
	return 0;
}
