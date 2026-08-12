#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 20

typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

Node* adjacencyList[MAX_VERTICES];
int visited[MAX_VERTICES];
int vertexCount = 0;

Node* createNode(int vertex) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->vertex = vertex;
    newNode->next = NULL;
    return newNode;
}

void addEdge(int source, int destination) {
    Node* newNode = createNode(destination);
    newNode->next = adjacencyList[source];
    adjacencyList[source] = newNode;

    newNode = createNode(source);
    newNode->next = adjacencyList[destination];
    adjacencyList[destination] = newNode;
}

void initializeGraph(int vertices) {
    vertexCount = vertices;
    for (int i = 0; i < vertexCount; i++) {
        adjacencyList[i] = NULL;
        visited[i] = 0;
    }
}

void printGraph() {
    printf("\nGraph adjacency list:\n");
    for (int i = 0; i < vertexCount; i++) {
        printf("%d: ", i);
        Node* temp = adjacencyList[i];
        while (temp) {
            printf("%d ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

void breadthFirstTraversal(int start) {
    int queue[MAX_VERTICES];
    int front = 0, rear = 0;

    for (int i = 0; i < vertexCount; i++) {
        visited[i] = 0;
    }

    visited[start] = 1;
    queue[rear++] = start;

    printf("BFT starting from vertex %d: ", start);
    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);

        Node* temp = adjacencyList[current];
        while (temp) {
            int adj = temp->vertex;
            if (!visited[adj]) {
                visited[adj] = 1;
                queue[rear++] = adj;
            }
            temp = temp->next;
        }
    }
    printf("\n");
}

void depthFirstTraversal(int vertex) {
    visited[vertex] = 1;
    printf("%d ", vertex);

    Node* temp = adjacencyList[vertex];
    while (temp) {
        int adj = temp->vertex;
        if (!visited[adj]) {
            depthFirstTraversal(adj);
        }
        temp = temp->next;
    }
}

void performDFT(int start) {
    for (int i = 0; i < vertexCount; i++) {
        visited[i] = 0;
    }
    printf("DFT starting from vertex %d: ", start);
    depthFirstTraversal(start);
    printf("\n");
}

int main() {
    int vertices, edges, u, v, choice, start;

    printf("Enter number of vertices (max %d): ", MAX_VERTICES);
    scanf("%d", &vertices);
    if (vertices < 1 || vertices > MAX_VERTICES) {
        printf("Invalid number of vertices.\n");
        return 1;
    }

    initializeGraph(vertices);

    printf("Enter number of edges: ");
    scanf("%d", &edges);
    for (int i = 0; i < edges; i++) {
        printf("Enter edge %d (source destination): ", i + 1);
        scanf("%d %d", &u, &v);
        if (u < 0 || u >= vertices || v < 0 || v >= vertices) {
            printf("Invalid edge vertices. Please enter values between 0 and %d.\n", vertices - 1);
            i--;
        } else {
            addEdge(u, v);
        }
    }

    printGraph();

    while (1) {
        printf("\nMenu:\n");
        printf("1. Breadth First Traversal (BFT)\n");
        printf("2. Depth First Traversal (DFT)\n");
        printf("3. Print Graph\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter starting vertex: ");
                scanf("%d", &start);
                if (start < 0 || start >= vertices) {
                    printf("Invalid starting vertex.\n");
                } else {
                    breadthFirstTraversal(start);
                }
                break;
            case 2:
                printf("Enter starting vertex: ");
                scanf("%d", &start);
                if (start < 0 || start >= vertices) {
                    printf("Invalid starting vertex.\n");
                } else {
                    performDFT(start);
                }
                break;
            case 3:
                printGraph();
                break;
            case 4:
                printf("Exiting.\n");
                return 0;
            default:
                printf("Invalid option. Enter 1-4.\n");
        }
    }

    return 0;
}
