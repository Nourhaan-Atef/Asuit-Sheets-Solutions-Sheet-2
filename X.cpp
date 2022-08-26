#include<bits/stdc++.h>  
using namespace std;
int main() {
  int testNumber;
  cin>>testNumber;
  long long num;
  for (int i = 0 ; i<=testNumber;i++){
  	cin>>num;
  	int ones = 0;
  	while(num>0){
  		if(num%2==1){
  			ones++;
		  }
		  num/=2;
	  }
	  long long sum = 0;
	  for(int z=0;z<ones;z++){
	  	sum+=1 * pow(2,i);
	  	
	  }
	  cout<<sum<<endl;
  }
}
