#include <stdio.h>
void print_binary(int arr[], int k, int n) {
    if (k == n) {
        for (int i = 0; i < n; i++) {
            printf("%d", arr[i]);
        }
        printf("\n");
    } else {
        arr[k] = 0;
        print_binary(arr, k + 1, n);
        arr[k] = 1;
        print_binary(arr, k + 1, n);
    }
}

int main() {
    int arr[] = {0, 0, 0};
    int n = 3;
    print_binary(arr, 0, 3);
    return 0;
}

