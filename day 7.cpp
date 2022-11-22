#include<iostream>
#include<conio.h>
using namespace std;
main()
{
   int m,y;
   cout<<"enter month (1 to 12) = ";
   cin>>m;
   cout<<"enter year = ";
   cin>>y;
   if(((y%4==0)||(y%400==0))&& (m==2))
   {
       cout<<"29 days";
   }
   else
   {

      if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
      {
         cout<<"31 days";
      }
      else
      {
          if((m==4)||(m==6)||(m==9)||(m==11))
          {

              cout<<"30 days";
          }
          else{
             cout<<"28";
          }
      }
   }
   getch();
}
