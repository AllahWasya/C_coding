#include <stdio.h>

int main () {
    int arrray[7] = {1, 2, 4, 5, 10, 165, 60};

    int max = arrray[0];
    for (int i = 0; i <7; i++) {
        if (arrray[i] > arrray[0]) {
            int temp = arrray[0];
            arrray[0] = arrray[i];
            arrray[i] = temp;
        }
    }
    printf("%d", arrray[0]);
    for (int i = 1; i <7; i++) {
        if (arrray[i] > arrray[1]) {
            int temp = arrray[1];
            arrray[1] = arrray[i];
            arrray[i] = temp;
        }
    }
    printf("%d", arrray[1]);
    return 0;
}