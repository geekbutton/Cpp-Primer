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
class Nodefault{
public:
	Nodefault(int i){}
};
class C{
public:
	C():no(0){}
	Nodefault no;
};

int main(){
	C c;

	return 0;
}




















