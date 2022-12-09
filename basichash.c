#include<stdio.h>
#include<math.h>
void hash(int a,int m);
int nextprime(int a);
int DAT[100],c[100];
int main(){
    int n,i,j=0,k,max=-1;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=nextprime(n);
    for(i=0;i<max;i++){
        if(DAT[i]!=0)
        printf("%d\t%d\n",DAT[i],i);
    }
}
void hash(int a,int m){
    int i,k;
    for(i=0;i<m;i++){
        k=a[1][i];
        if(DAT[k]==0){
            DAT[k]=a[0][i];
            continue;
        }
        while(1){
            c[i]++;
            k=(k+(c[i]*c[i]))%max;
            if(DAT[k]==0){
                DAT[k]=a[0][i];
                break;
            }
        }
    }
}
int nextprime(int a){
    int j;
    for(int i=a;1;i++){
        for(j=2;j<=sqrt(i);i++){
            if(i%j==0)
            break;
        }
        if(j>sqrt(i))
        return i;
    }
}