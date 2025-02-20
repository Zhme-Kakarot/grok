This is outdated. As of 2/20/25 Grok 3 (beta) has been released for free usage and this project is transferred to that.


# Curriculum for Learning Modern C++ Techniques with Programming Assignments

## Week 1: Basics of C++ and Template Metaprogramming
- **Day 1-2: C++ Fundamentals**
  - Review of C++ basics: variables, data types, control structures.
  - Introduction to classes and objects.

- **Day 3-4: Templates**
  - Basic template functions.
  - Template classes.

- **Day 5: Template Metaprogramming**
  - Introduce the concept of compile-time computations.
  - Simple examples like calculating Fibonacci numbers at compile time.

### Programming Assignments:
1. **Basic Template Function**: Write a template function `max` that returns the maximum of two values of type `T`. Test it with `int`, `double`, and `std::string`.
   - Example output: `max(5, 10) = 10`, `max(3.14, 2.71) = 3.14`, `max("apple", "banana") = banana`.
2. **Template Class**: Create a template class `Stack` that supports `push`, `pop`, and `top` operations. Test it with `int` and `char`.
   - Example output: Push 1, 2, 3 onto the stack, then pop and print each element.
3. **Template Metaprogramming**: Write a template to calculate the sum of the first N natural numbers at compile time using `constexpr`. Test with N = 5 and N = 10.
   - Example output: `Sum of first 5 numbers = 15`, `Sum of first 10 numbers = 55`.
4. **Fibonacci at Compile Time**: Implement a template metaprogramming solution to compute the Nth Fibonacci number at compile time. Test with N = 0, 1, 5, and 8.
   - Example output: `Fibonacci(5) = 5`, `Fibonacci(8) = 21`.

---

## Week 2: Lambda Expressions and Standard Library
- **Day 1-2: Lambda Expressions**
  - Syntax and usage of lambda expressions.
  - Capturing variables.

- **Day 3-4: The C++ Standard Library**
  - Focus on `std::vector`, `std::for_each`, `std::algorithm`.

- **Day 5: Combining Lambdas with Algorithms**
  - Use lambdas with `std::for_each` to modify collections.

### Programming Assignments:
1. **Basic Lambda**: Write a lambda function that takes two integers and returns their product. Use it to compute the product of 5 and 7.
   - Example output: `Product of 5 and 7 = 35`.
2. **Lambda with Capture**: Create a vector of integers `{1, 2, 3, 4, 5}`. Use a lambda with capture to sum all elements into a variable outside the lambda. Print the sum.
   - Example output: `Sum = 15`.
3. **Lambda with `std::for_each`**: Use `std::for_each` and a lambda to square all elements in a vector `{1, 2, 3, 4, 5}`. Print the modified vector.
   - Example output: `Vector after squaring: 1 4 9 16 25`.
4. **Sorting with Lambda**: Use `std::sort` with a lambda to sort a vector of integers `{5, 2, 8, 1, 9}` in descending order. Print the sorted vector.
   - Example output: `Sorted vector: 9 8 5 2 1`.

---

## Week 3: Smart Pointers and Memory Management
- **Day 1-2: Smart Pointers**
  - Introduction to `std::unique_ptr`, `std::shared_ptr`.
  - Benefits of smart pointers over raw pointers.

- **Day 3-4: RAII (Resource Acquisition Is Initialization)**
  - How RAII works with smart pointers.
  - Exception safety.

- **Day 5: Practical Use of Smart Pointers**
  - Implementing a simple class that uses smart pointers for resource management.

### Programming Assignments:
1. **Basic `std::unique_ptr`**: Create a `std::unique_ptr` to manage an integer. Initialize it with the value 42, then print the value.
   - Example output: `Value = 42`.
2. **Array with `std::unique_ptr`**: Use `std::unique_ptr` to manage a dynamically allocated array of `{1, 2, 3, 4, 5}`. Print all elements.
   - Example output: `Array: 1 2 3 4 5`.
3. **Class with `std::unique_ptr`**: Create a class `Buffer` that uses `std::unique_ptr` to manage a dynamically allocated array. Implement a constructor, a method to print the buffer, and ensure proper cleanup. Test with a buffer of size 3.
   - Example output: `Buffer: 10 20 30`.
4. **Exception Safety with `std::unique_ptr`**: Write a function that throws an exception after creating a `std::unique_ptr`. Demonstrate that the resource is still properly cleaned up. Print a message to confirm cleanup.
   - Example output: `Exception caught, resource cleaned up`.

---

## Week 4: C++20 Features and More Advanced Concepts
- **Day 1-2: C++20 Ranges**
  - Introduction to views and ranges.
  - Using `std::views::enumerate`.

- **Day 3-4: Structured Bindings**
  - Using structured bindings with ranges.

- **Day 5: Review and Integration**
  - Recap of all concepts learned.

### Programming Assignments:
1. **Basic Range Iteration**: Use `std::views::iota` to generate and print the first 10 natural numbers.
   - Example output: `Numbers: 1 2 3 4 5 6 7 8 9 10`.
2. **Filtering with Ranges**: Use `std::views::filter` to print only even numbers from a vector `{1, 2, 3, 4, 5, 6}`.
   - Example output: `Even numbers: 2 4 6`.
3. **Structured Bindings with `std::map`**: Create a `std::map` with key-value pairs `{1, "one"}, {2, "two"}, {3, "three"}`. Use structured bindings to print each key-value pair.
   - Example output: `Key: 1, Value: one`, `Key: 2, Value: two`, `Key: 3, Value: three`.
4. **Ranges with `std::views::enumerate`**: Use `std::views::enumerate` to iterate over a vector `{10, 20, 30, 40, 50}` and print both the index and value using structured bindings.
   - Example output: `Index: 0, Value: 10`, `Index: 1, Value: 20`, etc.

---

## Final Project: Integration of All Concepts
- **Project Description**: Develop a simple "Game of Life" simulator:
  - **Template Metaprogramming**: Use to define game rules at compile time (e.g., number of neighbors needed for life or death).
  - **Lambda Expressions**: For updating the game state or calculating neighbors.
  - **Smart Pointers**: Manage the game board memory efficiently.
  - **C++20 Ranges**: For iterating over cells in a more expressive way.
  - **Concepts**: Implement a game loop where players can see generations evolve.

  **Steps**:
  1. **Design the Board**: Use `std::unique_ptr` for memory management of the board.
  2. **Implement Game Logic**: Use lambdas for cell update rules.
  3. **Use Ranges**: For efficient iteration over board cells.
  4. **Output**: Use structured bindings when printing the state of the board.

### Deliverables:
- Source code with comments explaining the use of each technique.
- A brief report or README detailing how each C++ feature was incorporated into the project.
