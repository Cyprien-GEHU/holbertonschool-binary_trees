# Binary Trees

This repository contains functions to manipulate binary trees in C.

## Create a Binary Tree Node

Write a function that creates a binary tree node.

**Prototype:**
```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```

- `parent` is a pointer to the parent node of the node to create.
- `value` is the value to put in the new node.
- When created, a node does not have any child.
- The function must return a pointer to the new node, or `NULL` on failure.

## Insert Left

Write a function that inserts a node as the left-child of another node.

**Prototype:**
```c
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
```

- `parent` is a pointer to the node to insert the left-child in.
- `value` is the value to store in the new node.
- The function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`.
- If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

## Insert Right

Write a function that inserts a node as the right-child of another node.

**Prototype:**
```c
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
```

- `parent` is a pointer to the node to insert the right-child in.
- `value` is the value to store in the new node.
- The function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`.
- If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

## Delete

Write a function that deletes an entire binary tree.

**Prototype:**
```c
void binary_tree_delete(binary_tree_t *tree);
```

- `tree` is a pointer to the root node of the tree to delete.
- If `tree` is `NULL`, do nothing.

## Is Leaf

Write a function that checks if a node is a leaf.

**Prototype:**
```c
int binary_tree_is_leaf(const binary_tree_t *node);
```

- `node` is a pointer to the node to check.
- The function must return `1` if `node` is a leaf, otherwise `0`.
- If `node` is `NULL`, return `0`.

## Is Root

Write a function that checks if a given node is a root.

**Prototype:**
```c
int binary_tree_is_root(const binary_tree_t *node);
```

- `node` is a pointer to the node to check.
- The function must return `1` if `node` is a root, otherwise `0`.
- If `node` is `NULL`, return `0`.

## Pre-order Traversal

Write a function that goes through a binary tree using pre-order traversal.

**Prototype:**
```c
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
```

- `tree` is a pointer to the root node of the tree to traverse.
- `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing.

## In-order Traversal

Write a function that goes through a binary tree using in-order traversal.

**Prototype:**
```c
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
```

- `tree` is a pointer to the root node of the tree to traverse.
- `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing.

## Post-order Traversal

Write a function that goes through a binary tree using post-order traversal.

**Prototype:**
```c
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
```

- `tree` is a pointer to the root node of the tree to traverse.
- `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing.

## Height

Write a function that measures the height of a binary tree.

**Prototype:**
```c
size_t binary_tree_height(const binary_tree_t *tree);
```

- `tree` is a pointer to the root node of the tree to measure the height.
- If `tree` is `NULL`, the function must return `0`.

## Depth

Write a function that measures the depth of a node in a binary tree.

**Prototype:**
```c
size_t binary_tree_depth(const binary_tree_t *tree);
```

- `tree` is a pointer to the node to measure the depth.
- If `tree` is `NULL`, the function must return `0`.

## Size

Write a function that measures the size of a binary tree.

**Prototype:**
```c
size_t binary_tree_size(const binary_tree_t *tree);
```

- `tree` is a pointer to the root node of the tree to measure the size.
- If `tree` is `NULL`, the function must return `0`.

## Leaves

Write a function that counts the leaves in a binary tree.

**Prototype:**
```c
size_t binary_tree_leaves(const binary_tree_t *tree);
```

- `tree` is a pointer to the root node of the tree to count the number of leaves.
- If `tree` is `NULL`, the function must return `0`.
- A `NULL` pointer is not a leaf.

## Nodes

Write a function that counts the nodes with at least 1 child in a binary tree.

**Prototype:**
```c
size_t binary_tree_nodes(const binary_tree_t *tree);
```

- `tree` is a pointer to the root node of the tree to count the number of nodes.
- If `tree` is `NULL`, the function must return `0`.
- A `NULL` pointer is not a node.

## Balance Factor

Write a function that measures the balance factor of a binary tree.

**Prototype:**
```c
int binary_tree_balance(const binary_tree_t *tree);
```

- `tree` is a pointer to the root node of the tree to measure the balance factor.
- If `tree` is `NULL`, return `0`.

## Is Full

Write a function that checks if a binary tree is full.

**Prototype:**
```c
int binary_tree_is_full(const binary_tree_t *tree);
```

- `tree` is a pointer to the root node of the tree to check.
- If `tree` is `NULL`, the function must return `0`.

## Is Perfect

Write a function that checks if a binary tree is perfect.

**Prototype:**
```c
int binary_tree_is_perfect(const binary_tree_t *tree);
```

- `tree` is a pointer to the root node of the tree to check.
- If `tree` is `NULL`, the function must return `0`.

## Sibling

Write a function that finds the sibling of a node.

**Prototype:**
```c
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
```

- `node` is a pointer to the node to find the sibling.
- The function must return a pointer to the sibling node.
- If `node` is `NULL` or the parent is `NULL`, return `NULL`.
- If `node` has no sibling, return `NULL`.

## Uncle

Write a function that finds the uncle of a node.

**Prototype:**
```c
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
```

- `node` is a pointer to the node to find the uncle.
- The function must return a pointer to the uncle node.
- If `node` is `NULL`, return `NULL`.
- If `node` has no uncle, return `NULL`.

## Repository

GitHub repository: [holbertonschool-binary_trees](https://github.com/SoliraZ/holbertonschool-binary_trees)