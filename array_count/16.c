#include <stdio.h>

int count_of_negatives(int *numbers, int length) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (numbers[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int num_test_cases;
    scanf("%d", &num_test_cases);

    for (int t = 0; t < num_test_cases; t++) {
        int length;
        scanf("%d", &length);

        int numbers[length];
        for (int j = 0; j < length; j++) {
            scanf("%d", &numbers[j]);
        }

        printf("%d\n", count_of_negatives(numbers, length));
    }

    return 0;
}
