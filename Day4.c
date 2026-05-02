#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        printf("Enter element %d: ", i + 1);
    }
   
    int start = 0;
    int end = n - 1;
    while(start < end) {
        printf("Swapping elements at index %d and %d\n", start, end);
        
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
        printf("Swapped elements at index %d and %d\n", start - 1, end + 1);
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
