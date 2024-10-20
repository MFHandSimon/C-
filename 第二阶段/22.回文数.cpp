#include<bits/stdc++.h>
using namespace std;

bool isHw(int n){
	string s=to_string(n);
	int i=0, j=s.length()-1;
	while (i<j){
		if(s[i]!=s[j]){
			return false;
		}
		i++;
		j++;
	}
	return true;
}

bool isSev(int n){
	string s=to_string(n);
	return s.find('7') != string::npos;
}
main(){
	int a,b,count=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(isHw(i)&&isSev(i)){
			count++;
		}
	}
	cout<<count;
	return 0;
}

