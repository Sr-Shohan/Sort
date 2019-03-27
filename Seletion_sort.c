#include<stdio.h>
int main(){
    int i,j,n,p,a[100],swap;
    printf("Enter integer number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        p=i;
        for(j=i+1;j<n;j++){
            if(a[p]>a[j])
                p=j;
        }
            if(p!=i){
                swap=a[i];
                a[i]=a[p];
                a[p]=swap;
            }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
