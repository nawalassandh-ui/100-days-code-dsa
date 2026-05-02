#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);
    int arr1[100]; 
    for(int i = 0; i < p; i++) {
        scanf("%d", &arr1[i]);
        printf("Enter element %d: ", i + 1);
    }
    int q;
    scanf("%d", &q);
    int arr2[100]; // 
    for(int i = 0; i < q; i++) {
        scanf("%d", &arr2[i]);
    }
    int merged[200];
    int i = 0, j = 0, k = 0;
    while(i < p && j < q) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while(i < p) {
        merged[k++] = arr1[i++];
    }
    while(j < q) {
        merged[k++] = arr2[j++];
    }
    for(int m = 0; m < k; m++) {
        printf("%d ", merged[m]);
    }
    printf("\n");
    return 0;
}
