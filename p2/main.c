#include <stdio.h>

int main(void) {
    int N;
    int *p=nullptr, *q=nullptr;
    scanf("%d",&N);
    
    int a[N]={};   // 가변배열 표준 아닙니다! 선언은 scanf()위쪽으로 모아주세요. 우리는 가변배열 쓰면 0점 처리합니다. 이 부분 수정해서 다시 메일 주세요!
    int b[N]={};   // 위와 동일한 코멘트!
    
    for (p=a; p < a+N; p++) scanf("%d",p);
    for (q=b; q < b+N; q++) scanf("%d",q);
    
    q=b+N-1;
    
    for (p=a; p<a+N;p++) {        // 이 경우에는 for문 내에 두 변수 모두 작성하는 것이 좋습니다.
        printf(" %d", *p+*q);     // for (p = a, q = b + N - 1; p < a + N; p++, q--)
        q--;                      // 학생들이 결과를 저장하는 배열 하나 더 만들어서 사용하는 것 괜찮으니, 검사할 때 참고하세요!
    }
}
