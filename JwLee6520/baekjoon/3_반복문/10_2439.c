#include <stdio.h>
int main() {
    int a; //별 개수 정하는 변수 하나 선언
    scanf("%d", &a); // scanf로 입력받은 값을 a에 저장

    for (int i = 1; i <= a; i++) { //입력받은 수 만큼 반복문

        for (int j = a; j > i; j--) { // 입력받은 수에서 i를 뺀 만큼 공백 출력
            printf(" ");
        }
        for (int j = 0; j < i; j++) { // i의 수 만큼 별 출력
            printf("*");
        }
        printf("\n"); //줄 바꿈
    }
    return 0;

}