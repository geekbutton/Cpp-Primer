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
	vector<string> sv={"F","D","C","B","A"};
	int grade=0;
	string level;
	while(cin>>grade){
		level=(grade==100)?"A++":(grade>=60)?sv[(grade-50)/10]:"F";
		string level2=(grade%10>7)?"+":(grade%10<3 && grade!=100)?"-":"";
		cout<<level+level2<<endl;
	}
	return 0;
}
