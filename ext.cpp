//This program is to test the extern keyword 
//using extern also requires to re declare and initialise the variables inside the main function
#include<iostream>
using namespace std;
extern int a, b, c;
int main(){
int a,b,c;
cout<<"Enter the value for a : "<<endl;
cin>>a;
cout<<"Enter the value for b : "<<endl;
cin>>b;
c = a+b;
cout<< "The sum is : "<<c<<endl;
}
