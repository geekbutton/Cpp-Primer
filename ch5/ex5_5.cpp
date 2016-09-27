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
	vector<char> sv={'F','D','C','B','A'};
	int grade=0;
	while(cin>>grade){
	if(grade==100)
		cout<<"A++"<<endl;
	else if (grade<60)
		cout<<sv[0]<<endl;
	else{
		if(grade%10>7)
			cout<<sv[(grade-50)/10]<<'+'<<endl;
		else if(grade%10<3)
			cout<<sv[(grade-50)/10]<<'-'<<endl;
		else cout<<sv[(grade-50)/10]<<endl;
	}}
	return 0;
}
