#include <iostream>
using namespace std;
int main(){
	int n,first=0,secand=1,result;
	cin>>n;
	if(n==1){
		cout<<first;
	}else if(n==2){
		cout<<first<<" "<<secand;
	}else{
		cout<<first<<" "<<secand<<" ";
		for(int i=2;i<n;i++){
		result=first+secand;
		cout<<result<<" ";
		first=secand;
		secand=result;
		}
	}
}
