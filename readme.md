# Pakistan College of Technology — Admission Eligibility System

A simple C++ console-based admission eligibility system that checks whether a student qualifies for admission based on their Intermediate percentage, Matric percentage, and Entry Test marks.

## 📌 Features

* Takes the student's name as input
* Takes Intermediate percentage
* Takes Matric percentage
* Takes Entry Test marks
* Checks eligibility using multiple admission criteria
* Displays a personalized admission result
* Validates percentage and marks ranges
* Prevents invalid percentage and marks input

## 🛠️ Technologies Used

* C++
* `iostream`
* `string`
* Conditional statements
* Comparison operators
* Logical operators
* `while` loops

## ⚙️ How It Works

The program asks the student to provide:

1. Student name
2. Intermediate percentage
3. Matric percentage
4. Entry Test marks

The program validates that all percentage and marks values are between **0 and 100**.

The student is considered eligible when all three requirements are satisfied:

* Intermediate percentage is **50% or above**
* Matric percentage is **50% or above**
* Entry Test marks are **50 or above**

If all conditions are satisfied, the program displays an eligibility confirmation. Otherwise, it displays a rejection message.

## 💻 Example

### Input

```text
Enter your name: Umair
Enter your Intermediate Percentage: 80
Enter your Matric Percentage: 80
Enter your Entry Test Marks: 65
```

### Output

```text
Congratulations! Umair, You are eligible for admission.
```

### Invalid Input Example

```text
Enter your Intermediate Percentage: 120
Invalid percentage! Please enter a value between 0 and 100.
```

## 📚 Concepts Practiced

* Variables
* `string` and `int` data types
* User input using `cin`
* Output using `cout`
* `if` and `else` statements
* `while` loops
* Comparison operators
* Logical AND operator (`&&`)
* Input validation
* Multiple conditions
* Basic decision-making logic

## 🚀 Future Expansions

* Add different admission requirements for different programs
* Allow checking eligibility for multiple students
* Add Student ID
* Calculate admission merit/aggregate
* Add a menu-based admission system
* Store student records in files
* Add search and update functionality
* Add delete student functionality
* Introduce functions to organize the program
* Convert the project to Object-Oriented Programming (OOP)
* Add a graphical user interface (GUI)

## 👨‍💻 Author

**Umair Naseer**

BSCS Student | Learning C++ & Python
