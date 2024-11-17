#include<bits/stdc++.h>
using namespace std;
int ans;
void f(int num,int start){
	if(num<=start){
		return;
	}
	for(int i=start;i*i<=num;i++){
		if(num%i==0){
			ans++;
			f(num/i,i);
		}
	}
}

main(){
	int num,n;
	cin>>n;
	while(n--){
		cin>>num;
		ans=1;
		f(num,2);
		cout<<ans<<endl;
	}
	return 0;
}

