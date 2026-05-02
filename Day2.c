#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100]; 
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        printf("Enter element %d: ", i + 1);
    }
    int pos;
    scanf("%d", &pos);
    printf("Enter the position to delete: %d\n", pos);
    
    for(int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
        printf("Shifting element at index %d to index %d\n", i + 1, i);
        
    }
   
    for(int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
        scanf("%d", &arr[i]);
        printf("Updated element at index %d: %d\n", i, arr[i]);
    }
    printf("\n");
    return 0;
}
