#include<bits/stdc++.h>
using namespace std;

double f(){
	string s;
	cin>>s;
	switch(s[0]){
		case '+':return f()+f();break;
		case '-':return f()-f();break;
		case '*':return f()*f();break;
		case '/':return f()/f();break;
		default: return stod(s);
	}
}

main(){
	printf("%f\n",f());
	return 0;
}

