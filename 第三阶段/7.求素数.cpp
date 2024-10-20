#include<bits/stdc++.h>
using namespace std;
main(){
	int n,sum;
	cin>>n;
	for(int i=7;i<=n;i++){
		bool flag=1;
		for(int j=2;j<i/2;j++){
			if(i%j==0)  {flag=false;break;}
		}
		if(flag==1){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}

