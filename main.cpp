#include <bits/stdc++.h>

using namespace std;

int main()
{   int t,i,n;
    cin>>t;
    int a[t],b[t],c[t],d[t],e[t];
    for(i=0;i<t;i++){
        cin>>a[i]>>b[i]>>c[i];

        d[i]=(c[i]-b[i])/a[i];
        e[i]=(d[i]*a[i])+ b[i];
        cout<<e[i]<<endl;
    }
}
