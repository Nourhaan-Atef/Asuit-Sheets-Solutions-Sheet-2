#include <iostream>
using namespace std;
int main(){
	int count;
	cin>>count;
	for(int i=1;i<=count;i++){
		string number;
		cin>>number;
        int size= number.size();
        for(int j=1;j<=size;j++){
        	cout<<number[size-j]<<" ";
		}
		cout<<endl;
	}
}
