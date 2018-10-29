#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s="hello world!";
	for(int i=0;i<s.length();i++)
	cout<<s.at(i);
    cout << "sizeof(s) = " << sizeof(s); 
    cout << "\nstrlen(s) = "<< strlen(s); 
}

