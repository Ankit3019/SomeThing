#include <iostream>

struct QuadTreeNode {
    int x, y;  // Coordinates
    int data;  // Data associated with the node
    QuadTreeNode* children[4];  // NW, NE, SW, SE
};

class QuadTree {
public:
    QuadTreeNode* root;

    // Constructor
    QuadTree() {
        root = nullptr;
    }

    // Insert a node into the Quad Tree
    void insert(int x, int y, int data) {
        root = insertHelper(root, x, y, data);
    }

    // Recursive helper function for insertion
    QuadTreeNode* insertHelper(QuadTreeNode* node, int x, int y, int data) {
        // Implement insertion logic here

        // Example: Creating a new node
        QuadTreeNode* newNode = new QuadTreeNode;
        newNode->x = x;
        newNode->y = y;
        newNode->data = data;

        // Initialize children to nullptr
        for (int i = 0; i < 4; ++i) {
            newNode->children[i] = nullptr;
        }

        return newNode;
    }
};

int main() {
    QuadTree quadTree;

    // Example usage: Inserting a node
    quadTree.insert(10, 20, 42);

    // Further operations can be added based on requirements

    return 0;
}
