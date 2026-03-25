// 14681 사분면고르기 19:26 시작 19:31 5분 소요
#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    if(x > 0 && y > 0){
        printf("1");
    }else if(x > 0 && y < 0){
        printf("4");
    }else if(x < 0 && y < 0){
        printf("3");
    }else {
        printf("2");
    }
    return 0;
}