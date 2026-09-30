# 📘 Assignment: C Unit Testing and Debugging

## 🎯 Objective

Learn how to test C functions with `assert`, investigate failing tests with a debugger, and fix bugs involving boundary values and invalid input.

## 📝 Tasks

### 🛠️ Write Unit Tests for Small Functions

#### Description
Complete the test functions in the starter code for a small temperature-monitoring program. Test each helper function independently before relying on the complete program.

#### Requirements
Completed program should:

- Use `assert` to test `is_valid_temperature()`, `calculate_average()`, and `classify_temperature()`
- Include at least one normal input and one boundary or invalid input for each function
- Keep test code separate from the functions being tested
- Print a clear message when all tests pass


### 🛠️ Find and Fix Logic Bugs

#### Description
Run the tests and use the debugger or temporary diagnostic output to find the bugs in the starter code. Pay special attention to inclusive limits, integer division, and empty input.

#### Requirements
Completed program should:

- Fix every failing test without removing or weakening the test assertion
- Correctly handle temperatures from -20 through 120 degrees Fahrenheit
- Calculate the average using the actual number of readings
- Return a clear result when no readings are available
- Explain in a short comment or write-up what each bug caused


### 🛠️ Improve Test Coverage

#### Description
Add additional tests for edge cases and make the program easier to maintain as new temperature rules are introduced.

#### Requirements
Completed program should:

- Test the exact classification boundaries for normal, warning, and critical temperatures
- Test a list containing one reading and a list containing several readings
- Test invalid readings below and above the accepted range
- Use descriptive test function names and readable failure locations
- Leave the program compiling cleanly with warnings enabled
