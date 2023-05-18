#include <stdio.h>
void time_det(int a[3][3], int b[3][3], int c[3][3]){
    c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0] + a[0][2]*b[2][0];
    c[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1] + a[0][2]*b[2][1];
    c[0][2] = a[0][0] * b[0][2] + a[0][1] * b[1][2] + a[0][2]*b[2][2];
    c[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0] + a[1][2]*b[2][0];
    c[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1] + a[1][2]*b[2][1];
    c[1][2] = a[1][0] * b[0][2] + a[1][1] * b[1][2] + a[1][2]*b[2][2];
    c[2][0] = a[2][0] * b[0][0] + a[2][1] * b[1][0] + a[2][2]*b[2][0];
    c[2][1] = a[2][0] * b[0][1] + a[2][1] * b[1][1] + a[2][2]*b[2][1];
    c[2][2] = a[2][0] * b[0][2] + a[2][1] * b[1][2] + a[2][2]*b[2][2];
}
int main(void){
    int i, j;

    int a[3][3] = {0};
    int b[3][3] = {0};
    int c[3][3] = {0};

    printf("3x3 a 행렬의 값을 입력하세요: \n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("3x3 b 행렬의 값을 입력하세요: \n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &b[i][j]);
        }
    }
    
    //a*b
    time_det(a, b, c);

    printf("행렬 a와 b의 곱: \n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    //done

}