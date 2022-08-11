#include <iostream>
using namespace std;
int main(){
	int rows,x=1;
	cin>>rows;
	for(int i=1;i<=rows;i++){
		for(int j=0;j<3;j++){
			if(x%4==0){
			cout<<"PUM"<<endl;
			x++;
			}
			cout<<x++<<" ";
		}
		
		
	}
		cout<<"PUM";
}
