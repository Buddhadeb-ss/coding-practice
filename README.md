# 🚀 Coding Practice & Problem Solving

[![Sync Status](https://img.shields.io/badge/Sync-Automated%20via%20CP%20Sync-238636?style=for-the-badge&logo=github)](https://github.com/Buddhadeb-ss/coding-practice)
[![Languages](https://img.shields.io/badge/Primary%20Language-C%20%7C%20C%2B%2B-blue?style=for-the-badge&logo=c)](https://github.com/Buddhadeb-ss/coding-practice)
[![Platforms](https://img.shields.io/badge/Platforms-CodeChef%20%7C%20LeetCode%20%7C%20VJudge-orange?style=for-the-badge)](https://github.com/Buddhadeb-ss/coding-practice)

A centralized repository containing verified and accepted competitive programming and Data Structures & Algorithms (DSA) solutions. Submissions are automatically synchronized from online judges directly to this repository upon receiving an **Accepted** verdict.

---

## 📂 Repository Architecture

Solutions are structured cleanly by platform and categorized either by programming language or problem difficulty:

```text
coding-practice/
├── CodeChef/                       # CodeChef solutions (organized by language)
│   ├── README.md                   # Platform documentation & conventions
│   ├── C/                          # C solutions (.c)
│   ├── Cpp/                        # C++ solutions (.cpp)
│   ├── Python/                     # Python solutions (.py)
│   └── Java/                       # Java solutions (.java)
│
├── leetcode/                       # LeetCode solutions (organized by difficulty)
│   ├── Easy/                       # Easy problem solutions
│   ├── Medium/                     # Medium problem solutions
│   └── Hard/                       # Hard problem solutions
│
└── vjudge/                         # Virtual Judge solutions (organized by problem set)
    └── <Contest-or-Problem>/       # Individual problem submissions
```

---

## 📊 Synchronized Solutions Overview

### 🏆 CodeChef
| Problem Code | Problem Title | Language | Solution Path |
| :--- | :--- | :---: | :--- |
| `CWC23QUALIF` | Cricket World Cup Qualifier | C | [`CodeChef/C/CWC23QUALIF.c`](CodeChef/C/CWC23QUALIF.c) |
| `MOBKUN` | Mob! | C | [`CodeChef/C/MOBKUN.c`](CodeChef/C/MOBKUN.c) |
| `PAJAPONG` | Ping Paja Pong | C | [`CodeChef/C/PAJAPONG.c`](CodeChef/C/PAJAPONG.c) |

### 💡 LeetCode
| Problem Name | Difficulty | Language | Solution Path |
| :--- | :---: | :---: | :--- |
| `1. Two Sum` | Easy | C | [`leetcode/Easy/two-sum.c`](leetcode/Easy/two-sum.c) |
| `9. Palindrome Number` | Easy | C | [`leetcode/Easy/palindrome-number.c`](leetcode/Easy/palindrome-number.c) |
| `26. Remove Duplicates from Sorted Array` | Easy | C | [`leetcode/Easy/remove-duplicates-from-sorted-array.c`](leetcode/Easy/remove-duplicates-from-sorted-array.c) |
| `203. Remove Linked List Elements` | Easy | C | [`leetcode/Easy/remove-linked-list-elements.c`](leetcode/Easy/remove-linked-list-elements.c) |

### 🌐 Virtual Judge (VJudge)
| Submission ID | Problem / Contest | Language | Solution Path |
| :--- | :--- | :---: | :--- |
| `72663972` | Group Assignment (CodeChef GROUPASSGN) | C | [`vjudge/Group-Assignment---CodeChef-GROUPASSGN---Virtual-Judge/72663972.c`](vjudge/Group-Assignment---CodeChef-GROUPASSGN---Virtual-Judge/72663972.c) |
| `72808987` | Ping Paja Pong (CodeChef PAJAPONG) | C | [`vjudge/Ping-Paja-Pong---CodeChef-PAJAPONG---Virtual-Judge/72808987.c`](vjudge/Ping-Paja-Pong---CodeChef-PAJAPONG---Virtual-Judge/72808987.c) |
| `72531381` | Ratio By 2 (CodeChef RATIO2) | C | [`vjudge/Ratio-By-2---CodeChef-RATIO2---Virtual-Judge/72531381.c`](vjudge/Ratio-By-2---CodeChef-RATIO2---Virtual-Judge/72531381.c) |
| `73412068` | Schrodinger Smiley (CodeChef SMILEY) | C | [`vjudge/Schrodinger-Smiley---CodeChef-SMILEY---Virtual-Judge/73412068.c`](vjudge/Schrodinger-Smiley---CodeChef-SMILEY---Virtual-Judge/73412068.c) |

---

## ⚡ Automated Sync Workflow

All submissions are captured and pushed via the **CP Sync** extension:

1. **Submission & Verdict Detection**: When a solution is submitted on CodeChef, LeetCode, or VJudge, the extension monitors the judgment result.
2. **Accepted Verification**: Once verified as **Accepted** (or 100% test cases passed), the submission is triggered for synchronization.
3. **Metadata Enrichment**: Original source code is extracted along with problem metadata (Problem Code, Problem Name, Platform, Problem URL, Submission ID/URL, and Timestamp).
4. **Language-Aware Commenting**: Appropriate header comment syntax is dynamically applied (`//` for C/C++/Java, `#` for Python/Shell, `--` for SQL).
5. **Git Commit & Push**: Changes are committed directly to branch `main` with clear, descriptive commit messages.
6. **Smart Deduplication**: Identical code resubmissions are skipped to keep git history clean, while modified/optimized solutions update the file.

---

## 📝 Solution Header Format

Every synchronized file begins with a standardized comment header block:

```c
// Problem: Number Mirror
// Problem Code: START01
// Platform: CodeChef
// Language: C
// Verdict: Accepted
// Problem URL: https://www.codechef.com/problems/START01
// Submission ID: 12345678
// Submission URL: https://www.codechef.com/viewsolution/12345678
// Solved on: 2026-10-26T14:55:00.000Z
```

---

## 🛠️ Tech Stack & Conventions

- **Primary Languages**: C (C99 / C11), C++ (C++17 / C++20), Python 3
- **Focus Areas**: Memory management, Pointer arithmetic, Core Data Structures (Arrays, Linked Lists, Stacks, Queues, Trees), Algorithms
- **Branch**: `main`
- **Target Repository**: [Buddhadeb-ss/coding-practice](https://github.com/Buddhadeb-ss/coding-practice)
