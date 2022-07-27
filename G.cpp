#include <iostream>
using namespace std;
int main(){
	int n,x;
	long long factor;
	cin>>x;
	for(int j=1;j<=x;j++){
		factor=1;
		cin>>n;
		for(int i=1;i<=n;i++){
		factor*=i;
	}
	cout<<factor<<endl;
	}
	
}
