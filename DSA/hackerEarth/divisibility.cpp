#include <iostream> 
using namespace std; 
int main() 
{    
     int num;     
     cin>>num;     
     int a[num]; 
     for(int i=0;i<num;i++)
     {         
         cin>>a[i];         
         if(i==num-1)
         {         
             if(a[i]%10==0 && i==num-1)
             {
                 cout<<"Yes";
             }         
             else
             { 
                 cout<<"No";
             }             
         }     
     } 
}