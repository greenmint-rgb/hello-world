#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  cout<<"welcome to use the program"<<endl;
  cout<<"This is truncated binay exponential back-off which is written on 2020.03.09"<<endl;
  int number = 0;
  for(int i = 1;i <= 16;i++)
  {
    number = pow(2,i) - 1;
    cout<<number<<endl;
  }
  system("pause");
 
}
