#include<stdio.h>
#include<math.h>

int main() {
    double a, b, c;
    double D = 0;
    double root1, root2;
    double realPart, imaginaryPart;

    printf("***이 프로그램은 이차함수 y=ax^2+bx+c의 그래프와 x축과의 위치관계를 구해줍니다***\n");

    // 이차항의 계수 입력
    while(1) {
        printf("이차항의 계수를 입력하세요:");
        scanf("%lf", &a);
        if(a == 0) {
            printf("오류: 이차항의 계수는 0이 아닌 실수여야 합니다.\n");
        } else {
            printf("%.0lfx^2\n", a);
            break;
        }
    }

    printf("일차항의 계수를 입력하세요:");
    scanf("%lf", &b);
    printf("%.0lfx\n", b);

    printf("상수항을 입력하세요:");
    scanf("%lf", &c);
    printf("%.0lf\n", c);

    // 판별식 계산
    D = b * b - 4 * a * c;

    // 실근 및 허근 계산
    if (D > 0) {
        // 두 실근
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("두 실근: %.2lf 또는 %.2lf\n", root1, root2);
        printf("x축과의 위치 관계: 이차함수는 x축과 두 점에서 만난다.\n");
    } else if (D == 0) {
        // 중근
        root1 = -b / (2 * a);
        printf("중근: %.2lf\n", root1);
        printf("x축과의 위치 관계: 이차함수는 x축과 한 점에서 만난다.\n");
    } else {
        // 허근 계산
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-D) / (2 * a);
        printf("허근: %.2lf + %.2lfi 또는 %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        printf("x축과의 위치 관계: 이차함수는 x축과 만나지 않는다.\n");
    }

    return 0;
}

