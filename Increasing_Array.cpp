#include<iostream>
using namespace std;

int main(){
	long n,mov,max,z;
	mov=0;
	max=0;
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>z;
		if(i==0 || z>=max)
			max=z;
		else
			mov=mov+max-z;
	}
	cout<<endl<<mov;

	return 0;
}
