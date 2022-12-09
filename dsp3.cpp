#include<bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
void merge(int*a,int m,int*b,int n){
    int i=0,j=0,k=0;
    int c[m+n];
    while(i<m&&j<n){
        if(a[i]<b[j])
        c[k++]=a[i++];
        else if(b[j]<a[i])
        c[k++]=b[j++];
        else{
        c[k++]=a[i++];
        c[k++]=b[j++];
        }
    }
    while(i<m)
    c[k++]=a[i++];
    while(j<n)
    c[k++]=b[j++];
    rep(j,m+n)
    cout<<c[i]<<" ";
}
void mergeSet(int*a,int m,int*b,int n){
    int i=0,j=0,k=0;
    int c[m+n];
    while(i<m&&j<n){
        if(a[i]<b[j])
        c[k++]=a[i++];
        else if(b[j]<a[i])
        c[k++]=b[j++];
        else{
        c[k++]=a[i++];
        j++;
        }
    }
    while(i<m)
    c[k++]=a[i++];
    while(j<n)
    c[k++]=b[j++];
}
void intersect(int*a,int m,int*b,int n){
    int i=0,j=0,k=0;
    int c[m+n];
    while(i<m&&j<n){
        if(a[i]==b[j]){
        c[k++]=a[i++];
        j++;
        }
        else if(b[j]<a[i])
        j++;
        else
        i++;
    }
}

int main(){
   
   int a[]={1,2,3,4,5};
   int b[]={3,2,1,5,7};
   merge(a,5,b,5);
    return 0;
}
