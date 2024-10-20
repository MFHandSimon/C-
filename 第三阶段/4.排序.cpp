#include<bits/stdc++.h>
using namespace std;
main(){
	int a[10];
	for(int i=1;i<=5;i++)   cin>>a[i];
	
	sort(a+1,a+6);
	cout<<a[5]<<","<<a[4]<<","<<a[3]<<","<<a[2]<<","<<a[1];
	return 0;
}

