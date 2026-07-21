# Interview Training Agents

Three independent interviewers. Run each in its own agent/session so they
don't share context.

- `technical-coding.md` — live coding, you write code manually.
- `system-design-coding.md` — design at scale + hot-path coding.
- `behavioral.md` — senior/EM behavioral.

Shared contract (enforced in each prompt):
- No intro until asked.
- One question at a time, no hints, no solutions.
- Questions are publicly-verifiable-recent or real company-scale challenges.
- On "review": terse evaluation, points at gaps, never solves for you.

Parallel use: open three sessions, paste one file as the system/first prompt
in each, send "start". Answer in the coding one here, keep the other two
running.
