#include <stdio.h>

int main() {
	int x, y; // 배열 길이를 정할 x와 교환 횟수를 정할 y 선언
	scanf("%d %d", &x, &y);

	int arr[100];

	for (int i = 0; i < x; i++) { // x의 길이만큼 배열에 1부터 x까지의 수를 넣음
		arr[i] = i + 1;
	}

	for (int j = 0; j < y; j++) { //y의 횟수만큼 교환을 반복
		int a, b;
		scanf("%d %d", &a, &b); // a와 b는 교환할 위치를 나타냄. 예를 들어 a가 1이고 b가 3이면 arr[0]과 arr[2]를 교환해야 함
		int temp = arr[a - 1]; //값을 임시 저장할 temp 선언. a-1과 b-1을 하는 이유는 배열의 인덱스가 0부터 시작하기 때문
			arr[a-1] = arr[b-1];
			arr[b-1] = temp;
		}
	for (int k = 0; k < x; k++) { // 배열의 길이만큼 반복하며 출력
		printf("%d ", arr[k]);
	}
	return 0;
}