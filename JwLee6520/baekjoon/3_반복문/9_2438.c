#include <stdio.h>
int main() {
	int a; //별 개수 정하는 변수 하나 선언
	scanf("%d", &a); // scanf로 입력받은 값을 a에 저장

	for (int i = 1; i <= a; i++) { // 반복문 실행
		for (int j = 0; j < i; j++) { //별찍는 반복문 실행
			printf("*");
		}
		printf("\n");
	}
	return 0;
}