#include<iostream>
#include<conio.h>
using namespace std;
class compare{
    int a,b;
public:
   void getcompare();
       void displaycompare();
       };
 void compare:: getcompare(){
 cout<<"enter the number:"<<endl;
 cin>>a>>b;
 displaycompare();
 cout<<"a="<<a<<endl<<"b="<<b<<endl;
 }
 void compare:: displaycompare(){
 if (a>b){
 cout<<"a is maximum:"<<endl;
 }else{
 cout<<"b is maximum:"<<endl;
 }
 int main(){
 compare C;
 C.getcompare();
getch();
return 0;
}

