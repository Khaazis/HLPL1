#include <stdio.h>

int has_matching_parity(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        if ((numbers[i] % 2 == 0 && i % 2 == 0) || (numbers[i] % 2 != 0 && i % 2 != 0)) {
            continue;
        } else {
            return 0; // False
        }
    }
    return 1; // True
}

int main() {
    int num_test_cases;
    scanf("%d", &num_test_cases);

    for (int i = 0; i < num_test_cases; i++) {
        int length;
        scanf("%d", &length);

        int numbers[length];
        for (int j = 0; j < length; j++) {
            scanf("%d", &numbers[j]);
        }

        printf("%s\n", has_matching_parity(numbers, length) ? "True" : "False");
    }

    return 0;
}
