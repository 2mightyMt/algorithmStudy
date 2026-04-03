#include <stdio.h>

int main() {
	int x, y; //배열 길이 정하는 x 조건 횟수 정하는 y 선언
	scanf("%d %d", &x, &y);

	int arr[100]; //배열 길이 vs에서 변수로 안들어가서 그냥 100선언
	for (int i = 0; i < x; i++) { // 배열의 처음 값은 모두 0으로 선언
		arr[i] = 0;
	}
	for (int j = 0; j < y; j++) { // 조건을 사용할 반복문
		int a, b, c; // 시작점 a 마무리 b 넣을 번호 c 선언
		scanf("%d %d %d", &a, &b, &c);
		for (int k = a - 1; k <= b - 1; k++) { // a - 1, b - 1하는 이유는 배열의 길이는 0부터 시작하기 때문에
			arr[k] = c; // 배열k 번째에 c 대입
		}
	}
	for (int z = 0; z < x; z++) { //배열을 출력할 반복문
		printf("%d ", arr[z]);
	}

return 0;
}