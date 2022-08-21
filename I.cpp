
#include<bits/stdc++.h>
using namespace std;
int main(){
	int myResult1,myResult2;
	string num1;
	cin>>num1;
	int size=num1.size();
	char num2[size];
	int counter = 0;
	for(int i=size-1;i>=0;i--){
		num2[counter]=num1[i];
		counter++;
	}
stringstream s1;
s1>>num1;
s1<<myResult1;

stringstream s2;
s2>>num2;
s2<<myResult2;

cout<<myResult2<<endl;
if(myResult1==myResult2){
	cout<<"YES"<<endl;
}else{
	cout<<"NO"<<endl;
}

}
