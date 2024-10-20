#include<bits/stdc++.h>
using namespace std;
main(){
	int score,n,arr[1005];
	cin>>score>>n;
	for(int i=1;i<=n;i++)       cin>>arr[n];
	int cnt=0;
	for(int i=0;i<n;i++){
		if(score>arr[i])cnt++;
	}
	double rate=1.0*cnt/n;
	if(rate>=0.9)cout<<'A';
	else if(rate>=0.7)cout<<'B';
	else if(rate>=0.4)cout<<'C';
	else if(rate>=0.2)cout<<'D';
	else cout<<'E';
	return 0;
}
