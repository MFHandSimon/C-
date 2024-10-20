#include<bits/stdc++.h>
using namespace std;
main(){
    int n,ans=0,k,tmp;
    bool flag;
    cin>>n;
    for(int i=11;i<=n;i++){
		flag=true;
		k=i;
    	while(k){
			tmp=k%10;
			k/=10;
			if(tmp<k%10)    flag=false;
		}
		if(flag)    ans++;
	}
	cout<<ans;
	return 0;
}
/*

 


*/

