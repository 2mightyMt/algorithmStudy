#include <stdio.h>

int main() {

	int arr[1000000]; //배열 최댓값 100만
	int len; //배열의 길이를 구할 변수 len

	scanf("%d", &len); //배열 길이 입력

	for (int i = 0; i < len; i++) { //배열에 값을 넣는 반복문
		scanf("%d", &arr[i]);
	}

	int max = arr[0]; //제일 큰 값을 찾을 변수 선언
	int min = arr[0];//제일 작은 값을 찾을 변수 선언

	for (int j = 1; j < len; j++) { //int j가 1인이유는 이미 max min에서 배열의 0번째 값을 사용했기 때문
		if (arr[j] < min) { //배열의 0번째 보다 작은 수가 들어가면 min에 할당
			min = arr[j];
		}
		if (arr[j] > max) { //배열의 0번째보다 큰 수가 걸리면 max에 할당
			max = arr[j];
		}
	}
	printf("%d ", min); //제일 작은 수 출력.
	printf("%d", max); //제일 큰 수 출력
	return 0;
}