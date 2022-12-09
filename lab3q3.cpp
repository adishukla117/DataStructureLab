#include<bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
        rep(i,m){
            rep(j,n){
                cin>>a[i][j];
            }
        }
        rep(i,n){
            rep(j,m){
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }
    return 0;
}