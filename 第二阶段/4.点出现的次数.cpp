#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string a;
	int sum=0;
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]=='.'){
			sum++;
		}
	}
	cout<<a.size()<<endl<<sum;
return 0;
}

