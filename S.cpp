#include <iostream>
using namespace std;
int main(){
	int x,y,count;
	cin>>count;
	for(int j=0;j<count;j++){
		cin>>x>>y;
		int max=0,min=0;
		long sum=0;
		if(x>y){
			max=x;
			min=y;
		}else{
			max=y;
			min=x;
		}
		for(int i=min+1;i<max;i++){
			if(i%2!=0){
				sum+=i;
			}
		}
		cout<<sum<<endl;
	}
}
