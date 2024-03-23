#include <stdio.h>
#include <math.h>

int count_of_squares(int *numbers, int length) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        int root = (int)sqrt(numbers[i]);
        if (root * root == numbers[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    int length;
    while (1) {
        scanf("%d", &length);
        if (length == 0)
            break;

        int numbers[length];
        for (int j = 0; j < length; j++) {
            scanf("%d", &numbers[j]);
        }

        printf("%d\n", count_of_squares(numbers, length));
    }

    return 0;
}