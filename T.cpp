#include <iostream>
using namespace std;
int main(){
	int rows;
	cin>>rows;
	int spaces =rows - 1;
	for(int i= 1;i<=rows;i++){
		for(int j=1;j<=spaces;j++){
		cout<<" ";	
		}
		for(int x=1;x<i*2;x++){
			cout<<"*";
		}
		spaces--;
		cout<<endl;
	}   
	
}
