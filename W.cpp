#include <iostream>
using namespace std;
int main(){
	 int rows;
	 cin>>rows;
	 int spaces=rows-1;
	 for(int i=1;i<=rows;i++){
	 	for(int j=1;j<=spaces;j++){
	 		cout<<" ";
		 }
		 for(int q=1 ;q<i*2;q++){
		 	cout<<"*";
		 }
	 	 spaces--;
	 	  cout<<endl;
	 }
	 for(int i=rows;i>=1;i--){
	 	for(int j=spaces+1;j>=1;j--){
	 		cout<<" ";
		 }
		 for(int q=i*2 ;q>1;q--){
		 	cout<<"*";
		 }
	 	 spaces++;
	 	  cout<<endl;
	 }
	
	
}
