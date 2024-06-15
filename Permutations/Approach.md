# Approach

- Even numbers all differ by 2 and so do odd number.
- So we can print all even numbers and then all odd numbers, this will ensure the invariant.
- We only need to consider the boundary between the odd and even numbers
  - For n = 4, if we start with odd numbers we would have `1 3 2 4 5`, which would be wrong, so start with even numbers.
