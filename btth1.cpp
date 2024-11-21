#include <stdio.h>
#define MAX 100
#define VALUE_MAX 30001

void findMostFrequent(int arr[], int n) {
    int freq[VALUE_MAX] = {0}, maxFreq = 0;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > maxFreq) maxFreq = freq[arr[i]];
    }
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == maxFreq) {
            printf("%d ", arr[i]);
            freq[arr[i]] = 0;
        }
    }
    printf("\n");
}

int main() {
    int t, n, arr[MAX];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        findMostFrequent(arr, n);
    }
    return 0;
}

