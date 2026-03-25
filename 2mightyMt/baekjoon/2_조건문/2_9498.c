// 9498 시험 성적

#include <stdio.h>

int main() {
    int Score = 0;
        scanf("%d", &Score);
        if(Score >= 90){
            printf("A\n");
        } else if(Score >=80){
            printf("B\n");
        }else if(Score >=70){
            printf("C\n");
        }else if(Score >=60){
            printf("D\n");
        }else {
            printf("F");
        };
    return 0;
}