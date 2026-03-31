    #include <stdio.h>

    int main() {
        int a, b;// 입력받을 값 a,b 선언

        while (1) { // 무한히 반복되기 때문에 while문 사용
            scanf("%d %d", &a, &b); // a와 b 입력받음

            if(a!=0 && b!=0){ //0 0일때는 출력 안하니까 a와 b가 0이 아닐 때만 출력
                printf("%d\n", a + b);
            }
			if (a == 0 && b == 0) { // a와 b가 0일 때는 0 0이 입력되면 프로그램 종료
                break; // while문 탈출
            }
        }
        return 0;
    }