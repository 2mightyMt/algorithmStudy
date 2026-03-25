// 11382 꼬마 정민

#include <stdio.h>
int main(void){
    long long A = 0, B = 0, C = 0;
    // 문제 조건이 큰 수를 더하는 것
    // 입력 조건: 첫 번째 줄에 A, B, C (1 ≤ A, B, C ≤ 10^12)이 공백을 사이에 두고 주어진다.
    // 8비트 초과, long long 써야함
    // long long 쓸때는 주소값 %lld 사용
    scanf("%lld %lld %lld", &A, &B, &C);
    printf("%lld", A+B+C);
    return 0;
}