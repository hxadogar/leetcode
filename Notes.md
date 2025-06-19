# 🔍 Pattern Matching Guide

## 1. Arrays / Subarrays / Pairs

| Problem Pattern                          | Suggested Approach             |
|------------------------------------------|--------------------------------|
| Find two numbers that sum to X           | HashMap                        |
| Subarray with sum X                      | Prefix Sum + HashMap           |
| Sorted array + target                    | Two Pointers                   |
| Sliding window min/max                   | Deque or Heap                  |
| Longest unique substring                 | Sliding Window + HashSet       |
| Kth largest/smallest element             | Heap                           |

---

## 2. Counting / Combinations / Ways

| Problem Pattern                          | Suggested Approach             |
|------------------------------------------|--------------------------------|
| Count number of ways to do something     | Dynamic Programming (DP)       |
| Subsets / permutations / combinations    | Recursion + Backtracking       |
| Can I reach this value or not            | DFS + Memoization              |
| Fibonacci-like recurrence                | DP                             |

---

## 3. Binary Search

| Problem Pattern                          | Suggested Approach             |
|------------------------------------------|--------------------------------|
| "Minimum possible" or "Maximum value"    | Binary Search on Answer Space  |
| Value in sorted array                    | Binary Search                  |
| Optimize a decision                      | Binary Search or Greedy + BS   |

---

## 4. Stack / Queue

| Problem Pattern                          | Suggested Approach             |
|------------------------------------------|--------------------------------|
| Next greater/smaller element             | Monotonic Stack                |
| Balanced parentheses                     | Stack                          |
| Evaluate expressions                     | Stack                          |
| Sliding window                           | Deque (for max/min)            |

---

## 5. Graphs

| Problem Pattern                          | Suggested Approach             |
|------------------------------------------|--------------------------------|
| Can I reach from node A to B?            | BFS / DFS                      |
| Shortest path (unweighted)               | BFS                            |
| Shortest path (weighted)                 | Dijkstra / Bellman-Ford        |
| Detect cycles in graph                   | DFS with visited[] tracking    |
| Topological sorting                      | Kahn’s Algo / DFS Stack        |

---

## 6. Trees / Recursion

| Problem Pattern                          | Suggested Approach             |
|------------------------------------------|--------------------------------|
| Max depth / diameter                     | DFS Post-order                 |
| Left/right/top view                      | BFS with levels                |
| Lowest common ancestor                   | DFS + Backtrack                |
| BST search / insert                      | Recursive                      |
| Build tree from inorder/preorder         | Divide & Conquer               |

---

# 🛠️ Tool Selection Rules

| Need To...                               | Use This Tool                  |
|------------------------------------------|--------------------------------|
| Store (key → value)                      | `unordered_map`                |
| Check existence fast                     | `unordered_set`                |
| Maintain order + quick lookup            | `set`                          |
| Min/max tracking                         | `priority_queue` (heap)        |
| Track index/value pairs                  | `map`, `pair`, or `vector`     |
| Manage subarrays/windows                 | Two Pointers / Sliding Window  |
| Keep track of "previous" elements        | Stack                          |
| Track visited in graph                   | `vector<bool>` or `unordered_set` |

---

# 📌 Golden Rules of Thumb

- 💡 **Brute force first**, then identify what’s slow.
- 🔍 If you're **looking for patterns or conditions** → Use hashing or two pointers.
- 🔁 If it's about **"number of ways" or overlapping subproblems** → Think DP.
- 📊 If input is **sorted** → Try two pointers or binary search.
- 📦 If it’s **about subsets, combinations, or permutations** → Try recursion/backtracking.
- 🌲 If recursive tree-like breakdown works → Use **divide & conquer** or DP.

---

# 🧠 Problem-Solving Thinking Steps (for every problem)

1. **Understand** the problem and constraints.
2. Try a **brute-force** approach.
3. Look for **patterns** in how the inputs behave.
4. Think of what **data structures** could help.
5. Ask: Can I do this in **one pass**? Can I use **extra space**?
6. Use **examples** to simulate the logic step-by-step.
7. **Optimize** after correctness.

---
---
