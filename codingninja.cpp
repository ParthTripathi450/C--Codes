#include<iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	if (s>="a" && s<="z"){
		cout<<"0";
	}
	else if (s>="A" && s<="Z"){
		cout<<"1";
	}
	else{
		cout<<"-1";
	}
}