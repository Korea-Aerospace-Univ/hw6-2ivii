#include <stdio.h>

int main(void) {
    int N;
    int *p=nullptr, *q=nullptr;
    scanf("%d",&N);
    
    int a[N]={};
    int b[N]={};
    
    for (p=a; p < a+N; p++) scanf("%d",p);
    for (q=b; q < b+N; q++) scanf("%d",q);
    
    q=b+N-1;
    
    for (p=a; p<a+N;p++) {
        printf(" %d", *p+*q);
        q--;
    }
}
