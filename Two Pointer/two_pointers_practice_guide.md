# Two Pointers & Sliding Window Practice Guide

This document contains C++ implementations for all 11 Two Pointer and Sliding Window patterns, along with hand-picked LeetCode and Codeforces practice problems with difficulty ratings.

---

## 1. Convergence Pattern (Opposite Ends)

### Code Implementation
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Find two indices whose elements sum to target in a sorted array
pair<int, int> twoSumSorted(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int current_sum = arr[left] + arr[right];
        if (current_sum == target) return {left, right};
        else if (current_sum < target) left++;
        else right--;
    }
    return {-1, -1};
}
```

### Practice Problems
* **LeetCode 167:** Two Sum II - Input Array Is Sorted (Easy)
* **LeetCode 11:** Container With Most Water (Medium)
* **LeetCode 15:** 3Sum (Medium)
* **Codeforces 600B:** Queries about less or equal elements (Rating: 1100)
* **Codeforces 279B:** Books (Rating: 1400)

---

## 2. Sliding Window (Variable Size)

### Code Implementation
```cpp
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Longest Substring Without Repeating Characters
int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> freq;
    int left = 0, max_len = 0;

    for (int right = 0; right < s.length(); ++right) {
        freq[s[right]]++;

        // Shrink window while invalid (duplicate exists)
        while (freq[s[right]] > 1) {
            freq[s[left]]--;
            left++;
        }

        max_len = max(max_len, right - left + 1);
    }
    return max_len;
}
```

### Practice Problems
* **LeetCode 3:** Longest Substring Without Repeating Characters (Medium)
* **LeetCode 209:** Minimum Size Subarray Sum (Medium)
* **LeetCode 1004:** Max Consecutive Ones III (Medium)
* **Codeforces 580B:** Kefa and Company (Rating: 1300)
* **Codeforces 601A:** Approximating a Constant Range (Rating: 1500)

---

## 3. Fixed-Size Sliding Window

### Code Implementation
```cpp
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// Maximum Sum Subarray of size K
long long maxSubarraySumK(const vector<int>& arr, int k) {
    int n = arr.size();
    if (n < k) return -1;

    long long current_sum = 0;
    for (int i = 0; i < k; ++i) current_sum += arr[i];

    long long max_sum = current_sum;
    for (int i = k; i < n; ++i) {
        current_sum += arr[i] - arr[i - k]; // Slide window: add right, remove left
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}
```

### Practice Problems
* **LeetCode 643:** Maximum Average Subarray I (Easy)
* **LeetCode 438:** Find All Anagrams in a String (Medium)
* **LeetCode 1456:** Maximum Number of Vowels in a Substring of Given Length (Medium)
* **Codeforces 363B:** Fence (Rating: 1100)

---

## 4. Partition Pattern (Two-Way / Three-Way)

### Code Implementation
```cpp
#include <iostream>
#include <vector>

using namespace std;

// Dutch National Flag Problem (Sort 0s, 1s, and 2s in-place)
void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low++], nums[mid++]);
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high--]);
        }
    }
}
```

### Practice Problems
* **LeetCode 75:** Sort Colors (Medium)
* **LeetCode 283:** Move Zeroes (Easy)
* **LeetCode 905:** Sort Array By Parity (Easy)
* **Codeforces 466C:** Number of Ways (Rating: 1700)

---

## 5. Two Arrays / Parallel Pointers

### Code Implementation
```cpp
#include <iostream>
#include <vector>

using namespace std;

// Merge Two Sorted Arrays into a Third Sorted Array
vector<int> mergeSortedArrays(const vector<int>& A, const vector<int>& B) {
    int i = 0, j = 0;
    vector<int> res;
    while (i < A.size() && j < B.size()) {
        if (A[i] <= B[j]) res.push_back(A[i++]);
        else res.push_back(B[j++]);
    }
    while (i < A.size()) res.push_back(A[i++]);
    while (j < B.size()) res.push_back(B[j++]);
    return res;
}
```

### Practice Problems
* **LeetCode 88:** Merge Sorted Array (Easy)
* **LeetCode 349:** Intersection of Two Arrays (Easy)
* **Codeforces 489B:** BerSU Ball (Rating: 1200)
* **Codeforces 381A:** Sereja and Dima (Rating: 800)

---

## 6. Fast & Slow Pointers (Tortoise and Hare)

### Code Implementation
```cpp
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Cycle Detection in Linked List
bool hasCycle(ListNode* head) {
    if (!head || !head->next) return false;
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}
```

### Practice Problems
* **LeetCode 141:** Linked List Cycle (Easy)
* **LeetCode 142:** Linked List Cycle II (Medium)
* **LeetCode 287:** Find the Duplicate Number (Medium)
* **LeetCode 202:** Happy Number (Easy)

---

## 7. Multi-Pointer Composition

### Code Implementation
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 3Sum: Find all unique triplets that sum to 0
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    int n = nums.size();

    for (int i = 0; i < n - 2; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates
        int left = i + 1, right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) {
                res.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
                left++; right--;
            } else if (sum < 0) left++;
            else right--;
        }
    }
    return res;
}
```

### Practice Problems
* **LeetCode 15:** 3Sum (Medium)
* **LeetCode 18:** 4Sum (Medium)
* **LeetCode 16:** 3Sum Closest (Medium)

---

## 8. Monotonic Queue / Deque Sliding Window

### Code Implementation
```cpp
#include <iostream>
#include <vector>
#include <deque>

using namespace std;

// Sliding Window Maximum in O(N) amortized time
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq; // Stores indices of elements in decreasing order
    vector<int> res;

    for (int i = 0; i < nums.size(); ++i) {
        // Remove indices out of range of current window
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }

        // Maintain monotonic decreasing deque
        while (!dq.empty() && nums[dq.back()] <= nums[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        if (i >= k - 1) {
            res.push_back(nums[dq.front()]);
        }
    }
    return res;
}
```

### Practice Problems
* **LeetCode 239:** Sliding Window Maximum (Hard)
* **LeetCode 1438:** Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit (Medium)
* **Codeforces 940E:** Cashback (Rating: 1700)

---

## 9. Mo's Algorithm (Offline Range Queries)

### Code Implementation
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int BLOCK_SIZE;

struct Query {
    int id, l, r;
    bool operator<(const Query& other) const {
        int b1 = l / BLOCK_SIZE;
        int b2 = other.l / BLOCK_SIZE;
        if (b1 != b2) return b1 < b2;
        return (b1 & 1) ? (r < other.r) : (r > other.r); // Hilbert curve optimization
    }
};

void add(int idx, int& current_ans) { /* Add element to state */ }
void remove(int idx, int& current_ans) { /* Remove element from state */ }

void solveMo(vector<int>& arr, vector<Query>& queries) {
    BLOCK_SIZE = sqrt(arr.size());
    sort(queries.begin(), queries.end());

    int cur_l = 0, cur_r = -1;
    int current_ans = 0;
    vector<int> answers(queries.size());

    for (const auto& q : queries) {
        while (cur_l > q.l) add(--cur_l, current_ans);
        while (cur_r < q.r) add(++cur_r, current_ans);
        while (cur_l < q.l) remove(cur_l++, current_ans);
        while (cur_r > q.r) remove(cur_r--, current_ans);
        answers[q.id] = current_ans;
    }
}
```

### Practice Problems
* **Codeforces 86D:** Powerful array (Rating: 1900)
* **Codeforces 617E:** XOR and Favorite Number (Rating: 1900)
* **Codeforces 220B:** Little Elephant and Array (Rating: 1900)

---

## 10. Queue via Two Stacks (Amortized State Window)

### Code Implementation
```cpp
#include <iostream>
#include <stack>
#include <numeric>

using namespace std;

// Queue supporting O(1) amortized Range GCD queries over a sliding window
struct GCDStack {
    stack<pair<int, int>> st; // {val, current_gcd}

    void push(int x) {
        int g = st.empty() ? x : std::gcd(st.top().second, x);
        st.push({x, g});
    }

    int pop() {
        int x = st.top().first;
        st.pop();
        return x;
    }

    int getGCD() const {
        return st.empty() ? 0 : st.top().second;
    }

    bool empty() const { return st.empty(); }
};

struct GCDQueue {
    GCDStack s1, s2;

    void push(int x) { s1.push(x); }

    void pop() {
        if (s2.empty()) {
            while (!s1.empty()) s2.push(s1.pop());
        }
        s2.pop();
    }

    int getGCD() const {
        return std::gcd(s1.getGCD(), s2.getGCD());
    }
};
```

### Practice Problems
* **Codeforces 1107E:** Vasya and Binary String (Rating: 2000)
* **LeetCode 1838:** Frequency of the Most Frequent Element (Medium)

---

## 11. Monotonic Decreasing Pointer (Kasai's Algorithm)

### Code Implementation
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Kasai's algorithm to compute Longest Common Prefix (LCP) array in O(N)
vector<int> buildLCP(const string& s, const vector<int>& sa) {
    int n = s.length();
    vector<int> rank(n, 0), lcp(n - 1, 0);

    for (int i = 0; i < n; ++i) rank[sa[i]] = i;

    int h = 0; // Pointer h decreases at most N times across entire execution
    for (int i = 0; i < n; ++i) {
        if (rank[i] > 0) {
            int j = sa[rank[i] - 1];
            while (i + h < n && j + h < n && s[i + h] == s[j + h]) h++;
            lcp[rank[i] - 1] = h;
            if (h > 0) h--; // Amortized O(N) bound
        }
    }
    return lcp;
}
```

### Practice Problems
* **LeetCode 1044:** Longest Duplicate Substring (Hard)
* **Codeforces 802I:** Fake News (hard) (Rating: 2000)