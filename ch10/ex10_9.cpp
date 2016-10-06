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

using namespace std;
void elimDups(vector<string> &s){
	sort(s.begin(),s.end());
	auto c=unique(s.begin(),s.end());
	s.erase(c,s.end());
}


int main(){
	vector<string>num{"the","apple","and","the","orange","and","youni"};
	elimDups(num);
	for(auto c:num)
		cout<<c<<endl;
	return 0;
}




















