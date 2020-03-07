#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void Calculate(int year,int mounth,int day);
void main()
{
  cout<<"you are using the Console to Calculate the day of the week! "<<endl;
  int year,mounth,day;
  char flag;
  while (true)
  {
    cout<<"please input the year!"<<endl;
    cin>>year;
    cout<<"the year is"<<year<<endl;
    cout<<"Please input the mounth!"<<endl;
    cin>>mounth;
    cout<<"the mounth is"<<mounth<<endl;
    cout<<"Please input the day!"<<endl;
    cin>>day;
    cout<<"the day is"<<day<<endl;
    Calculate(year,mounth,day);
    cout<<"whether continue?if not ,plaese input n"<<endl;
    cin>>flag;
    if(flag == 'n'||flag == 'N')
    {
      break;
    }
  }
}
void Calculate(int year,int mounth,int day)
{
  int week;
  if(year == 1||year == 2)
  {
    mounth = mounth + 12;
    year = year - 1;
  }

  week = (day + 2*mounth + 3*(mounth + 1)/5 + year + year/4 + year/400 - year/100)%7;
  switch(week)
  {
    case 0:cout<<"the day is Monday"<<endl;break;
    case 1:cout<<"the day is Tuesday"<<endl;break;
    case 2:cout<<"the day is Wednesday"<<endl;break;
    case 3:cout<<"the day is Thursday"<<endl;break;
    case 4:cout<<"the day is Friday"<<endl;break;
    case 5:cout<<"the day is Saturday"<<endl;break;
    case 6:cout<<"the day is Sunday"<<endl;break;
  }
}
