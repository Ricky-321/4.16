#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // (A) 三角形
    printf("(A)\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 0; j < i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // (B) 三角形
    printf("(B)\n");
    for (int i = 10; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // (C) 三角形
    printf("(C)\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            printf("%s", " ");
        }
        for (int k = 10; k > i; k--) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // (D) 三角形
    printf("(D)\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 10; j > i; j--) {
            printf("%s", " ");
        }
        for (int k = 0; k < i; k++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}