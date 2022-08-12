#include <iostream>
using namespace std;
int main(){
	int x,y,min=0,max=0,gcd=0;
	cin>>x>>y;
	if(x>y){
		max=x;
		min=y;
	}else{
		max=y;
		min=x;
	}
	for(int i=1;i<=max;i++){
		if(x%i==0&&y%i==0){
			gcd=i;
		}
		
	}
	cout<<gcd<<endl;
}

