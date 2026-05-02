#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, i, left, right;
    int arr[100];

    
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    qsort(arr, n, sizeof(int), compare);

    left = 0;
    right = n - 1;

    int min_sum = arr[left] + arr[right];
    int min_l = left, min_r = right;

    
    while(left < right) {
        int sum = arr[left] + arr[right];

        if(abs(sum) < abs(min_sum)) {
            min_sum = sum;
            min_l = left;
            min_r = right;
        }

        if(sum < 0)
            left++;
        else
            right--;
    }
    printf("%d %d", arr[min_l], arr[min_r]);

    return 0;
}