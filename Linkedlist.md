Linked List Patterns Handbook
A complete guide to every major Linked List pattern used in:

Competitive Programming
LeetCode
Codeforces
Placement Interviews
FAANG Interviews
Table of Contents
Basic Traversal Pattern
Two Pointer Pattern
Fast & Slow Pointer Pattern
Three Pointer Pattern
Four Pointer Pattern
Dummy Node Pattern
Head Manipulation Pattern
Reversal Pattern
Reverse K Group Pattern
Merge Pattern
Split Pattern
Cycle Detection Pattern
Cycle Entry Pattern
Intersection Pattern
Palindrome Pattern
Hashing Pattern
Circular Linked List Pattern
Recursive Linked List Pattern
Linked List + Heap Pattern
Hybrid Patterns
LeetCode Mapping
Codeforces Mapping
Interview Mapping
Preparation Roadmap
1. Basic Traversal Pattern
The most fundamental pattern.

ListNode* curr = head;

while(curr){
    curr = curr->next;
}
Used for:

Count nodes
Search element
Print list
Find maximum/minimum
Complexity:

Time  : O(n)
Space : O(1)
2. Two Pointer Pattern
Two pointers moving at the same speed.

first = head;
second = head;
Usually:

Move first k steps ahead.

Then move both together.
Used for:

Kth node from end
Remove Nth node from end
Distance-based problems
Visual:

1 -> 2 -> 3 -> 4 -> 5

first ---->
second ->
3. Fast & Slow Pointer Pattern
Also called:

Floyd's Technique
Tortoise and Hare
slow = head;
fast = head;

while(fast && fast->next){
    slow = slow->next;
    fast = fast->next->next;
}
Used for:

Find middle node
Cycle detection
Cycle entry
Palindrome preparation
Split list into halves
Visual:

slow -> 1 step
fast -> 2 steps
4. Three Pointer Pattern
Most used pattern in Linked Lists.

prev
curr
next
Example:

prev = nullptr;
curr = head;

while(curr){
    next = curr->next;

    curr->next = prev;

    prev = curr;
    curr = next;
}
Used for:

Reverse linked list
Reverse partial list
Reverse alternate nodes
5. Four Pointer Pattern
Used when relationships between many nodes must be maintained.

Example:

prev
first
second
next
Used for:

Swap nodes
Reorder list
Complex pointer manipulation
6. Dummy Node Pattern
Create a virtual node before head.

ListNode dummy(0);
dummy.next = head;
Advantages:

Simplifies edge cases
Handles head deletion
Handles head insertion
Used in:

Remove node
Merge lists
Partition list
Swap pairs
7. Head Manipulation Pattern
Head pointer changes frequently.

Example:

newNode->next = head;
head = newNode;
Used in:

Insertion at beginning
Stack implementation
Building reversed lists
8. Reversal Pattern
Core Linked List Pattern.

prev
curr
next
Operations:

Reverse whole list
Reverse half list
Reverse range
Reverse alternate nodes
Complexity

Time  : O(n)
Space : O(1)
9. Reverse K Group Pattern
Reverse nodes in blocks.

Example:

1 2 3 4 5 6

k = 3

3 2 1 6 5 4
Used in:

Advanced interview questions
Segment reversal
LeetCode:

25
10. Merge Pattern
Two sorted lists.

while(l1 && l2)
Visual:

1->3->5
2->4->6

↓

1->2->3->4->5->6
Used for:

Merge two lists
Merge K lists
Merge sort
11. Split Pattern
Break list into parts.

Usually:

Find middle

Cut connection
mid->next = nullptr;
Used in:

Merge sort
Reorder list
Palindrome
12. Cycle Detection Pattern
Detect loop.

slow += 1
fast += 2
Condition:

if(slow == fast)
Used for:

Loop detection
Circular structures
13. Cycle Entry Pattern
Find where cycle starts.

After meeting:

ptr = head

while(ptr != slow){
    ptr = ptr->next;
    slow = slow->next;
}
Used in:

Floyd Cycle II
14. Intersection Pattern
Two linked lists merge at a node.

Technique:

A = A->next
B = B->next

If NULL:
switch heads
Used for:

Finding intersection point
Complexity:

Time  : O(n+m)
Space : O(1)
15. Palindrome Pattern
Combination Pattern.

Steps:

Find Middle
       ↓
Reverse Second Half
       ↓
Compare
Patterns involved:

Fast Slow
Reverse
Two Pointer
16. Hashing Pattern
Use map/set.

unordered_set<ListNode*> visited;
Used for:

Detec* cycle
Duplicate removal
Rando* pointer problems
Complexity

Time  : O(n)
Space : O(n)
*---

17. Circular Linked List Pa*tern
Special attention to:

curr->next != head
Used in*

Josephus Problem
Round*Robin Scheduling
Common in CP*

18. Recursive Linked List*Pattern
Operations solved recursi*ely.

Examples:

*``cpp reverse() merge()


Patte*n*

```cpp
solve(node->next)
*sed in:

Reverse list recursivel**- Recursive merge
19. Link*d List + Heap Pattern
Combined wi*h Priority Queue.

Used for:

Me*ge K Sorted Lists
priority*queue
Complexity:

O(* log K)
20. Hybrid Pat*erns
Real interview questions oft*n combine patterns.

Find Palin*rome
Fast Slow
    +
Reve*se
    +
Compare
*# Reorder List

Find Middl*
      +
Reverse
      +
Merge
```*
---

## Reverse*K Group

```text
Traversal
      +*K Count
      +
Reverse
*# Merge Sort List

Fast*Slow
      +
Split
      +
Merge
`*`

---

# *1. LeetCode Pattern Mapping

## Tr*versal

- 203 Remove Linked List E*ements

---

## Fast & Slow

- 876*Middle of Linked List
* 141 Linked List Cycle
- 142 Linke* List Cycle II

---

## Reversal

* 206 Reverse Linked List
- 92 Reve*se Linked List II
- 25 Reverse Nod*s in K Group

---

## Two Pointer
*- 19 Remove Nth Node From End

---*
## Merge Pattern

- 21 Merge Two *orted Lists
- 23 Merge K Sorted Li*ts

---

## Palindrome Pattern

- *34 Palindrome Linked List

---

##*Intersection Pattern

- 160 Inters*ction of Two Linked Lists

---

##*Reorder Pattern

- 143 Reorder Lis*

---

## Heap Pattern

- 23 Merge*K Sorted Lists

---

# 22. Codefor*es Mapping

Linked Lists are less *ommon than arrays.

Most common pa*terns:

## 800-1200

- Simulation
* Traversal

---

## 1200-1500

- T*o Pointer
- Fast Slow

---

## 150*-1800

- Reversal
- Split*and Merge

---

## 1800+

* Custom Linked Structures*- XOR Linked Lists
- Circular List**- List + DSU combinations

---

# *3. Interview Mapping

Most Asked P*tterns:

### Tier 1

- Traversal
-*Reversal
- Merge

*--

### Tier 2

- Fast Slow
- Pali*drome
- Remove Nth

---

### Tier*3

- Reorder List
- Reverse K Grou*
- Merge K Lists

---

### FAANG F*vorites

- *06 Reverse Linked List
- 21 Merge *wo Sorted Lists
- 141 Linked List *ycle
- 142 Linked List Cycle II
- *9 Remove Nth*Node
- 143 Reorder List
- 23*Merge K Lists
- 25 Reverse K Group*
---

# 24. Preparation Roadmap

L*arn Patterns In This Order:

```te*t
Traversal
    ↓
Two*Pointer
    ↓
Fast Slow
    ↓
Thre* Pointer
    ↓
Reverse List
    ↓
*erge Lists
    ↓
Dummy Node
    ↓
*ycle Detection
    ↓
Intersection
*   ↓
Palindrome
    ↓
Reorder List*    ↓
Reverse K Group
    ↓
Merge * Lists
Pattern Recogni*ion Cheat Sheet
Find Midd*e
    → Fast Slow

Detect Cycle
*   → Fast Slow

Find Cycle Entry
 *  → Floyd

Reverse List
    → Thre**Pointer

Delete Head Related Node*    → Dummy Node

Find Nth From En*
    → Two Pointer

Merge Sorted L*sts
    → Merge Pattern

Check Pal*ndrome
    → Fast Slow + Reverse

*eorder List
    → Split + Reverse * Merge

Merge K Lists
    → Heap +*Merge

Reverse K Nodes
    → Rever*e K Group
Master these 10 cor* patterns:

Traversal
Two Po*nter
Fast & Slow Pointer
Thr*e Pointer
Dummy Node
Reversa*
Merge
Split
Cycle Detect*on
Palindrome/Reorder Hybrid
hese alone cover nearly every Linkd List interview problem.