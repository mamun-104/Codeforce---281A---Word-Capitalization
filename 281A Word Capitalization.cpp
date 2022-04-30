#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    char c;
    c=s[0];

    if(c > 'Z'){c=c-32;}

    s[0]=c;

    cout<<s<<endl;




    return 0;
}
