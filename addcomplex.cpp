#include<iostream>
#include<conio.h>
using namespace std;
class complex{
    int real,imaginary;
public:
   void getcomplex();
       void displaycomplex();
       void addcomplex();
       };
 void complex:: getcomplex(){
 cout<<"enter the value of real and imaginary number:"<<endl;
 cin>>real>>imaginary;
 displaycomplex();
 }
 void complex:: displaycomplex(){
 cout<<"the complex no is:"<<real<<"+i"<<imaginary<<endl;
 C.real=C2.real+C1.real;
 C.imaginary=C2.i,aginary+C1.imaginary;
 void complex::addcomplex(){
 }
 int main(){
 complex C1,C2,C3;
 C1.getcomplex();
 C2.getcomplex();
 C3.addcomplex();
getch();
return 0;
}
