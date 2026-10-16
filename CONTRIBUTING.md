# Contributing to Advanced Programming

Thank you for your interest in improving the **Advanced Programming — Course Companion**.

This repository aims to maintain an organised, reliable, and accessible collection of programming examples, concept explanations, algorithms, practice problems, and examination resources for students, educators, and future learners.

Contributions of all sizes are welcome, from correcting a small bug to adding a complete set of topic notes.

## Table of Contents

- [What Can You Contribute?](#what-can-you-contribute)
- [Repository Organisation](#repository-organisation)
- [Contribution Guidelines](#contribution-guidelines)
- [Code Standards](#code-standards)
- [Documentation Standards](#documentation-standards)
- [Submitting a Contribution](#submitting-a-contribution)
- [Review Process](#review-process)
- [Academic Integrity and Licensing](#academic-integrity-and-licensing)
- [Questions and Suggestions](#questions-and-suggestions)

---

## What Can You Contribute?

### Code Examples

- New C++ or Python implementations.
- Corrections to existing programs.
- Alternative implementations that demonstrate different approaches.
- Examples illustrating important concepts or edge cases.
- Improvements to readability, correctness, or efficiency.

### Learning Resources

- Concept explanations and revision notes.
- Output-prediction questions with verified answers.
- Solved programming exercises.
- Practice problems organised by difficulty.
- Viva questions and conceptual comparisons.
- Diagrams, examples, and links to reliable documentation.

### Repository Improvements

- Fixing broken links or incorrect documentation.
- Improving topic organisation and navigation.
- Adding compilation instructions and sample input/output.
- Improving accessibility and consistency across README files.

## Repository Organisation

Place each contribution in the most relevant existing directory.

| Directory | Intended content |
|---|---|
| `01-fundamentals/` | Foundational programming examples |
| `02-classes-and-objects/` | Classes, constructors, destructors, and encapsulation |
| `03-inheritance/` | Inheritance patterns and type conversions |
| `04-polymorphism/` | Polymorphism examples |
| `05-operator-overloading/` | Operator overloading implementations |
| `06-headers-and-multifile-programs/` | Header files and multi-file C++ programs |
| `07-data-structures/` | Stacks, queues, and related implementations |
| `08-algorithms/` | Graph algorithms and dynamic programming |
| `09-multithreading/` | Threading examples and exercises |
| `10-exam-preparation/` | Revision notes, solved questions, and exam resources |
| `11-practice-problems/` | Independent exercises organised by difficulty |
| `docs/` | Course documentation and concept indexes |
| `resources/` | Supporting reference materials |

If a contribution does not fit an existing category, explain the proposed placement in your pull request rather than creating an unnecessary new top-level directory.

## Contribution Guidelines

Every contribution should follow these principles:

1. **Correctness:** Verify code behaviour and factual explanations before submission.
2. **Clarity:** Write material that students can understand without unnecessary complexity.
3. **Relevance:** Keep contributions aligned with the repository's educational purpose.
4. **Consistency:** Follow the existing folder structure and naming conventions.
5. **Reproducibility:** Include the instructions and dependencies needed to run examples.
6. **Maintainability:** Prefer focused, self-contained examples over unnecessarily complicated programs.

Please avoid duplicate examples unless they demonstrate a meaningful alternative approach or a different concept.

## Code Standards

### C++

- Use descriptive filenames in lowercase `snake_case`, such as `constructor_overloading.cpp`.
- Use consistent indentation and readable formatting.
- Include the necessary standard headers.
- Prefer meaningful variable and function names.
- Keep examples focused on the concept being demonstrated.
- Include a `main()` function when the example is intended to be a standalone executable.
- For multi-file examples, document the files required for compilation.
- Use a suitable C++ standard and state any non-obvious compiler requirements.

Example:

```cpp
#include <iostream>

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    int area() const {
        return length * width;
    }
};

int main() {
    Rectangle rectangle(5, 4);
    std::cout << rectangle.area() << '\n';
    return 0;
}
```

### Python

- Use descriptive filenames in lowercase `snake_case`, such as `coin_change.py`.
- Follow standard Python formatting conventions.
- Use meaningful variable and function names.
- Include appropriate input validation where relevant.
- Document required packages and Python versions when necessary.

### Testing

Before submitting code:

- Compile or execute the program.
- Check the expected output.
- Test representative edge cases.
- Confirm that file paths, headers, and dependencies are correct.
- Include sample input and output when they help explain the program.

For C++ examples using GCC, a typical compilation command is:

```bash
g++ -std=c++17 path/to/program.cpp -o program
```

Use the appropriate compilation command for multi-file programs.

## Documentation Standards

Documentation should help readers understand both the concept and the implementation.

Where appropriate, include:

- **Objective:** What the example demonstrates.
- **Concept:** The underlying programming principle.
- **Approach:** A brief explanation of the solution.
- **Execution:** Compilation or running instructions.
- **Sample input/output:** An example of expected behaviour.
- **Complexity:** Time and space complexity for relevant algorithms.
- **Edge cases:** Important conditions or limitations.
- **References:** Reliable sources for further learning.

Use Markdown headings, lists, tables, and fenced code blocks to make material easy to navigate.

Avoid unexplained abbreviations, ambiguous filenames, and claims that have not been verified.

## Submitting a Contribution

The recommended workflow is to fork the repository and submit a pull request.

### 1. Fork the repository

Open the [Advanced Programming repository](https://github.com/Deepak392/Advanced-Programming) and click **Fork** to create your own copy.

### 2. Clone your fork

Replace `YOUR_USERNAME` with your GitHub username.

```bash
git clone https://github.com/YOUR_USERNAME/Advanced-Programming.git
cd Advanced-Programming
```

### 3. Create a branch

Use a descriptive branch name.

```bash
git checkout -b feat/add-inheritance-examples
```

Other examples:

- `fix/correct-stack-implementation`
- `docs/improve-polymorphism-notes`
- `feat/add-output-prediction-questions`

### 4. Make and test your changes

Add or update the relevant files. Verify your code, review the documentation, and check that unrelated files have not been changed.

### 5. Commit your changes

Use a short, descriptive commit message.

```bash
git add .
git commit -m "Add inheritance examples"
```

### 6. Push your branch

```bash
git push -u origin feat/add-inheritance-examples
```

### 7. Open a pull request

On GitHub, open a pull request from your branch to the original repository's `main` branch.

Your pull request should describe:

- What was added, corrected, or improved.
- Which concept or topic is covered.
- How the changes were tested.
- Any dependencies, limitations, or relevant references.

Keep each pull request focused on a coherent change so it can be reviewed efficiently.

## Review Process

Contributions may be reviewed for:

- Technical correctness.
- Code readability and consistency.
- Quality of explanations and examples.
- Relevance to the course.
- Correct placement within the repository.
- Appropriate attribution and licensing.

Reviewers may request changes before a contribution is merged. Please address feedback constructively and update the pull request as needed.

Submitting a pull request does not guarantee acceptance. Contributions should meet the repository's educational and quality standards.

## Academic Integrity and Licensing

This repository is intended to support learning and teaching.

- Do not submit copied solutions without appropriate attribution.
- Do not upload confidential examination materials or unauthorised course documents.
- Respect the licences and redistribution terms of third-party resources.
- Cite external references where appropriate.
- Follow your institution's academic integrity and collaboration policies.
- Do not include passwords, API keys, private information, or other sensitive data.

Before reusing or redistributing any repository content, review the licence provided in the repository. If no licence has been established, do not assume that the content is automatically available for unrestricted reuse.

## Questions and Suggestions

If you have an idea for improving the repository, you can open a GitHub issue describing the proposed improvement.

For bugs, include the relevant filename, expected behaviour, actual behaviour, and reproduction steps where possible.

For larger changes, consider opening an issue first to discuss the approach before investing significant effort.

---

Thank you for helping make the Advanced Programming course companion more accurate, useful, and accessible.

**Learn together. Share knowledge. Build better resources.**
