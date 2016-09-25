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
#include<iterator>
//#include<algorithm>
//#include<stdio.h>
using namespace std;

bool func1(int *beg,int *last,int *beg2,int *last2){
		if((last-beg)==(last2-beg2)){
			for(int i=0;i<(last-beg);++i){
				if(*(beg+i)!=*(beg2+i))
					return false;
			}
			return true;
		}
		else return false;
	}

int main(){
	int arr[3]={0,1,2},arr2[4]={0,1,2,3};
	int *beg=begin(arr);
	int *beg2=begin(arr2);
	int *last=end(arr);
	int *last2=end(arr2);
	if(func1(beg,last,beg2,last2))
		cout<<"OK"<<endl;
	else cout<<"Not OK"<<endl;

	vector<int>iv={0,1,2};
	vector<int>iv2={0,1,2};
	if(iv==iv2)
		cout<<"OK vector"<<endl;
	else cout<<"Not OK vector"<<endl;
	return 0;
}
