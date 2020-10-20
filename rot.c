#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,i,j,k,m;
    scanf("%d %d",&a,&b);
    int *ptr;
    ptr=(int *)malloc(a*sizeof(int));

    for(i=0;i<a;i++){
        scanf("%d",&k);
        *(ptr+i)=k;
    }