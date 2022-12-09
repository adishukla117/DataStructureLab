#include<bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    int m,n,p,q;
    cin>>m>>n>>p>>q;
    int a[m][n],b[p][n];
    if(m==p&&q==n){
        rep(i,m){
            rep(j,n){
                cin>>a[i][j];
            }
        }
        rep(i,p){
            rep(j,q){
                cin>>b[i][j];
            }
        }
        int c[m][n];
        rep(i,m){
            rep(j,n){
                c[i][j]=a[i][j]-b[i][j];
            }
        }
        rep(i,m){
            rep(j,n){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    cout<<"NOT POSSIBLE!"<<endl;
    return 0;
}