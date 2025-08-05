#include <stdio.h>

#define MAX 100

typedef struct {
    int u, v, w;
} Edge;

Edge edges[MAX];
int parent[MAX];
int n, e;

// Function to find the parent (for cycle detection)
int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

// Sort edges by weight (simple bubble sort)
void sortEdges() {
    for (int i = 0; i < e - 1; i++) {
        for (int j = 0; j < e - i - 1; j++) {
            if (edges[j].w > edges[j + 1].w) {
                Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

void kruskal() {
    int i, j;
    int minCost = 0;

    // Initialize each node as its own parent
    for (i = 0; i < n; i++)
        parent[i] = i;

    sortEdges();

    printf("Edges in Minimum Spanning Tree:\n");

    for (i = 0, j = 0; j < n - 1 && i < e; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int w = edges[i].w;

        int pu = find(u);
        int pv = find(v);

        // If including this edge doesn't cause a cycle
        if (pu != pv) {
            printf("%d - %d (Weight: %d)\n", u, v, w);
            minCost += w;
            parent[pu] = pv;  // Join sets
            j++;
        }
    }

    printf("Total Minimum Cost = %d\n", minCost);
}

int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter %d edges (u v w):\n", e);
    for (int i = 0; i < e; i++) {
        scanf("%d%d%d", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    kruskal();
    return 0;
}
