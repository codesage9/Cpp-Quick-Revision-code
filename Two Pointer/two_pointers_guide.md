# Comprehensive Guide to Two Pointers & Sliding Window Patterns

This reference guide details the core frameworks, patterns, and advanced extensions of the **Two Pointer** and **Sliding Window** techniques used in Competitive Programming (CP) and Technical Interviews.

---

## Overview

The Two Pointer technique optimizes brute-force $O(N^2)$ or $O(N \log N)$ approaches down to $O(N)$ amortized time by leveraging monotonic properties, sorting, or window constraints.

---

## Core Foundations (Patterns 1–4)

### 1. Convergence Pattern (Opposite Ends)
* **Pointers:** `left = 0`, `right = n - 1`
* **Mechanism:** Pointers move toward each other based on comparison conditions.
* **Prerequisite:** Array must be sorted or possess a monotonic/symmetric property.
* **Use Cases:**
  * Two Sum in a sorted array
  * Valid Palindrome check
  * Container With Most Water
  * 3Sum / 4Sum (fixed outer loops + inner convergence)

### 2. Sliding Window (Same Direction / Variable Size)
* **Pointers:** `left` (contracts window), `right` (expands window)
* **Mechanism:** Expand `right` until condition breaks, then increment `left` to restore validity.
* **Use Cases:**
  * Longest substring without repeating characters
  * Smallest subarray with sum $\ge K$
  * Subarrays with at most $K$ distinct elements

```cpp
// Universal Framework for Variable-Size Sliding Window
int left = 0, ans = 0;
for (int right = 0; right < n; ++right) {
    // 1. Add elements[right] to window state
    
    // 2. Shrink window while condition is violated
    while (!isValid() && left <= right) {
        // Remove elements[left] from state
        left++;
    }
    
    // 3. Update result
    ans = max(ans, right - left + 1);
}
```

### 3. Fixed-Size Sliding Window
* **Pointers:** Window width fixed to $K$.
* **Mechanism:** Process initial window of length $K$. Slide window forward by adding incoming element and subtracting outgoing element in $O(1)$.
* **Use Cases:**
  * Maximum sum subarray of size $K$
  * String anagram matching

### 4. Partition Pattern (Two-Way / Three-Way)
* **Pointers:** Multiple boundary pointers (e.g., `low`, `mid`, `high`).
* **Mechanism:** Partition elements into distinct regions based on criteria.
* **Use Cases:**
  * Dutch National Flag problem (sort 0s, 1s, 2s)
  * Quicksort partition step
  * In-place element reordering

---

## Intermediate Patterns (Patterns 5–7)

### 5. Two Arrays / Parallel Pointers
* **Pointers:** `p1` on Array A, `p2` on Array B.
* **Mechanism:** Pointers advance independently based on comparing `A[p1]` and `B[p2]`.
* **Use Cases:**
  * Merging two sorted arrays
  * Array intersection / union
  * Smallest absolute difference between elements of two arrays

### 6. Fast & Slow Pointers (Tortoise and Hare)
* **Pointers:** `slow` moves step size $1$, `fast` moves step size $2$.
* **Mechanism:** Detect cycles or midpoints based on relative speeds.
* **Use Cases:**
  * Linked List cycle detection (Floyd's algorithm)
  * Finding the start of a cycle
  * Middle element of a linked list

### 7. Multi-Pointer Composition
* **Pointers:** $k - 2$ outer nested loops + $2$ inner convergence pointers.
* **Mechanism:** Fix outer elements, reduces $O(N^k)$ brute-force to $O(N^{k-1})$.
* **Use Cases:**
  * 3Sum, 4Sum, 3Sum Closest

---

## Advanced CP Extensions (Patterns 8–11)

### 8. Monotonic Queue / Deque Sliding Window
* **Mechanism:** Maintain a monotonic `std::deque` storing indices. Keep elements strictly increasing or decreasing to achieve $O(1)$ amortized range min/max retrieval.
* **Use Cases:**
  * Sliding Window Maximum / Minimum
  * Subarray constraints involving $(\max - \min \le K)$

### 9. Mo's Algorithm (Offline Range Queries)
* **Mechanism:** Sort queries in blocks of size $\approx \sqrt{N}$. Maintain two global pointers (`L`, `R`) and slide them to the target query boundaries. Total pointer movement is bounded by $O(N \sqrt{Q})$.
* **Use Cases:**
  * Range distinct count queries (without updates)
  * Frequency-based range queries

### 10. Amortized State Machine Two Pointers (Queue via Two Stacks)
* **Mechanism:** Handle windows where removing elements isn't mathematically reversible (e.g., GCD, bitwise AND/OR, max/min) by simulating a queue using two stacks for $O(1)$ updates.
* **Use Cases:**
  * Subarrays with $\text{GCD} > 1$
  * Bitwise AND/OR window constraints

### 11. Monotonic Decreasing Pointers
* **Mechanism:** Maintain a pointer `h` that decreases at most $N$ times across the whole execution, yielding $O(N)$ amortized runtime despite nested logic.
* **Use Cases:**
  * Kasai’s algorithm for LCP array construction
  * Advanced string processing on Suffix Arrays

---

## Quick Reference Decision Matrix

| Problem Indicator | Recommended Pattern |
| :--- | :--- |
| Sorted array, looking for target pair/triplet | Convergence (Pattern 1 / 7) |
| Subarray / Substring with optimal length subject to condition | Sliding Window (Pattern 2) |
| Exact length $K$ subarray optimization | Fixed Window (Pattern 3) |
| Two sorted arrays needing comparison | Parallel Pointers (Pattern 5) |
| Cycle / Repeat detection in sequences | Fast & Slow Pointers (Pattern 6) |
| Max / Min within sliding range | Monotonic Deque (Pattern 8) |
| Range queries without updates (Offline) | Mo's Algorithm (Pattern 9) |