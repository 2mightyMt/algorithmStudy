#include <stdio.h>

int main() {
	int arr[9]; //배열 arr 선언 (최대길이 9)
	int max = arr[0]; //최댓값을 넣을 변수 max 선언, arr[0]으로 초기화
	int count = arr[0]; // 최댓값의 위치를 찾을 변수 count 선언, arr[0]으로 초기화

	for (int i = 0; i < 9; i++) { // 0부터 8까지 반복하는 for문
		scanf("%d", &arr[i]); //사용자로부터 정수를 입력받아 arr[i]에 저장

		if (arr[i] > max) { // 만약 arr[i]가 max보다 크다면
			max = arr[i]; // max를 arr[i]로 업데이트 하기
			count = i; //count를 i로 업데이트(최댓값의 위치를 저장)
		}
	}

	printf("%d\n%d", max, count+1); //최댓값과 최댓값의 위치 출력 count는 0부터 시작하므로 위치를 +1 하여 출력
	return 0;
}