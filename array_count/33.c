#include <stdio.h>

int count_of_decreasing_neighbours(int *numbers, int length) {
    int count = 0;
    for (int i = 1; i < length; i++) {
        if (numbers[i] <= numbers[i - 1]) {
            count++;
        }
    }
    return count;
}

int main() {
    int length;
    while (1) {
        scanf("%d", &length);
        if (length == 0) break;

        int numbers[length];
        for (int i = 0; i < length; i++) {
            scanf("%d", &numbers[i]);
        }

        printf("%d\n", count_of_decreasing_neighbours(numbers, length));
    }

    return 0;
}

