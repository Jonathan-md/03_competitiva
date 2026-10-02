#include <iostream>
using namespace std;

int main() {
    long long n,cero;
    cero=0;
    cin>>n;

    while(n>0){
        n=n/5;
        cero=cero+n;
    }

    cout<<endl<<cero;
    return 0;
}
