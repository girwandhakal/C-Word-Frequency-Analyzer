# Word Frequency Analyzer

This project is a C++ program that reads text input from a file, analyzes the frequency of each word, and outputs the results in a sorted manner. The program counts how often each word appears and then sorts the words first by frequency (from most to least frequent) and alphabetically for words with the same frequency. This is a simple yet effective example of using C++ Standard Library features like `map`, `vector`, and `regex`.

## Features

- **Word Tokenization:** Uses regular expressions to split the input text into individual words.
- **Frequency Counting:** Tracks the frequency of each word using a `map`.
- **Sorting:** Sorts words by frequency and alphabetically using a custom lambda function.
- **Output:** Outputs the sorted list of words and their frequencies to a file.

## How to Run the Program

1. **Compile the Program:**

   ```bash
   g++ homework2.cpp
2. **Run the Program:**
   ```bash
   .\a.exe < input.txt > output.txt
This project serves as a practical exercise in C++ programming, focusing on string manipulation, data structures, and sorting algorithms. It demonstrates the effective use of common C++ libraries and features to accomplish a real-world task efficiently.

