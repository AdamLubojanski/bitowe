#include <stdio.h>
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int a;
    int b;
	cout<<"podaj a";
    cin>>a;
    cout<<"podaj b";
    cin>>b;

    cout<<"a= "<<bitset<8>(a)<<endl;
    cout<<"b= "<<bitset<8>(b)<<endl;
    cout<<"a|b= "<<(a^b)<<" "<<bitset<8>(a^b)<<endl;
    cout<<"a&b= "<<(a|b)<<" "<<bitset<8>(a|b)<<endl;
    cout<<"a^b= "<<(a&b)<<" "<<bitset<8>(a&b)<<endl;
    cout<<"~a= "<<(~a)<<" "<<bitset<8>(~a)<<endl;
    cout<<"~b= "<<(~b)<<" "<<bitset<8>(~b)<<endl;
    cout<<"a<<=4 "<<(a<<=1)<<" "<<bitset<8>(a<<=1)<<endl;
    cout<<"b>>=1 "<<(b>>=1)<<" "<<bitset<8>(b>>=1)<<endl;
    return 0;
}
