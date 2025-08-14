# **Functions**

***

## **Aim**
To understand and implement the concepts of **call by value** and **call by reference** in C++, using different practical examples such as variable swapping and salary increment calculations.

***

## **Theory**

In C++, when we pass arguments to functions, we can do it in **two main ways**:

### **1. Call by Value**
- **Definition:** A copy of the actual parameters is passed to the function.
- **Behavior:** Changes made inside the function do **not** affect the original variables.
- **Memory:** Function works with a **separate copy** stored in a different memory location.
- **Example Use Case:** When we don’t want the function to modify the original data.
- **In this experiment:** The first swap example and the first `IncreaseByValue` function use call by value.

**Key Points:**
- Formal parameters get the same value as actual parameters, but in different memory locations.
- When the function ends, the copy is destroyed.
- No side effects on the calling function's variables.

***

### **2. Call by Reference**
- **Definition:** Instead of passing a copy, we pass the **address** (or reference) of the actual parameter.
- **Behavior:** Changes made inside the function directly modify the original variables.
- **Memory:** Both the actual and formal parameters refer to the **same memory location**.
- **Example Use Case:** When we want to update original values.
- **In this experiment:** Pointer-based swap and `IncreaseByReference` function use call by reference semantics.

**Key Points:**
- Allows functions to modify variables outside its scope.
- Saves memory because no new copy is created.
- Can be done using:
  - **Pointers** (`int*`)
  - **References** (`int &` — introduced in C++)

***

### **Difference Table:**

| Feature               | Call by Value              | Call by Reference           |
|-----------------------|----------------------------|-----------------------------|
| Data Copy             | Creates a copy             | Uses actual variable        |
| Memory Used           | More (extra copy)          | Less (no copy)              |
| Changes Affect Caller | No                         | Yes                         |
| Safety                | Safer (original preserved) | Can cause unintended changes|

***

### **Concepts Covered in these Experiments**
- **Function parameter passing methods**
- **Pointer de-referencing** (`*ptr`)
- **Reference variables & aliasing**
- **Conditional logic for salary increment**
- **Function reusability**

***

## **Algorithm**

### **Experiment 1 – Swap using Call by Value**
**Aim:** Show that changes in function do not affect caller variables.  
**Algorithm:**
1. Start.
2. Define `swap(int a, int b)`:
   - Store `a` in `temp`.
   - Assign `b` to `a` and `temp` to `b`.
   - Print values inside the function.
3. In `main()`, declare and initialize variables `a` and `b`.
4. Print them before calling the function.
5. Call `swap(a, b)`.
6. Print them after the function call.
7. Stop.

***

### **Experiment 2 – Swap using Pointers (Call by Reference)**
**Algorithm:**
1. Start.
2. Define `swap(int *a, int *b)`:
   - Store `*a` in `temp`.
   - Assign `*b` to `*a` and `temp` to `*b`.
3. In `main()`, declare and initialize variables `a` and `b`.
4. Print them before calling the function.
5. Call `swap(&a, &b)` (pass addresses).
6. Print them after the function call.
7. Stop.

***

### **Experiment 3 – Salary Increment Calculation**
**Algorithm:**
1. Start.
2. Input employee details:
   - ID, years of service, research projects, new projects, profit generated, current salary.
3. Define `IncreaseByValue`:
   - Take salary as a value parameter.
   - Increase by 20%.
4. Define `IncreaseByReference`:
   - Take salary as reference.
   - Increase by 20%.
5. If eligibility conditions are met:
   - Call `IncreaseByValue` and print salary in `main`.
   - Call `IncreaseByReference` and print salary in `main`.
6. If salary < 0, show an error message.
7. Stop.

***

## **Conclusion**
From these experiments, we observed:
- **Call by Value** creates a copy of the variables. Any changes inside the function **do not** reflect outside.
- **Call by Reference** directly works on the original variables, so changes **persist** after the function call.
- Pointer-based reference and reference variables in C++ work differently in syntax but achieve the same outcome.
- Choosing between call by value and call by reference depends on whether you want to **protect original data** or **modify it directly**.
- This understanding is crucial for writing **memory-efficient and bug-free** code in real-world applications.

***
