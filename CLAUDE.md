# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Build & Run

```bash
g++ test.cpp -o test && ./test
```

Input an integer; the program outputs "奇数" (odd) or "偶数" (even) in Chinese.

## Project Structure

- `test.cpp` — single-file CLI program that reads an integer from stdin and prints odd/even judgment in Chinese
- `docs/` — project documentation (PRD.md, newquest.md)
- `.claude/settings.local.json` — local Claude Code permission rules (e.g., allowing git operations)

## Git

- Branch: `main`
- Remote: `origin` → github.com/lhjlife-sys/auto-workflow-test
- Commit style: concise, descriptive messages
