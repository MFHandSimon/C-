#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int n,r,sum,a[1005],vis[1005];


void print(){
	sum++;
	for(int i=1;i<=r;i++){
		cout<<setw(3)<<a[i];
	}
	cout<<endl;
}


int search(int k){
	for(int i=1;i<=n; i++){
		if(a[k-1]<i&&vis[i]==0){
			a[k]=i;
			vis[i]=1;
			if(k==r){
				print();
			} else {
				search(k+1);
			}
			vis[i]=0;
		}
	}
	return 0;
}


main(){
	cin>>n>>r;
	search(1);
	cout<<"number = "<<sum;
	return 0;
}

