#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,s=0;
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("%d",s);
}
