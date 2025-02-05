# Advanced C++ Learning Assignments

## Objective

These assignments build understanding from a **beginner** to an **intermediate** level for various advanced C++ topics. Each topic is broken into progressively challenging assignments, concluding with a **final project** that ties everything together.

---

## 1. Template Metaprogramming

### Assignment 1: Basic Template Usage
- **Task**: Write a template function `max` that returns the larger of two numbers. Implement for `int`, `float`, and a custom class with the `>` operator.
- **Real-world Application**: Useful in sorting algorithms or utility libraries.

### Assignment 2: Compile-time Calculations
- **Task**: Create a template for computing Fibonacci numbers at compile-time using recursion.
- **Application**: Optimization for precomputed sequences, such as financial calculations or game AI.

### Assignment 3: Template Specialization
- **Task**: Implement a template class `Array` that can handle different data types. Specialize it for `char` to work like a string.
- **Application**: Custom data structures in databases or text editors.

---

## 2. Lambda Expressions

### Assignment 1: Basic Lambda
- **Task**: Write a simple lambda function to square numbers in a `std::vector`.
- **Application**: Quick inline operations in data processing or event handling.

### Assignment 2: Lambda with Capture
- **Task**: Use a lambda to find the sum of even numbers in an array, capturing an external sum variable.
- **Application**: Statistics and data analysis, especially in financial software.

### Assignment 3: Lambda in Algorithms
- **Task**: Use `std::for_each` to apply transformations (doubling, squaring, etc.) to elements in a vector.
- **Application**: Efficient data manipulation in scientific computing and machine learning.

---

## 3. Smart Pointers

### Assignment 1: Introduction to Smart Pointers
- **Task**: Replace raw pointers with `std::unique_ptr` in a simple class that manages a single integer.
- **Application**: Memory management in game development and applications with complex object lifecycles.

### Assignment 2: Shared Ownership
- **Task**: Use `std::shared_ptr` for a class representing a resource (e.g., database connection pool) shared among multiple objects.
- **Application**: Resource sharing in multi-threaded environments and server applications.

### Assignment 3: Move Semantics with Smart Pointers
- **Task**: Implement a function that takes ownership of a `std::unique_ptr` using move semantics.
- **Application**: Efficient resource management in web servers and high-performance systems.

---

## 4. Modern C++ Features

### Assignment 1: Range-based For Loop
- **Task**: Use a range-based for loop to calculate the average of numbers in a vector.
- **Application**: Data analysis tools and dashboard applications.

### Assignment 2: Structured Binding
- **Task**: Create a `std::pair` or `std::tuple` and unpack it using structured binding within a loop.
- **Application**: Parsing structured data like JSON or database records.

### Assignment 3: Views and Algorithms
- **Task**: Use `std::views::filter` to select numbers from a vector based on certain criteria, then sum them up.
- **Application**: Efficient data filtering in big data analytics and real-time systems.

---

## Final Assignment: Tying It All Together

### Task: Build a complete C++ application integrating all the concepts covered.

#### Design Requirements:
- **Template Metaprogramming:** Compute a complex mathematical series (e.g., binomial coefficients) at compile-time.
- **Lambda Expressions:** Implement a `DataProcessor` class where:
  - Functions use lambdas for data manipulation.
- **Smart Pointers:** Manage memory for large datasets efficiently.
- **Modern C++ Features:** Utilize views for lazy evaluation, structured bindings for clarity, and range-based loops for iteration.

#### Scenario:
- The program should simulate **real-time data processing** (e.g., stock prices, sensor data).
- Implement various **data transformations and aggregations**.
- Manage **shared resources** (e.g., connection pools) across multiple threads or tasks.

#### Real-World Application:
- Can be used in **financial trading systems**, **real-time analytics**, or **IoT data pipelines**, where speed, efficiency, and resource management are critical.

---

## Conclusion
This structured series of assignments will gradually improve your understanding of **advanced C++ features**, ultimately preparing you to tackle complex real-world problems. Be sure to **test and debug each step** before moving on to ensure mastery.

Reading is GOOD! 🚀
