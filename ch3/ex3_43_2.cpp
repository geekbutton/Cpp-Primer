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
	int ia[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
	for(int i=0;i<3;++i){
		for(int j=0;j<4;++j)
			cout<<ia[i][j]<<endl;
	}
	return 0;
}
