#include <iostream>
using namespace std;
int main(){
	int n,m;
	
	while(cin>>n>>m){
		int max=0,min=0;
		long sum=0;
     	if(n<=0||m<=0){
		return 0;
    	}
		if(n>m){
			max=n;
			min=m;
		}else{
			max=m;
			min=n;
		}
		
		for(int i=min;i<=max;i++){
		sum+=i;
		cout<<i<<" ";
	}
	cout<<"sum ="<<sum<<endl;
	}
	
}
