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

    for(j=0;j<b;j++){
        m=ptr[0];
        for(i=0;i<a;i++){
            ptr[i]=ptr[i+1];
        }
        ptr[a-1]=m;
    }
    for(i=0;i<a;i++){
        printf("%d ",*(ptr+i));
    }
}
