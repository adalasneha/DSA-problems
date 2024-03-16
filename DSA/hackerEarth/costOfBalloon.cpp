#include<iostream>
using namespace std;

int main() 
{    
 int t;
 cin>>t;   
 while (t--) 
 {       
	  int green,purple;
	  cin >>green>>purple;   
      int n;cin >> n;
      int sum1 = 0;
	  int sum2 = 0;        
	  int a1 = 0, b1 = 0;        
	  int a2 = 0, b2 = 0;        
	  for (int i=0;i<n;i++) 
	  {            
		  int a,b;
		  cin >> a >> b;            
		  a1 += a * green;            
		  b1 += b * purple;            
		  a2 += b * green;            
		  b2 += a * purple;    
	  }
      sum1 = a1+b1;        
	  sum2 = a2+b2;
      if (sum1 < sum2) 
	  {            
		  cout<<sum1<<endl;        
	  }
	  else 
	  {            
		  cout<<sum2<<endl;        
	  }   

  }

    return 0;
}