#include <stdio.h>
#include <stdlib.h>

typedef struct BTreeNode {
    int *keys;
    struct BTreeNode **children;
    int numKeys;
    int isLeaf;
} BTreeNode;

BTreeNode *root = NULL;
int minDegree = 2;

BTreeNode *createNode(int isLeaf) {
    BTreeNode *node = (BTreeNode *)malloc(sizeof(BTreeNode));
    if (!node) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    node->isLeaf = isLeaf;
    node->keys = (int *)malloc(sizeof(int) * (2 * minDegree - 1));
    node->children = (BTreeNode **)malloc(sizeof(BTreeNode *) * (2 * minDegree));
    node->numKeys = 0;
    return node;
}

void traverse(BTreeNode *node) {
    if (node != NULL) {
        for (int i = 0; i < node->numKeys; i++) {
            if (!node->isLeaf) {
                traverse(node->children[i]);
            }
            printf("%d ", node->keys[i]);
        }
        if (!node->isLeaf) {
            traverse(node->children[node->numKeys]);
        }
    }
}

BTreeNode *search(BTreeNode *node, int key) {
    int i = 0;
    while (i < node->numKeys && key > node->keys[i]) {
        i++;
    }
    if (i < node->numKeys && node->keys[i] == key) {
        return node;
    }
    if (node->isLeaf) {
        return NULL;
    }
    return search(node->children[i], key);
}

void splitChild(BTreeNode *parent, int index, BTreeNode *child) {
    BTreeNode *newChild = createNode(child->isLeaf);
    newChild->numKeys = minDegree - 1;

    for (int j = 0; j < minDegree - 1; j++) {
        newChild->keys[j] = child->keys[j + minDegree];
    }

    if (!child->isLeaf) {
        for (int j = 0; j < minDegree; j++) {
            newChild->children[j] = child->children[j + minDegree];
        }
    }

    child->numKeys = minDegree - 1;

    for (int j = parent->numKeys; j >= index + 1; j--) {
        parent->children[j + 1] = parent->children[j];
    }
    parent->children[index + 1] = newChild;

    for (int j = parent->numKeys - 1; j >= index; j--) {
        parent->keys[j + 1] = parent->keys[j];
    }
    parent->keys[index] = child->keys[minDegree - 1];
    parent->numKeys += 1;
}

void insertNonFull(BTreeNode *node, int key) {
    int i = node->numKeys - 1;

    if (node->isLeaf) {
        while (i >= 0 && node->keys[i] > key) {
            node->keys[i + 1] = node->keys[i];
            i--;
        }
        node->keys[i + 1] = key;
        node->numKeys += 1;
    } else {
        while (i >= 0 && node->keys[i] > key) {
            i--;
        }
        i++;
        if (node->children[i]->numKeys == 2 * minDegree - 1) {
            splitChild(node, i, node->children[i]);
            if (key > node->keys[i]) {
                i++;
            }
        }
        insertNonFull(node->children[i], key);
    }
}

void insert(int key) {
    if (root == NULL) {
        root = createNode(1);
        root->keys[0] = key;
        root->numKeys = 1;
        return;
    }

    if (root->numKeys == 2 * minDegree - 1) {
        BTreeNode *newRoot = createNode(0);
        newRoot->children[0] = root;
        splitChild(newRoot, 0, root);
        int i = 0;
        if (newRoot->keys[0] < key) {
            i++;
        }
        insertNonFull(newRoot->children[i], key);
        root = newRoot;
    } else {
        insertNonFull(root, key);
    }
}

void printMenu() {
    printf("\nB-Tree Menu:\n");
    printf("1. Insert key\n");
    printf("2. Search key\n");
    printf("3. Traverse B-tree\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice, key;

    printf("Enter minimum degree (t) for the B-tree (t >= 2): ");
    if (scanf("%d", &minDegree) != 1 || minDegree < 2) {
        printf("Invalid degree. Using t = 2.\n");
        minDegree = 2;
    }

    while (1) {
        printMenu();
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                insert(key);
                break;
            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                if (root != NULL && search(root, key) != NULL) {
                    printf("Key %d found in B-tree.\n", key);
                } else {
                    printf("Key %d not found.\n", key);
                }
                break;
            case 3:
                if (root == NULL) {
                    printf("B-tree is empty.\n");
                } else {
                    printf("B-tree traversal: ");
                    traverse(root);
                    printf("\n");
                }
                break;
            case 4:
                printf("Exiting.\n");
                return 0;
            default:
                printf("Invalid option. Please choose 1-4.\n");
        }
    }

    return 0;
}
