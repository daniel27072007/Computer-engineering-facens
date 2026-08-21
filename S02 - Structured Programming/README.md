# ⚙️ S02 - Structured Programming

This module explores standard software engineering design principles, focusing on modular architecture, computational decomposition, functional isolation, and low-level physical memory management.

---

## Technical Learnings and Implemented Solutions

### 1. Functional Decomposition & Recursive Processing
* **Decoupled System Routines:** Transitioned monolithic software setups into isolated, single-responsibility functions (subroutines) to handle atomic algorithmic operations (such as parity checks and value comparisons).
* **Self-Invoking Execution Stacks:** Programmed mathematical processing methods using recursion parameters to calculate factorials (`fatorial`), alongside loop-driven calculation pipelines for powers and exponential logic.

### 2. Runtime Heap Allocation & Pointer Safeguards
* **Dynamic Array Instantiation:** Bypassed compilation-time stack sizing constraints by routing system inputs directly into memory heap spaces via standard `malloc()` operations.
* **Defensive Resource Mitigation:** Integrated strict check layers (`vetor == NULL`) to catch potential memory exhaustion faults before code execution, paired with manual garbage collection routines via `free()` to completely eliminate memory leaks.

---

## Architecture Blueprint: Dynamic Memory Instantiation

The snippet below showcases the manual heap allocation, defensive boundary check, and safe resource release cycle implemented within this module:

```c
// Direct runtime tracking code chunk implemented in this module
vetor = (float *) malloc(n * sizeof(float));

if (vetor == NULL) {
    printf("\nerror: memoria cheia");
    return 1; // Terminates execution to protect system environment stability
}

// Data grid processing happens here...

free(vetor); // Explicit garbage collection routine to release memory allocation
```

---

## Folder Content Manifest

* **`Class_01`:** Functional modularization scripts, recursive factorials, and mathematical power routines.
* **`lista ponteiros`:** Low-level pointer manipulation sheets demonstrating direct hardware addressing and dynamic array scaling.