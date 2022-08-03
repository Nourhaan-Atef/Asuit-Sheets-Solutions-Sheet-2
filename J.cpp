#include <iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	if(n<2){
		return -1;
	}
	for(int i =2 ; i<=n;i++){
		int flag=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			cout<<i<<" ";
		}
		
	}
}
