#include <stdio.h>

int main(void) {
    char arr[10]={};
    int cnt=0, max_cnt=0;
    char c='\0';
    for (int i=0; i<10; i++) scanf("%c",&arr[i]);  //포인터로 반복문 돌리길 바랍니다! 다시 작성해서 메일 주세요.
    
    for (char *p=arr; p<arr+10; p++) {
        cnt=0;
        for (char *q=p; q<arr+10; q++) {     // 이렇게 되면 앞부분 카운트 못합니다. 위 코드 수정할 때, 이 부분도 수정해서 함께 검사받으세요~!
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
