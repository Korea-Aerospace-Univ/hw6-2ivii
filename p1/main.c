#include <stdio.h>

int main(void) {
    char arr[10]={};
    char *p=nullptr, *q=nullptr;
    int cnt=0, max_cnt=0;
    char c='\0';
    for (p=arr; p<arr+10; p++) scanf("%c",p);  
    
    for (p=arr; p<arr+10; p++) {
        cnt=0;
        for (q=arr; q<arr+10; q++) {     
            if (*p == *q) cnt+=1;
        }
        if (cnt>max_cnt) {
            max_cnt = cnt;
            c=*p;
        }
    }
    printf("%c %d",c,max_cnt);

    return 0;
}
