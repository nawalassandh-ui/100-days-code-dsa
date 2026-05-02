#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[100]; 
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter the element to search for: ");
    scanf("%d", &k);
    int comparisons = 0;
    int found = -1;
    for(int i = 0; i < n; i++) {
        comparisons++;
        if(arr[i] == k) {
            found = i;
            break;
        }
    }
    if(found != -1) {
        printf("Found at index %d\n", found);
    } else {
        printf("Not Found\n");
    }
    printf("Comparisons = %d\n", comparisons);
    return 0;
}
