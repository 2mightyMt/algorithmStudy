#include <stdio.h>
int main() {
	int in, a, b; //입력받을값 in, 더할 값 a, b 선언
	scanf("%d", &in); //scanf로 in의 값 할당

	for (int i = 1; i <= in; i++) { // 입력받은 in의 수 만큼 반복문 실행
		scanf("%d %d", &a, &b); // 더할 값 ab 입력
		int result = b + a; // a와 b를 더한 값을 result에 할당
		printf("Case #%d: %d + %d = %d\n", i, a, b, result); //결과값 출력.
	}
	return 0;
}