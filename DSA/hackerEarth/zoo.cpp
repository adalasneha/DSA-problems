#include <iostream>
#include<string>
using namespace std;
int main()
{
   char zo[20];
   cin>>zo;
   int x=0,y=0;
   for(int i=0;i<=20;i++)
   {
       if(zo[i]=='z')
       {
           x++;
       }
       else if(zo[i]=='o')
       {
           y++;
       }
       else{
           break;
       }
   }
   if(2*x==y)
   {
       cout<<"yes"<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }

}
