#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 20
void bfs(int graph[MAX_VERTICES][MAX_VERTICES], int vertices, int startVertex) {
    int visited[MAX_VERTICES] = {0}; // Array to track visited vertices, initialized to 0
    int queue[MAX_VERTICES]; // Queue for BFS traversal
    int front = -1, rear = -1;


    visited[startVertex] = 1;
    queue[++rear] = startVertex;
    front++; 

    printf("BFS Traversal starting from vertex %d: ", startVertex);

    while (front <= rear) {
        int currentVertex = queue[front++]; 

        printf("%d ", currentVertex);

       
        for (int i = 0; i < vertices; i++) {
           
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = 1;
                queue[++rear] = i; 
            }
        }
    }
    printf("\n");
}

int main() {
    int vertices, edges, i, j;
    int graph[MAX_VERTICES][MAX_VERTICES] = {0}; 

    printf("Enter the number of vertices :");
    scanf("%d", &vertices);

    printf("Enter the number of edges:");
    scanf("%d", &edges);

    printf("Enter edges:\n");
    for (i = 0; i < edges; i++) {
        int src, dest;
        scanf("%d %d", &src, &dest);
        if (src >= 0 && src < vertices && dest >= 0 && dest < vertices) {
            graph[src][dest] = 1; 
            graph[dest][src] = 1; 
        } else {
            printf("Invalid vertices entered", vertices - 1);
            i--;

        }
    }

    int startVertex;
    printf("Enter the starting vertex for BFS: ", vertices - 1);
    scanf("%d", &startVertex);

    if (startVertex >= 0 && startVertex < vertices) {
        bfs(graph, vertices, startVertex);
    } else {
        printf("Invalid starting vertex\n");
    }

    return 0;
}

