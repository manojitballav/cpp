//This program is to test how a function works in cpp
#include<iostream>
using namespace std;
int a, b, c;
void sum(int, int);
int main(){
cout<<"Enter the value of a :"<<endl;
cin>>a;
cout<<"Enter the value of b :"<<endl;
cin>>b;
sum(a,b);
return 0;
}
void sum(int,int){
c = a+b;
cout<<"Sum is : "<<c<<endl;
}

