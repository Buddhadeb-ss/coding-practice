# 🚀 Coding Practice & Problem Solving

[![Sync Status](https://img.shields.io/badge/Sync-Automated%20via%20CP%20Sync-238636?style=for-the-badge&logo=github)](https://github.com/Buddhadeb-ss/coding-practice)
[![Languages](https://img.shields.io/badge/Primary%20Language-C%20%7C%20C%2B%2B-blue?style=for-the-badge&logo=c)](https://github.com/Buddhadeb-ss/coding-practice)
[![Platforms](https://img.shields.io/badge/Platforms-CodeChef%20%7C%20LeetCode%20%7C%20VJudge-orange?style=for-the-badge)](https://github.com/Buddhadeb-ss/coding-practice)

A centralized repository containing verified and accepted competitive programming and Data Structures & Algorithms (DSA) solutions. Submissions from online judges are automatically synchronized directly into this repository upon receiving an **Accepted** verdict.

---

## 📂 Repository Architecture

Solutions are automatically organized by platform into consistent directory hierarchies:

```text
coding-practice/
├── CodeChef/                       # CodeChef solutions (categorized by language)
│   ├── README.md                   # Platform overview & conventions
│   ├── C/                          # C solutions (.c)
│   ├── Cpp/                        # C++ solutions (.cpp)
│   ├── Python/                     # Python solutions (.py)
│   └── Java/                       # Java solutions (.java)
│
├── leetcode/                       # LeetCode solutions (categorized by difficulty)
│   ├── Easy/                       # Easy problem solutions
│   ├── Medium/                     # Medium problem solutions
│   └── Hard/                       # Hard problem solutions
│
└── vjudge/                         # Virtual Judge solutions (categorized by contest/problem set)
    └── <Contest-or-Problem>/       # Individual problem submissions
```

---

## 🌐 Supported Platforms

- **[CodeChef](https://www.codechef.com/)**: Solutions grouped by programming language (`C/`, `Cpp/`, `Python/`, `Java/`). Files use the format `<ProblemCode>.<ext>` or `<ProblemCode> - <ProblemName>.<ext>`.
- **[LeetCode](https://leetcode.com/)**: Solutions categorized by difficulty level (`Easy/`, `Medium/`, `Hard/`).
- **[Virtual Judge (VJudge)](https://vjudge.net/)**: Multi-judge contest and problem submissions grouped by contest or problem title.

---

## ⚡ Automated Sync Workflow

Submissions are captured and pushed via the **CP Sync** extension:

1. **Submission & Verdict Detection**: Monitors online judge submissions in real time.
2. **Accepted Verification**: Sync triggers automatically once the submission passes all test cases with an **Accepted** verdict (or 100% score).
3. **Metadata Enrichment**: Original source code is captured along with full submission metadata (Problem Code, Title, Language, Platform, Problem URL, Submission ID/URL, and Timestamp).
4. **Language-Aware Commenting**: Dynamically applies native comment syntax (`//` for C/C++/Java, `#` for Python/Shell, `--` for SQL).
5. **Git Commit & Push**: Files are committed directly to branch `main` via the GitHub API with clear, descriptive commit messages.
6. **Smart Deduplication**: Identical code resubmissions are skipped to avoid repository noise, while modified or optimized solutions update existing files.

---

## 📝 Solution Header Format

Every synchronized file includes a standardized comment header block:

```c
// Problem: <Problem Title>
// Problem Code: <Problem Code>
// Platform: <Platform>
// Language: <Language>
// Verdict: Accepted
// Problem URL: <Problem Link>
// Submission ID: <Submission ID>
// Submission URL: <Submission Link>
// Solved on: <Timestamp>
```

---

## 🛠️ Tech Stack & Conventions

- **Primary Languages**: C (C99 / C11), C++ (C++17 / C++20), Python 3
- **Focus Areas**: Memory management, Pointer manipulation, Core Data Structures, Algorithm design & optimization
- **Branch**: `main`
- **Target Repository**: [Buddhadeb-ss/coding-practice](https://github.com/Buddhadeb-ss/coding-practice)
