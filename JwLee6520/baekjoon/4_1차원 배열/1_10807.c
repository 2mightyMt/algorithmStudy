#include <stdio.h>

int main() {
    
    int arr[100]; //배열 선언
    int len, target; // 배열의 길이를 넣을 len, 원하는 숫자를 찾을 target, 원하는 숫자를 찾을 count 선언
    int count = 0;
    scanf("%d", &len); //사용자로부터 len 입력받음

    for (int i = 0; i < len; i++) { //배열 arr에 사용자가 원하는 값을 넣을 반복문
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target); //찾을 숫자를 넣을 target

    for (int j = 0; j < len; j++) { //배열을 돌면서 찾는 수가 있다면 count를 증가
        if (arr[j] == target) {
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
    }   