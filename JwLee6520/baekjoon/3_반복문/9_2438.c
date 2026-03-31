#include <stdio.h>
int main() {
	int a; //별 개수 정하는 변수 하나 선언
	scanf("%d", &a); // scanf로 입력받은 값을 a에 저장

	for (int i = 1; i <= a; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}