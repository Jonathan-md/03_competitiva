#include<iostream>
using namespace std;

int main(){
	long n,suma,s,result;
	suma=0;
	cin>>n;
	
	for(long i=1;i<=n-1;i++){
		cin>>s;
		suma=suma+s;
	}
	result=(n*(n+1))/2-suma;
	cout<<endl<<result;
	
	return 0; 
}
