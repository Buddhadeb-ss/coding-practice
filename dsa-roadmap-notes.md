# DSA Roadmap — Embedded Systems Track

**Why:** Interviews (even embedded/hardware roles like Qualcomm) often run standard DSA rounds. Scope kept lean — no need for FAANG-level grind.

**Source:** NeetCode 150 (neetcode.io) — filter to topics below only
**Language:** C (reinforces primary firmware language, not Python)
**Pace:** 3-4 problems/week, done properly — not rushed. 2 weekday sessions (30-45 min) + 1 weekend session (1 hr, revisit an old problem).

## Roadmap (in order)

| Order | Topic | Why | ~Problems |
|---|---|---|---|
| 1 | Arrays & Hashing | Foundation for everything else | 8-10 |
| 2 | Two Pointers | Common pattern, fast to learn | 5 |
| 3 | Sliding Window | Builds on two pointers | 5 |
| 4 | Stack | Relevant to embedded (buffers, call stacks) | 5 |
| 5 | Binary Search | Core algorithmic thinking | 5 |
| 6 | Linked List | Useful for firmware (memory pools, ring buffers, queues) | 6 |
| 7 | Trees (traversal only) | BFS/DFS — stop once solid, skip advanced tree problems | 6-8 |
| 8 | Bit Manipulation | Doubles as embedded skill — do last, pairs well with HAL/register work | 5 |

**Total:** ~45-50 problems

## Rules for myself
- Don't move to next topic until Easy problems in current topic are solved without hints
- Revisit struggled problems after ~1 week (spaced repetition)
- Understand *why* the solution works — should be able to explain it out loud, redo cold later
- Firmware work (MCU1 ladder) stays primary — DSA fits in smaller consistent slots, doesn't compete for main energy

## Explicitly skipping (unless a specific company's process demands it)
Tries, Backtracking, Heap/Priority Queue, Graphs, Advanced Graphs, 1-D & 2-D DP, Greedy, Intervals, Math & Geometry

*These are for general SWE/competitive prep — not high-value for embedded roles. Revisit only if targeting a company known to run heavier DSA regardless of role.*
