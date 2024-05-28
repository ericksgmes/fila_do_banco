---

# Fila do Banco System Documentation

## Developed by:
Erick Santinon Gomes - SC3039765

## Format:
Input should be in the following format: `(queue_type) (name)`

Where:
- `queue_type` can be:
  - `g` for the general queue
  - `p` for the priority queue
  - `s` for the exit queue
  - `f` to end the input and print all names in the exit queue order
- `name` is the name of the person to be enqueued (only required for `g` and `p` types)

## Usage Example:
```
g Name1
p Name2
s
s
f
```

## Expected Output:
After the final command (`f`), the system outputs the names in the order they exited:
```
Name2
Name1
```

---
