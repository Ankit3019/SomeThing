#include <iostream>

struct OctreeNode {
    int x, y, z;  // Coordinates
    int data;     // Data associated with the node
    OctreeNode* children[8];  // Octants: XYZ, XZY, YXZ, YZX, ZXY, ZYX, XYZ, ZYX
};

class Octree {
public:
    OctreeNode* root;

    // Constructor
    Octree() {
        root = nullptr;
    }

    // Insert a node into the Octree
    void insert(int x, int y, int z, int data) {
        root = insertHelper(root, x, y, z, data);
    }

    // Recursive helper function for insertion
    OctreeNode* insertHelper(OctreeNode* node, int x, int y, int z, int data) {
        // Implement insertion logic here

        // Example: Creating a new node
        OctreeNode* newNode = new OctreeNode;
        newNode->x = x;
        newNode->y = y;
        newNode->z = z;
        newNode->data = data;

        // Initialize children to nullptr
        for (int i = 0; i < 8; ++i) {
            newNode->children[i] = nullptr;
        }

        return newNode;
    }
};

int main() {
    Octree octree;

    // Example usage: Inserting a node
    octree.insert(10, 20, 30, 42);

    // Further operations can be added based on requirements

    return 0;
}
