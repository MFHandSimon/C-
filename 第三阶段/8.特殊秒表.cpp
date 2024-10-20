#include<bits/stdc++.h>
using namespace std;
main(){
	int n,cnt=0;
	cin>>n;
	for(int i=0;i<n*18;i++){
		if(i%8+1==i%27+1){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

