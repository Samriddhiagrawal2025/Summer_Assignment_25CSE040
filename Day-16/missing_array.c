 #include <stdio.h>

int findMissing(int arr[], int n) {
    int totalSum = (n * (n + 1)) / 2;
    int arraySum = 0;

    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }

    return totalSum - arraySum;
}

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;  // Numbers should be from 1 to 5

    printf("Missing number: %d\n", findMissing(arr, n));

    return 0;
}
  