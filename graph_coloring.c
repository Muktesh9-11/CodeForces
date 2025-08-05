#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int graph[MAX][MAX];
int color[MAX];
int V; 

bool isSafe(int v, int c, int m) {
    for (int i = 0; i < V; i++) {
        if (graph[v][i] && color[i] == c) {
            return false;
        }
    }
    return true;
}

bool graphColoringUtil(int m, int v) {
    if (v == V) {
        return true; 
    }

    for (int c = 1; c <= m; c++) {
        if (isSafe(v, c, m)) {
            color[v] = c;

            if (graphColoringUtil(m, v + 1)) {
                return true;
            }

            color[v] = 0; 
        }
    }
    return false;
}

bool graphColoring(int m) {
    for (int i = 0; i < V; i++)
        color[i] = 0;

    if (!graphColoringUtil(m, 0)) {
        printf("Solution does not exist.\n");
        return false;
    }

    printf("Color assignment to vertices:\n");
    for (int i = 0; i < V; i++)
        printf("Vertex %d -> Color %d\n", i + 1, color[i]);
    return true;
}

int main() {
    int m;

    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter adjacency matrix (%dx%d):\n", V, V);
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the number of colors: ");
    scanf("%d", &m);

    graphColoring(m);

    return 0;
}
