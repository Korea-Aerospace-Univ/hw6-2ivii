#include <stdio.h>

int main(void) {
    int N;
    int a[20]={};   
    int b[20]={}; 
    int *p=nullptr, *q=nullptr;
    scanf("%d",&N);

    for (p=a; p < a+N; p++) scanf("%d",p);
    for (q=b; q < b+N; q++) scanf("%d",q);
    
    for (p = a, q = b + N - 1; p < a + N; p++, q--) {        
        printf(" %d", *p+*q);
    }
}
