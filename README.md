# Binary Trees 

Binary trees are hierarchical data structures composed of nodes, where each node has at most two children: a left child and a right child. These structures find applications in various algorithms and data representations due to their versatility.

## Basic Concepts

### Node Structure


- Each node in a binary tree contains a value (or payload) and references to its left and right children.

### Root

- The topmost node in a tree, serving as the starting point for traversal.

### Parent

- A node that has one or more child nodes.

### Child

- A node directly connected to another node when moving away from the root.

### Leaf (or Terminal Node)

- A node with no children, situated at the end of a branch.

### Siblings

- Nodes that share the same parent in a tree.

### Ancestor

- A node's ancestors are all the nodes on the path from the root to that node.

### Descendant

- A node's descendants are all the nodes below it in the tree.

### Internal Node 
The nodes with at least one child node are known as internal nodes. Every node (even the root node) is internal except the leaf nodes.

### Path 
A path between any two nodes of a tree is the sequence of connected nodes along with the edges between the two nodes. And the path length is the number of nodes present between two nodes.

### Level
The level in the tree represents the number of steps from the top/root. The root node of the tree is said to be at level 0, and as we go downwards the level increases

### Edge
The connecting link between the two nodes is known as the edges of the tree. It is also referred to as the branch of a tree. If there are n nodes in a binary tree, there will be a total of n-1 edges.

### Height

- The height of a binary tree is the length of the longest path from the root to a leaf node. It influences the efficiency of tree operations.

### Depth

- The depth of a node is its distance from the root. The root has a depth of 0.

### Subtrees

- A subtree is a tree formed by selecting a node and all its descendants.

## Types of Binary Trees

### Full Binary Tree

- **Definition:** Every node has either 0 or 2 children; no node has only one child.
- **Minimum Nodes:** \(h+1\), where \(h\) is the height.
- **Maximum Nodes:** \(2^{h+1} - 1\), achieved when each level is completely filled.

### Complete Binary Tree

- **Definition:** All levels are completely filled, except possibly for the last level, which is filled from left to right.
- **Minimum Nodes:** \(h+1\), similar to a full binary tree.
- **Maximum Nodes:** \(2^{h+1} - 1\), achieved when all levels are filled except the last one.

### Perfect Binary Tree

- **Definition:** All levels, including the last level, are completely filled.
- **Minimum Nodes:** \(2^h\), achieved when all levels are fully occupied.
- **Maximum Nodes:** \(2^{h+1} - 1\), similar to full and complete binary trees.

### Degenerate (or Skewed) Binary Tree

- **Definition:** Each parent node has only one associated child node.
- **Minimum Nodes:** \(h+1\) nodes, where \(h\) is the height.
- **Maximum Nodes:** If left-skewed, \(2^h\) nodes; if right-skewed, \(2^{h+1} - 1\) nodes.

## Formulas

1. Full and Complete Binary Trees: \(2^{h+1} - 1\)
2. Perfect Binary Tree (Minimum Nodes): \(2^h\)
3. Perfect, Full, and Complete Binary Trees (Maximum Nodes): \(2^{h+1} - 1\)
4. Degenerate Binary Tree (Minimum Nodes): \(h+1\)

## Tree Traversal

- In-order, pre-order, and post-order traversals are common methods to visit nodes in a binary tree, exploring the left and right subtrees in different orders.

## Considerations

- **Balanced vs. Unbalanced Trees:** Balanced trees, where the left and right subtrees are approximately equal in height, often provide more efficient search and retrieval operations.

- **Applications:** Binary trees are used in various applications, including expression trees, Huffman coding, and hierarchical structures in databases.

## Understanding the Formulas

- \(h\) represents the height of the binary tree.
- The formulas are derived from the doubling pattern of nodes at each level and account for the initial root node.
- The subtraction of 1 corrects for the initial counting of the root node
---

**Additional Information**

- **Balanced Tree:** A balanced binary tree has roughly equal height for both left and right subtrees, optimizing performance for various operations.

- **Traversal Methods:** Different traversal methods provide flexibility for accessing nodes in specific orders, catering to different algorithmic needs.

- **Applications:** Binary trees are widely used in computer science and applications, ranging from databases to parsing expressions and organizing hierarchical data.


