#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	if(N>=90){
		cout<<"A";
	} else if(N>=80&&N<=90){
		cout<<"B";
	}else if(N>=70&&N<=80){
		cout<<"C";
	}else if(N<70){
		cout<<"D";
	}
return 0;
}

