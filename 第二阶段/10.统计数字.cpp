#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string n;
	cin>>n;
	int sum=0;
	for(int i=0;i<n.size();i++){
		if(n[i]>='0'&&n[i]<='9'){
			sum++;
		}
	}
	cout<<sum;
	
return 0;
}

