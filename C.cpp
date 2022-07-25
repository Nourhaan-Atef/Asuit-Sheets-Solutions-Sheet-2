#include <iostream>
using namespace std;
int main(){
	long long n,x;
	int even=0,odd=0,positive=0,negative=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x>0){
			positive++;
		}else if(x==0){
			
		}else{
			negative++;
		}
		if(x%2==0){
			even++;
		}else{
			odd++;
		}
	}
	cout<<"Even: "<<even<<endl;
	cout<<"Odd: "<<odd<<endl;
	cout<<"Positive: "<<positive<<endl;
	cout<<"Negative: "<<negative<<endl;
}
