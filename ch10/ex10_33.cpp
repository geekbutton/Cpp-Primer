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
#include<fstream>
#include<sstream>
#include<map>
#include<list>
#include<deque>
#include<forward_list>
#include<algorithm>
#include<numeric>	//accumulate
#include<functional>

using namespace std;
using namespace std::placeholders;

int main(){
	ifstream fin("E:/C++/Cpp Primer/ch10/Test2.txt");
	istream_iterator<int>in(fin),eof;
	fstream fout("E:/C++/Cpp Primer/ch10/Result1.txt"),fout2("E:/C++/Cpp Primer/ch10/Result2.txt");
	ostream_iterator<int>out(fout," "),out2(fout2,"\n");
	while(in!=eof){
		if(*in%2)
			out=*in++;
		else out2=*in++;
	}
	return 0;
}




















