#include <stdio.h>

int main() {

    int arr[10000]; //조건에서 10000보다 작거나 같은 정수이기 때문에 길이가 10000인 배열선언
    int N, X; //N은 배열 길이 X는 X보다 작은 수를 찾기 위한 정수
    scanf("%d %d", &N, &X); // 둘이 입력받고
    for (int i = 0; i < N; i++) { //입력받은 N의 길이만큼 반복문 돌림
		scanf("%d", &arr[i]); //N의 길이만큼 배열입력
    }
    for (int j = 0; j < N; j++) { //배열에서 X보다 작은 수를 찾기 위한 반복문
        if(arr[j] < X){ //만약 배열에 들어있는 수 중에서 X 보다 작은 수가 있다면
           printf("%d ", arr[j]); //그 수 출력
        }
    }
    return 0;
}