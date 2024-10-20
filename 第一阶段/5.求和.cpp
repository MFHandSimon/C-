#include<iostream>
using namespace std;
int main(){
	int N,sum=0;
	cin>>N;
	for(int i=1;i<=N;i++){
		if(i%2==1){
			sum+=i;
		}
	}
	cout<<sum;
return 0;
}

