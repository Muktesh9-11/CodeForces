#include <stdio.h>

int n;              
int weights[100];   
int target;         
int include[100];   

void sumOfSubsets(int i, int currentSum) {
    if (currentSum == target) {
        printf("Subset: ");
        for (int j = 0; j < n; j++) {
            if (include[j]) {
                printf("%d ", weights[j]);
            }
        }
        printf("\n");
        return;
    }

    if (i >= n || currentSum > target) {
        return;
    }

    include[i] = 1;
    sumOfSubsets(i + 1, currentSum + weights[i]);

    include[i] = 0;
    sumOfSubsets(i + 1, currentSum);
}

int main() {
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted weights: ");
    int total = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &weights[i]);
        total += weights[i];
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Subsets that sum to %d:\n", target);
    sumOfSubsets(0, 0);

    return 0;
}
