#include<iostream>
using namespace std;
int main(){
	double n,sum=0,height;
	cin>>n;
	sum=n;
	for(int i=1;i<=10;i++){
		n=n/2;
		if(i!=10) sum+=n*2;
		if(i==10) sum+=n;
		height=n; 
	} 
	cout<<height<<endl<<sum;
return 0;
}

