#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=n;j++){
			for(int k=0;k<=n;k++){
				if(i!=0&&k%2==1&&i!=j&&j!=k&&i!=k){
					sum++;
				}
			}
		}
	}
	cout<<sum;
return 0;
}

