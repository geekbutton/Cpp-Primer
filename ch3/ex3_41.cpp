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
	int arr[6]={1,2,3,4,5,6};
	vector<int>iv(begin(arr),end(arr));
	for(auto c:iv)
		cout<<c<<endl;
	return 0;
}
