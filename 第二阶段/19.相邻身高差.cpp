//那我问你
/*
  你的头为什么尖尖的 .
					/\
			    ___/__\___
			   |         |
               |         |
			   |         |
			   ——————











*/
#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin>>n;
    int a[n+5];
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<a[n]-a[1];
	return 0;
}

