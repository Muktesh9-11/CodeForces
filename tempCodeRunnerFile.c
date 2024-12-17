#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define MAX 100  // Maximum number of vertices
#define INF INT_MAX  // Infinity represented as the maximum integer value

// Function to find the vertex with the minimum distance value
int minDistance(int dist[], bool visited[], int V) {
    int min = INF, minIndex;

    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            minIndex = v;
        }
    }

    return minIndex;
}

// Dijkstra's algorithm
void dijkstra(int graph[MAX][MAX], int V, int src) {
    int dist[V];       // Array to store the shortest distance from src to each vertex
    bool visited[V];   // visited[i] is true if the vertex i is processed
    int path[V];
    // Initialize distances and visited array
    for (int i = 0; i < V; i++) {
        dist[i] = INF;
        visited[i] = false;
    }

    dist[src] = 0;  // Distance to source vertex is 0
    path[src] = 0;
    // Process all vertices
    for (int count = 0; count < V - 1; count++) {
        // Pick the minimum distance vertex that has not been visited
        int u = minDistance(dist, visited, V);

        // Mark the vertex as visited
        visited[u] = true;

        // Update the distances of adjacent vertices
        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                path[v] = u;
            }
        }
    }

    // Print the distances
    printf("Vertex \t Distance from Source (%d)\n", src);
    for (int i = 0; i < V; i++) {
        printf("%d \t %d\n", i, dist[i]);
        printf("\n Path : ");
        int j = i;
        while(path[j]!=0){
            printf("%d ",path[j]);
            j=path[j];
        }
    }
}

// Main function
int main() {
    int graph[MAX][MAX];
    int V, src;

    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &V);

    printf("Enter the adjacency matrix of the graph (use 0 for no edge):\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the source vertex: ");
    scanf("%d", &src);

    dijkstra(graph, V, src);

    return 0;
}
