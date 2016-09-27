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


using namespace std;



int main(){
//	f(2.56,42); wrong
	int func(int a, int b);

	using pFunc1 = decltype(func) *;
	typedef decltype(func) *pFunc2;
	using pFunc3 = int (*)(int a, int b);
	using pFunc4 = int(int a, int b);
	typedef int(*pFunc5)(int a, int b);
	using pFunc6 = decltype(func);

	vector<pFunc1> vec1;
	vector<pFunc2> vec2;
	vector<pFunc3> vec3;
	vector<pFunc4*> vec4;
	vector<pFunc5> vec5;
	vector<pFunc6*> vec6;
	return 0;
}
