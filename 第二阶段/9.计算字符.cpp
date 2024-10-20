#include<iostream>
using namespace std;
int main(){
	char a;
	int n;
	cin>>a>>n;
	if(a+n<'z'){
		cout<<char(a+n);
	}
	else{
		cout<<'*';
	}
return 0;
}

