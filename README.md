# Binary trees
## Binary trees v. binary search trees v. AVL trees v. Max binary heap
### Binary Tree

-   A hierarchical data structure where each node has at most two children: left and right.
-   No specific order is enforced among the nodes.

### Binary Search Tree (BST)

-   A binary tree where the left child of a node contains values less than the node, and the right child contains values greater than the node.
-   Allows efficient search, insertion, and deletion (average-case O(log n)).

### AVL Tree

-   A self-balancing binary search tree.
-   Ensures the height difference (balance factor) between left and right subtrees of any node is at most 1.
-   Balancing is achieved through rotations during insertions and deletions, ensuring O(log n) height.

### Max Binary Heap

-   A complete binary tree where each parent node is greater than or equal to its children.
-   Used in priority queues.
-   Efficient insertion and extraction of the maximum element (O(log n)).

### Key Differences

| Property | Binary Tree | BST | AVL Tree | Max Binary Heap |
| --- | --- | --- | --- | --- |
| Node Order | None | Sorted | Sorted | Parent ≥ Children |
| Balancing | No | No | Yes | No |
| Efficiency (Search) | O(n) | O(log n) avg. | O(log n) | O(n) |
| Efficiency (Insert) | O(1) | O(log n) avg. | O(log n) | O(log n) |
| Structure | Arbitrary | Arbitrary | Height-balanced | Complete binary tree |
