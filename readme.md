🚀 The Complete DSA Pattern Roadmap
A CP, LeetCode, Codeforces & Interview-Oriented Guide

Table of Contents
Core DSA Patterns
Array Patterns
String Patterns
Linked List Patterns
Stack & Queue Patterns
Binary Search Patterns
Recursion & Backtracking Patterns
Tree Patterns
Graph Patterns
Heap / Priority Queue Patterns
Greedy Patterns
Dynamic Programming Patterns
Bit Manipulation Patterns
Math & Number Theory Patterns
Advanced CP Patterns
LeetCode Pattern Mapping
Codeforces Pattern Mapping
Interview Preparation Pattern Mapping
Learning Order
1. Core DSA Patterns
These patterns solve 90%+ interview and CP problems.

Traversal
Simulation
Brute Force
Greedy
Divide and Conquer
Recursion
Dynamic Programming
Graph Modeling
Mathematical Observation
2. Array Patterns
1. Two Pointer
Used when array is sorted or when maintaining relationships between positions.

Examples:

Two Sum II
Container With Most Water
Remove Duplicates
Complexity:

O(n)
2. Sliding Window
Used for contiguous subarrays/substrings.

Types:

Fixed Window
window size = k
Variable Window
expand right
shrink left
Examples:

Longest Substring Without Repeating Characters
Minimum Size Subarray Sum
3. Prefix Sum
pref[i]
Examples:

Range Sum Query
Subarray Sum Equals K
4. Difference Array
Very common in Codeforces.

Examples:

Range Updates
Railway Scheduling
Queries on Intervals
5. Kadane's Algorithm
Maximum Subarray Pattern

Examples:

Leetcode 53
6. Dutch National Flag
3-way partitioning.

Examples:

Sort Colors
7. Meet In The Middle
For N ≈ 40

Examples:

Subset Sum
8. Coordinate Compression
For huge coordinates.

Examples:

CP sweeps
Offline queries
3. String Patterns
Character Frequency
vector<int> freq(26);
Hashing
Examples:

Rabin Karp
KMP
Pattern Matching

Complexity:

O(n+m)
Z Algorithm
String Matching

Complexity:

O(n)
Rolling Hash
Examples:

Longest Duplicate Substring
Manacher's Algorithm
Palindrome Pattern

Complexity:

O(n)
4. Linked List Patterns
1. Traversal Pattern
while(curr)
Used for:

Counting
Searching
Printing
2. Two Pointer Pattern
first
second
Used for:

Kth node from end
Remove Nth node
3. Fast & Slow Pointer Pattern
slow += 1
fast += 2
Used for:

Middle Node
Cycle Detection
Find Loop Start
4. Three Pointer Pattern
prev
curr
next
Used for:

Reverse Linked List
5. Four Pointer Pattern
Used for:

Reordering
Complex Swaps
6. Dummy Node Pattern
ListNode dummy(0);
Used for:

Insertion
Deletion
Merge Lists
7. Reversal Pattern
Used for:

Reverse List
Reverse K Group
Reverse Between
8. Merge Pattern
Used for:

Merge Sorted Lists
Merge K Lists
9. Split Pattern
Used for:

Merge Sort
Palindrome
Reorder List
10. Cycle Detection Pattern
Floyd's Algorithm

Used for:

Detect Loop
Entry Point
Loop Length
11. Intersection Pattern
Used for:

Intersecting Linked Lists
12. Hashing + Linked List Pattern
Used for:

Duplicate Removal
Cycle Detection
13. Palindrome Pattern
Combination Pattern:

Middle
↓
Reverse
↓
Compare
5. Stack & Queue Patterns
Monotonic Stack
Used for:

Next Greater Element
Histogram
Stock Span
Monotonic Queue
Used for:

Sliding Window Maximum
Expression Evaluation
Used for:

Infix
Prefix
Postfix
BFS Queue Pattern
Used for:

Level Order
Shortest Path
6. Binary Search Patterns
Classic Binary Search
while(l<=r)
Binary Search On Answer
Most important CP pattern.

Examples:

Minimize Maximum
Allocate Books
Aggressive Cows
Lower Bound
lower_bound()
Upper Bound
upper_bound()
Peak Finding
Examples:

Peak Element
7. Recursion & Backtracking
Choose / Not Choose
Examples:

Subsets
Generate All Possibilities
Examples:

N Queen
Sudoku
Permutation Pattern
Examples:

Permutations
Combination Pattern
Examples:

Combination Sum
8. Tree Patterns
DFS
Preorder
Inorder
Postorder
BFS
Level Order

Tree DP
Examples:

Diameter
Maximum Path Sum
LCA
Lowest Common Ancestor

Euler Tour
Very common in CP.

Binary Lifting
Used in:

LCA
Queries
9. Graph Patterns
DFS
BFS
Multi Source BFS
Topological Sort
Kahn
DFS Based
Union Find / DSU
Used for:

Connected Components
MST
Dijkstra
Shortest Path

Bellman Ford
Negative Edges

Floyd Warshall
All Pair Shortest Path

MST Pattern
Prim
Kruskal
SCC
Kosaraju
Tarjan
10. Heap / Priority Queue Patterns
Top K Pattern
Examples:

K Largest Elements
Running Median
Two Heap Pattern

Merge K Sorted Structures
11. Greedy Patterns
Sorting Based Greedy
Interval Scheduling
Activity Selection
Fractional Knapsack
Sweep Line
Important in CF.

12. Dynamic Programming Patterns
1D DP
Examples:

Climbing Stairs
2D DP
Examples:

LCS
Knapsack DP
0/1 Knapsack

Unbounded Knapsack
Coin Change

LIS Pattern
Longest Increasing Subsequence

Interval DP
Examples:

Burst Balloons
Digit DP
Very Important in CP

Tree DP
Bitmask DP
Important for:

TSP
13. Bit Manipulation Patterns
XOR Pattern
Prefix XOR
Bitmask Enumeration
Subset Generation
Power Of Two Tricks
14. Math & Number Theory Patterns
GCD
Euclid Algorithm

Extended GCD
Modular Arithmetic
Fast Exponentiation
Sieve Of Eratosthenes
Prime Factorization
Combinatorics
nCr

Inclusion Exclusion
Chinese Remainder Theorem
15. Advanced CP Patterns
These are heavily used in Codeforces 1600+.

Segment Tree
Lazy Propagation
Fenwick Tree (BIT)
Sparse Table
Mo's Algorithm
DSU On Tree
Heavy Light Decomposition
Trie
Aho Corasick
Suffix Array
Suffix Automaton
Convex Hull Trick
FFT
Matrix Exponentiation
16. LeetCode Pattern Mapping
Pattern	Must Solve
Two Pointer	11, 15, 125, 167
Sliding Window	3, 76, 209, 424
Prefix Sum	560, 974
Binary Search	33, 34, 875
Linked List	21, 19, 141, 206, 234
Stack	20, 84, 496
Queue	239
Tree DFS	104, 543
Tree BFS	102, 199
Graph BFS	994, 200
Graph DFS	695
Heap	347, 215
Backtracking	39, 46, 78
DP	70, 198, 322, 300
Greedy	55, 134, 435
17. Codeforces Pattern Mapping
Rating 800-1000
Implementation
Math
Sorting
Greedy
Examples:

Watermelon
Domino Piling
Rating 1100-1300
Two Pointers
Binary Search
Prefix Sum
Rating 1300-1500
Sliding Window
Greedy
Constructive Algorithms
Hashing
Rating 1500-1700
Graph BFS/DFS
DSU
DP
Bitmask
Rating 1700-1900
Segment Tree
LCA
Trees
Advanced Greedy
Rating 1900-2200+
HLD
Mo's
Digit DP
FFT
Persistent DS
18. Interview Pattern Mapping
FAANG Core Patterns
Arrays
Two Pointer
Sliding Window
Prefix Sum
Linked List
Fast Slow
Reversal
Merge
Trees
DFS
BFS
LCA
Graphs
BFS
DFS
Topological Sort
Union Find
DP
Knapsack
LIS
Grid DP
System Design
Object Modeling
Scalability
Caching
Load Balancer
Database Sharding
19. Recommended Learning Order
Arrays
 ↓
Two Pointer
 ↓
Sliding Window
 ↓
Prefix Sum
 ↓
Binary Search
 ↓
Linked List
 ↓
Stack
 ↓
Queue
 ↓
Recursion
 ↓
Backtracking
 ↓
Trees
 ↓
BST
 ↓
Heap
 ↓
Graphs
 ↓
Greedy
 ↓
DP
 ↓
Trie
 ↓
Segment Tree
 ↓
Fenwick Tree
 ↓
LCA
 ↓
Advanced CP
Final Rule
If a problem appears:

Array → Two Pointer / Sliding Window / Prefix Sum String → Sliding Window / Hashing / KMP Linked List → Fast-Slow / Reverse / Dummy Node Tree → DFS / BFS / DP Graph → BFS / DFS / DSU / Dijkstra Range Query → Prefix Sum / Segment Tree / BIT Optimization → Binary Search on Answer Choices → DP / Backtracking Intervals → Greedy / Sweep Line Top-K → Heap