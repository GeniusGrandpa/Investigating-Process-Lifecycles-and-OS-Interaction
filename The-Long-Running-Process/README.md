
# Process Execution and Sleep System Call in C

## Overview

This project demonstrates a basic C program that illustrates process execution and the use of the `sleep()` system call in a Unix/Linux environment.

The program displays a starting message, pauses its execution for 30 seconds, and then displays a completion message.

It demonstrates how a running process can temporarily suspend its execution using the `sleep()` function provided by the POSIX `unistd.h` library.

## Objectives

- Understand the basic structure and execution of a C program.
    
- Learn how the `sleep()` system call works.
    
- Observe how a process behaves when its execution is temporarily suspended.
    
- Understand the sequence of program execution using a simple time-based delay.
    

## Technologies Used

- **Programming Language:** C
    
- **Standard Library:** `stdio.h`
    
- **POSIX Library:** `unistd.h`
    
- **Compiler:** GCC
    
- **Operating System:** Linux / Unix
    

## Source Code

The program is implemented in `main.c`.

```
#include <stdio.h>
#include <unistd.h>

int main() {
    printf(" I am Starting ... \n");

    // loop for 30 seconds
    for (int i = 1; i <= 30; i++) {
        sleep(1); // pauses execution for one second
    }

    printf(" I am Finished. \n");

    return 0;
}
```

## Code Explanation

### 1. Header Files

```
#include <stdio.h>
#include <unistd.h>
```

- `stdio.h`: Provides standard input/output functions, including `printf()`.
    
- `unistd.h`: Provides access to the POSIX `sleep()` function.
    

### 2. Main Function

```
int main() {
```

The `main()` function is the entry point of the program. Execution begins here.

### 3. Starting Message

```
printf(" I am Starting ... \n");
```

Displays a message indicating that the program has started executing.

### 4. For Loop and Sleep Function

```
for (int i = 1; i <= 30; i++) {
    sleep(1);
}
```

This loop executes 30 times.

During each iteration, `sleep(1)` suspends the calling process for approximately one second.

As a result, the program introduces a delay of approximately 30 seconds before continuing execution.

### 5. Completion Message

```
printf(" I am Finished. \n");
```

After the loop finishes, the program displays a completion message.

### 6. Return Statement

```
return 0;
```

Indicates that the program has completed successfully.

## Compilation and Execution

### Step 1: Clone the Repository

```
git clone <repository-url>
```

### Step 2: Navigate to the Project Directory

```
cd process-execution
```

### Step 3: Compile the Program

```
gcc main.c -o process_execution
```

### Step 4: Execute the Program

```
./process_execution
```

## Expected Output

```
I am Starting ...

[Program waits for approximately 30 seconds]

I am Finished.
```

**Note:** The completion message appears after the 30-second delay. The actual duration may vary slightly depending on system scheduling and execution conditions.

## Screenshots

Screenshots are included to demonstrate the compilation and execution of the program.

### 1. Successful Compilation

This screenshot should show the GCC compilation command and successful compilation without errors.

  

### 2. Program Execution – Starting Message

This screenshot should show the program running and displaying the initial message.

  

### 3. Program Execution – Completion Message

This screenshot should show the program after the approximately 30-second delay, displaying the completion message.

  

## Key Concepts Demonstrated

- **Process Execution:** Understanding how a compiled C program runs as a process.
    
- **Process Suspension:** Using `sleep()` to temporarily suspend the calling process.
    
- **System Calls:** Understanding how programs interact with operating system services through POSIX functions.
    
- **Program Flow:** Observing sequential execution and loop-based delays.
    

## Conclusion

This project demonstrates the basic concept of process execution and temporary process suspension in a Linux/Unix environment.

By using the `sleep()` function inside a loop, the program pauses its execution for approximately 30 seconds before displaying the final completion message.

It provides a simple practical introduction to how processes behave during execution and how operating systems manage process scheduling.


**Author:** Anil Tamang  
**Language:** C  
**Environment:** Linux
