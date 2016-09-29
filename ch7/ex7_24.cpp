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
class Screen{
public:
	typedef string::size_type pos;
	Screen()=default;
	Screen(pos hi,pos wi):height(hi),width(wi),contents(hi*wi," "){}
	Screen(pos hi,pos wi,char c):height(hi),width(wi),contents(hi*wi,c){}

	inline char get(pos hi,pos c);
	Screen &move(pos r,pos c);
private:
	pos cursor=0;
	pos height=0,width=0;
	string contents;

};
inline Screen &Screen::move(pos r,pos c){
	pos row=r*width;
	cursor=row+c;
	return *this;
}
char Screen::get(pos hi,pos c){
	pos row=r*hi;
	return contents[row+c];
}

int main(){

	return 0;
}




















