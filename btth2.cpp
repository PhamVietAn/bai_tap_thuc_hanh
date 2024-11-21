#include <stdio.h>
#define MAX 100

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, arr[MAX], even[MAX], odd[MAX], evenCount = 0, oddCount = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) even[evenCount++] = arr[i];
        else odd[oddCount++] = arr[i];
    }

    sortArray(even, evenCount);
    sortArray(odd, oddCount);

    for (int i = 0; i < evenCount; i++) printf("%d ", even[i]);
    for (int i = 0; i < oddCount; i++) printf("%d ", odd[i]);

    return 0;
}

