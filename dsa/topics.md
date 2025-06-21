## A. ABSOLUTE FUNDAMENTALS (Your Starting Point)

1.  **Time & Space Complexity Analysis (Big O Notation)**
    * **Concept:** Understanding O(1), O(log N), O(N), O(N log N), O(N^2), O(2^N), O(N!).
    * **Concept:** Best, Average, Worst Case analysis.
    * **Concept:** Amortized Analysis (especially for `std::vector` `push_back`).
    * **Why:** *Absolutely critical*. This is how you evaluate and compare the efficiency of your solutions. You must understand this from Day 1.

2.  **Basic Math & Logic**
    * **Concept:** Integer Arithmetic, Modulo operations.
    * **Concept:** Bitwise Operations (basic like AND, OR, XOR - useful for optimization).
    * **Why:** Fundamental for almost all problems.

3.  **Core Problem-Solving Workflow**
    * **Pattern:** **Understand -> Plan -> Implement -> Test -> Optimize.**
    * **Pattern:** Breaking down problems, identifying edge cases.
    * **Why:** This meta-skill ensures you approach every problem systematically.

---

## B. CORE DATA STRUCTURES & ASSOCIATED ALGORITHMS/PATTERNS

### 1. Arrays & Strings (`std::vector`, `std::string`, `char[]`)
    * **[DS]** Fixed-size Arrays (C-style, `std::array`)
    * **[DS]** Dynamic Arrays (`std::vector`)
    * **[DS]** Strings (`std::string`, C-style `char[]`)
    * **[Algo]** Linear Search (`O(N)`)
    * **[Algo]** Binary Search (`O(log N)`) - *Requires Sorted Array*
    * **[Pattern]** **Two Pointers:**
        * Fast/Slow pointers (e.g., finding middle of list)
        * Left/Right pointers (e.g., Two Sum on sorted array, Palindrome)
        * Read/Write pointers (e.g., `Move Zeroes`, `Remove Duplicates`)
    * **[Pattern]** **Sliding Window:** For finding subarrays/substrings of a certain property.
    * **[Pattern]** Prefix Sum / Product (for efficient range queries).
    * **-> Leads to:** Hash Tables, Sorting, certain Dynamic Programming problems.

### 2. Hash Tables (Maps & Sets)
    * **[DS]** Hash Map (`std::unordered_map`) - Key-Value pairs, average `O(1)` ops.
    * **[DS]** Hash Set (`std::unordered_set`) - Stores unique keys, average `O(1)` ops.
    * **[Concept]** Hashing, Collision Resolution (briefly).
    * **[Pattern]** **Frequency Counting:** Efficiently counting occurrences of elements.
    * **[Pattern]** **Duplicate Checking / Uniqueness:** Fast lookups for existence.
    * **[Pattern]** `O(1)` Lookups: Anytime you need to quickly check if something exists or retrieve an associated value.
    * **-> Enhances:** Many Array/String problems (e.g., `Two Sum`, `Contains Duplicate`), Graph representations.

### 3. Linked Lists
    * **[DS]** Singly Linked List
    * **[DS]** Doubly Linked List
    * **[DS]** Circular Linked List
    * **[Algo]** Traversal, Insertion, Deletion (node manipulation).
    * **[Algo]** Reversal.
    * **[Pattern]** **Two Pointers (specifically for Linked Lists):**
        * `Floyd's Tortoise and Hare` for Cycle Detection.
        * Finding middle, Nth node from end.
    * **-> Prerequisite for:** Understanding nodes, pointers which is helpful for Trees/Graphs.

### 4. Stacks & Queues
    * **[DS]** Stack (LIFO: Last-In, First-Out) - `std::stack`, `std::vector` or `std::deque` can implement.
    * **[DS]** Queue (FIFO: First-In, First-Out) - `std::queue`, `std::deque` can implement.
    * **[DS]** Deque (Double-Ended Queue) - `std::deque`.
    * **[Algo]** Basic Push/Pop (Stack), Enqueue/Dequeue (Queue).
    * **[Pattern]** Parentheses Balancing/Matching.
    * **[Pattern]** Implicit use in DFS (`std::stack` helps manage recursion).
    * **[Pattern]** Implicit use in BFS (`std::queue` manages level-by-level traversal).
    * **[Pattern]** Monotonic Stack/Queue (more advanced, for finding next greater/smaller elements).
    * **-> Prerequisite for:** Tree and Graph Traversals.

### 5. Trees
    * **[DS]** General Trees (nodes, root, children, leaves).
    * **[DS]** Binary Trees (max 2 children).
    * **[DS]** Binary Search Trees (BST): Left < Root < Right.
    * **[DS]** Heaps (Priority Queues): Max-Heap, Min-Heap (`std::priority_queue`).
    * **[DS]** Tries (Prefix Trees) - Specialized for string problems.
    * **[Algo]** Tree Traversals:
        * DFS (`Depth-First Search`): Inorder, Preorder, Postorder (recursive and iterative).
        * BFS (`Breadth-First Search`): Level Order Traversal (uses a queue).
    * **[Algo]** BST Operations: Insert, Delete, Search.
    * **[Algo]** Heapify, Heap Sort (uses heap properties).
    * **[Pattern]** Recursion in Trees (many tree problems are naturally recursive).
    * **[Pattern]** Tree Properties: Height, Diameter, Balance.
    * **[Pattern]** Lowest Common Ancestor (LCA).
    * **-> Prerequisite for:** Graphs, specialized data structures.

### 6. Graphs
    * **[DS]** Adjacency Matrix (dense graphs).
    * **[DS]** Adjacency List (`std::vector<std::vector<int>>` or `std::vector<std::list<int>>` or `std::map<int, std::vector<int>>`) (sparse graphs - more common).
    * **[Concept]** Vertices, Edges, Directed/Undirected, Weighted/Unweighted, Cycles.
    * **[Algo]** **Graph Traversals:**
        * DFS (`Depth-First Search`)
        * BFS (`Breadth-First Search`)
    * **[Algo]** **Shortest Path Algorithms:**
        * Dijkstra's Algorithm (non-negative weights).
        * Bellman-Ford Algorithm (handles negative weights, detects negative cycles).
        * Floyd-Warshall Algorithm (All-Pairs Shortest Path).
    * **[Algo]** Minimum Spanning Tree (MST):
        * Prim's Algorithm.
        * Kruskal's Algorithm.
    * **[Algo]** Topological Sort (for Directed Acyclic Graphs - DAGs).
    * **[Algo]** Cycle Detection (using DFS/BFS).
    * **[Pattern]** Connectivity Problems.
    * **[Pattern]** Pathfinding.
    * **-> Leads to:** Advanced graph algorithms, Network Flow.

---

## C. CORE ALGORITHMIC PARADIGMS & PATTERNS (Often span multiple DS)

### 1. Recursion & Backtracking
    * **[Concept]** Base Case, Recursive Step, Call Stack.
    * **[Pattern]** **Backtracking:** Exploring all possibilities, building solutions incrementally, pruning branches.
        * **[Algo]** Permutations, Combinations, Subsets.
        * **[Algo]** N-Queens Problem, Sudoku Solver.
    * **-> Builds on:** Basic programming logic.
    * **-> Prerequisite for:** Dynamic Programming, Tree/Graph traversals.

### 2. Sorting Algorithms
    * **[Concept]** Comparison Sorts vs. Non-comparison Sorts. Stability.
    * **[Algo]** Simple Sorts: Bubble, Selection, Insertion (understand efficiency pitfalls).
    * **[Algo]** Efficient Comparison Sorts:
        * **Merge Sort:** `O(N log N)` stable, `Divide and Conquer`.
        * **Quick Sort:** `O(N log N)` average, `O(N^2)` worst, `Divide and Conquer`, in-place potential.
        * **Heap Sort:** `O(N log N)` uses Heap DS.
    * **[Algo]** Linear Time Sorts (for specific data ranges):
        * Counting Sort, Radix Sort.
    * **-> Leverages:** Arrays, Two Pointers (in some), Recursion (Merge/Quick Sort).
    * **-> Enhances:** Many problems become easier/faster if data is sorted (e.g., Binary Search, Two Pointers).

### 3. Greedy Algorithms
    * **[Concept]** Making a locally optimal choice at each step with the hope that it leads to a globally optimal solution.
    * **[Pattern]** Interval Scheduling, Activity Selection, Coin Change (sometimes), Huffman Coding.
    * **-> Requires:** Careful proof for correctness (often trickier than it seems).

### 4. Dynamic Programming (DP)
    * **[Concept]** **Overlapping Subproblems:** Solutions to subproblems are reused.
    * **[Concept]** **Optimal Substructure:** Optimal solution to problem contains optimal solutions to subproblems.
    * **[Technique]** **Memoization (Top-Down):** Recursive solution with caching.
    * **[Technique]** **Tabulation (Bottom-Up):** Iterative solution building up from base cases.
    * **[Pattern]** **Classic DP Problems:**
        * Knapsack Problem (0/1, Unbounded).
        * Longest Common Subsequence/Substring.
        * Coin Change (ways to make change, minimum coins).
        * Grid/Path Problems (e.g., Unique Paths, Minimum Path Sum).
        * Fibonacci variations (classic intro).
        * `Kadane's Algorithm` (for Maximum Subarray - often seen as a simple DP or Greedy).
    * **-> Builds heavily on:** Recursion, Arrays/Tables.

### 5. Divide and Conquer
    * **[Concept]** Break a problem into smaller, independent subproblems of the same type, solve them recursively, and then combine their solutions.
    * **[Algo]** Merge Sort, Quick Sort, Binary Search.

---

## D. ADVANCED DATA STRUCTURES & ALGORITHMS (For a deeper dive, after core mastery)

* **Segment Trees / Fenwick Trees (BIT):** For efficient range queries and updates.
* **Tries:** Advanced uses for string searching, autocomplete.
* **Disjoint Set Union (DSU) / Union-Find:** For managing sets of elements partitioned into a number of disjoint (non-overlapping) subsets. Used in Kruskal's MST, connectivity problems.
* **String Matching Algorithms:** KMP (Knuth-Morris-Pratt), Rabin-Karp.
* **Minimax Algorithm:** Used in game theory (e.g., Tic-Tac-Toe, Chess AI).
* **Network Flow / Max Flow Min Cut:** Advanced graph problems.

---

## E. META-SKILLS (Develop Continuously Throughout)

* **Debugging:** Effective use of debuggers, print statements.
* **Testing:** Writing custom test cases, especially edge cases.
* **Problem Decomposition:** Breaking large problems into smaller, manageable parts.
* **Pattern Recognition:** Identifying which algorithm/DS/pattern applies to a new problem.
* **Code Design & Readability:** Writing clean, modular, and well-commented C++ code.
* **Communication:** Articulating your thought process and solution effectively (crucial for interviews).


---
---

```
DSA MASTER ROADMAP

├── I. BASICS (MUST KNOW BEFORE ANYTHING)
│   ├── 1. Time and Space Complexity
│   ├── 2. Big-O Notation, Best/Worst/Average
│   └── 3. Asymptotic Analysis Examples (Loop, Nested, Recursion)

├── II. CORE DATA STRUCTURES (LEARN + MASTER)
│   ├── A. Arrays
│   │   ├── Basics, Indexing, Memory
│   │   ├── Traversal, Prefix Sum
│   │   ├── Sliding Window (Fixed + Variable Size)
│   │   └── Two-Pointer Technique
│   │
│   ├── B. Strings
│   │   ├── Char arrays vs `std::string`
│   │   ├── Substrings, Palindromes, Reversals
│   │   ├── String Hashing (Rabin Karp)
│   │   └── KMP (Pattern Matching)
│   │
│   ├── C. Hashing
│   │   ├── `std::unordered_map`, `std::unordered_set`
│   │   ├── Frequency Count, Hashing for pairs
│   │   ├── HashMap-based problems (Two Sum, Isomorphic Strings)
│   │   └── Collision, Load Factor, STL Hash Internals
│   │
│   ├── D. Linked List
│   │   ├── Singly, Doubly, Circular
│   │   ├── Fast & Slow Pointers
│   │   ├── Reversal, Merge, Cycle Detection
│   │   └── Linked List to Array Tricks
│   │
│   ├── E. Stack & Queue
│   │   ├── Stack (Infix to Postfix, Valid Parentheses)
│   │   ├── Queue (Sliding Window Max, BFS)
│   │   ├── Monotonic Stack/Queue
│   │   └── Deque (`std::deque`, 0-1 BFS)
│   │
│   ├── F. Trees & Binary Trees
│   │   ├── DFS (Pre/In/Post-order Recursion)
│   │   ├── BFS (Level Order)
│   │   ├── Binary Search Trees (BST), Validations
│   │   └── Tree Recursion Patterns
│   │
│   └── G. Heaps (Priority Queue)
│       ├── Min Heap / Max Heap
│       ├── `std::priority_queue` in C++
│       └── Top K Problems (Kth largest, Stream Median)

├── III. CORE ALGORITHMS
│   ├── A. Sorting
│   │   ├── Selection, Bubble, Insertion
│   │   ├── Merge Sort, Quick Sort
│   │   └── STL Sorts, Custom Comparators
│   │
│   ├── B. Binary Search (on Answer + Position)
│   │   ├── Basic Binary Search (iterative/recursive)
│   │   ├── Lower Bound / Upper Bound
│   │   └── Search in Rotated Array, Peak Element
│   │
│   ├── C. Recursion
│   │   ├── Base + Recursive Case
│   │   ├── Tree Recursion (Binary Tree)
│   │   └── Backtracking (N Queens, Subsets, Permutations)
│   │
│   ├── D. Bit Manipulation
│   │   ├── XOR Trick (Single Number, Missing Number)
│   │   ├── Set/Clear/Get Bits
│   │   └── Bitmask DP (Advanced)
│   │
│   └── E. Greedy Algorithms
│       ├── Activity Selection, Interval Merge
│       ├── Coin Change (Greedy vs DP)
│       └── When Greedy Fails (proof required)

├── IV. DYNAMIC PROGRAMMING (DP)
│   ├── 1D DP
│   │   ├── Fibonacci, Climbing Stairs
│   │   ├── House Robber, Max Subarray
│   ├── 2D DP
│   │   ├── Knapsack, Subset Sum
│   │   ├── LCS, Edit Distance, Palindromic Substrings
│   ├── DP with State Compression
│   └── DP on Trees (e.g., Diameter)

├── V. GRAPH ALGORITHMS
│   ├── Graph Representations (Adj List, Adj Matrix)
│   ├── DFS / BFS on Graphs
│   ├── Topological Sort (Kahn’s Algo, DFS)
│   ├── Union Find (DSU) → Kruskal
│   ├── Dijkstra’s Algo (Shortest Path)
│   ├── Bellman-Ford, Floyd Warshall
│   └── MST (Prim’s + Kruskal)

├── VI. ADVANCED TOPICS
│   ├── Tries
│   ├── Segment Trees (with Lazy Propagation)
│   ├── Fenwick Trees / BIT
│   ├── Rolling Hash, Z Algorithm
│   └── Suffix Arrays, LCP

├── VII. PROBLEM SOLVING PATTERNS (Always Reusable)
│   ├── Two Pointers
│   ├── Sliding Window (Fixed + Variable)
│   ├── Fast and Slow Pointer (Cycle Detection)
│   ├── Top K Elements (Heap or QuickSelect)
│   ├── Merge Intervals (Greedy + Sorting)
│   ├── Binary Search on Answer
│   ├── Monotonic Stack (Next Greater Element)
│   ├── Prefix Sum, Difference Array
│   └── Backtracking + Recursion Tree

├── VIII. COMPETITIVE PROGRAMMING / INTERVIEW SPECIFIC
│   ├── STL Usage (`map`, `set`, `priority_queue`, etc.)
│   ├── Custom Comparators
│   ├── Fast I/O (e.g., `ios::sync_with_stdio(false);`)
│   ├── Test Case Simulation Techniques
│   ├── Memory Optimization for DSA
│   └── Contest Debugging Strategy
```