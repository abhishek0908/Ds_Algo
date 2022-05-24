#include<iostream>
#include<stdio.h>
using namespace std;
struct candidate{ 
int rollNo;
char grade;
float marks[4];
};

void display(struct candidate c1)
{
cout<<"Roll No"<<rollNO;
cout<<"grade"<<grade;
int i =0;
int size = sizeof(c1.marks)/sizeof(float);
for(int i=0;i<size;i++)
{
cout<<c1.marks[i];
}
}
int main(){
struct candidate c1={1,'A',{100,99,98,89,97}};
display(c1);
return 0;
}
