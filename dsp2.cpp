#include<bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int m;
    if(a>b){
        if(a>c)
        m=a;
        else
        m=c;
    }
    else{
        if(b>c)
        m=b;
        else
        m=c;
    }
    cout<<m;
    return 0;
}