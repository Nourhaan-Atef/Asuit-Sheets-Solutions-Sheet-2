#include <iostream>
using namespace std;
int main(){
  int n, flag=0;  
  
  cin >> n;  
   
  for(int i = 2; i <= n/2; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"NO"<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout <<"YES"<<endl;  
  return 0;  

}
