#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s;
	int sum=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]+=32;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s.substr(i,7)=="lanqiao"){
			sum++;
		}
	}
	cout<<sum;
	
return 0;
}

