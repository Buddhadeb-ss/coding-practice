# C++ Notes — For Someone Who Already Knows C
### Scope: just enough C++ to solve DSA problems on LeetCode/NeetCode. No OOP, no templates, no classes.

---

## 1. I/O — `cin` / `cout` instead of `printf` / `scanf`

```cpp
#include <iostream>
using namespace std;

int x = 5;
cout << "value: " << x << endl;   // like printf, but chained with <<
cin >> x;                          // like scanf, but no format string needed
```

`endl` = newline (like `\n`, but also flushes output — `\n` alone works fine too).

You mostly won't even need this for LeetCode — most problems give you a function signature to fill in, not a full program with input/output.

---

## 2. No `main()` needed for most problems

LeetCode/NeetCode give you a function stub like:
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // your code here
    }
};
```
Ignore the `class Solution` / `public:` wrapper — that's boilerplate the platform needs. You just fill in the function body like you would in C.

---

## 3. `vector` — dynamic array (replaces manual malloc/realloc)

```cpp
#include <vector>

vector<int> arr;              // empty, grows automatically
arr.push_back(10);            // append — no manual resizing needed
arr.push_back(20);

arr[0];                       // access like a normal C array
arr.size();                   // like tracking length yourself, but built-in

vector<int> nums = {1, 2, 3}; // initialize with values directly
vector<int> nums2(5, 0);      // 5 elements, all set to 0 — like calloc(5, sizeof(int))

for (int i = 0; i < arr.size(); i++) { }   // normal loop works fine
for (int val : arr) { }                     // range-based loop (like foreach)
```

**Mental model:** it's a C array that resizes itself and remembers its own length. That's it.

---

## 4. `unordered_map` — hash map (you had none of this built-in in C)

```cpp
#include <unordered_map>

unordered_map<int, int> seen;

seen[5] = 1;                     // insert or update key 5
seen[5]++;                       // increment value at key 5

if (seen.count(5)) { }           // check if key exists (returns 0 or 1)
if (seen.find(5) != seen.end()) { }  // alternate existence check

seen.erase(5);                   // remove key

for (auto& [key, value] : seen) { }  // iterate all pairs
```

**Why this matters:** this single container replaces a huge amount of manual hash table code (hashing function, collision handling, buckets) you'd otherwise write from scratch in C. This shows up constantly in DSA problems (e.g. "have I seen this number before?").

---

## 5. `unordered_set` — hash set (just keys, no values)

```cpp
#include <unordered_set>

unordered_set<int> s;
s.insert(5);
s.count(5);      // 1 if present, 0 if not
s.erase(5);
```

Use this when you just need "have I seen this before?" without needing to store a value.

---

## 6. `string` — mutable, no manual null-terminator management

```cpp
#include <string>

string s = "hello";
s += " world";        // concatenation — no strcat, no buffer size worries
s.length();            // or s.size() — same thing
s[0];                   // index like a char array
s.substr(1, 3);         // substring starting at index 1, length 3
```

No more worrying about buffer overflows or `\0` placement — it's handled for you.

---

## 7. `auto` — type inference

```cpp
auto x = 5;                    // compiler infers int
for (auto& val : nums) { }     // don't need to spell out vector<int>::iterator etc.
auto it = seen.find(5);        // useful when the real type name is long/annoying
```

Use it freely in loops and when the type is obvious from context.

---

## 8. References (`&`) — cleaner than pointers for passing by reference

In C, to modify a variable inside a function, you pass a pointer:
```c
void modify(int *x) { *x = 10; }
modify(&num);
```

In C++, a reference does the same thing without the pointer syntax:
```cpp
void modify(int &x) { x = 10; }
modify(num);   // no & needed at call site
```

**Where you'll actually see this:** function signatures like
```cpp
int solve(vector<int>& nums) {   // & avoids copying the entire vector every call
    // logic
}
```
This is just for efficiency (avoids copying large data structures) — treat `&` in a parameter as "this is the real thing, not a copy," similar to passing a pointer in C but without needing `*` everywhere inside the function.

---

## What NOT to worry about (skip for now)

- Classes, constructors, inheritance, polymorphism
- Templates
- Operator overloading
- Smart pointers (`unique_ptr`, `shared_ptr`)
- `namespace` details beyond `using namespace std;`

None of this is needed for solving Arrays/Hashing → Bit Manipulation style problems. Revisit only if a specific job/course requires it later.

---

## Quick cheat-sheet: C → C++ swaps for DSA

| C thing | C++ replacement |
|---|---|
| `malloc`/`realloc` array | `vector<int> v;` |
| Manual hash table | `unordered_map<key,val>` |
| Manual set via array/bool flags | `unordered_set<int>` |
| `char[]` + manual null terminator | `string` |
| `printf`/`scanf` | `cout`/`cin` (rarely needed on LeetCode) |
| `int *x` param to modify caller's var | `int &x` param |
