#include<iostream>
using namespace std;
int main(){
	int a,b,h;
	cin>>a>>b>>h;
	if(a+b>h&&a+h>b&&h+b>a){
		cout<<"Y"; 
	}
	else{
		cout<<"N";
	}
return 0;
}

