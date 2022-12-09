#include<stdio.h>
int DAT[100],c[100];
int main(){
    int n,i,j=0,k,max=-1;
    int a[100][100];
    printf("NAME:= ADITYA SHUKLA\n");
    printf("ROLL. NO. := 2100320100011(CSE A)\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[j][i]);
        scanf("%d",&a[j+1][i]);
        if(a[j+1][i]>max)
        max=a[j+1][i];
    }
    max=max+1;
    for(i=0;i<n;i++){
        k=a[1][i];
        if(DAT[k]==0){
            DAT[k]=a[0][i];
            continue;
        }
        while(1){
            c[i]++;
            k=(k+c[i])%max;
            if(j==k){
                printf("Can't store: %d",a[0][i]);
                return 0;
            }
            if(DAT[k]==0){
                DAT[k]=a[0][i];
                break;
            }
        }
    }
    for(i=0;i<max;i++){
        
        if(DAT[i]!=0)
        printf("%d\t%d\n",DAT[i],i);
    }
}