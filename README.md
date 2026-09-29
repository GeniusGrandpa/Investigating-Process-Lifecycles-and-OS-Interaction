# Investigating Process Lifecycles and OS Interaction

### Overview
**Investigating Process Lifecycles and OS Interaction** 
The purpose of this lab is to explore how C programs interact with the Linux operating system and how the OS manages processes throughout their lifecycle. Rather than treating a C program as an isolated piece of code, this lab focuses on observing the program as a **process managed by the Linux kernel**.

### Objectives
* **Process Identity:** Tracking Process IDs (PID) and Parent Process IDs (PPID).
* **Process Lifecycle:** Exploring creation, execution, sleep states, and termination.
* **OS Monitoring:** Monitoring running processes using Linux command-line tools.
* **I/O & Communication:** Working with standard input/output streams (`stdin`/`stdout`) and reporting exit codes to the shell.
* **Kernel Interaction:** Observing how user inputs and conditions influence process execution and control.


### Lab Tasks

1. **The Long-Running Process**  
   Exploring a process while it is actively running and learning how to monitor it using Linux process-management commands.
2. **Process Identity (PID and PPID)**  
   Using system calls to identify a process and its parent process.
3. **Exit Codes and OS Feedback**  
   Understanding how a C program reports success or failure to the operating system through exit codes.
4. **Standard I/O Streams**  
   Exploring how programs interact with the user through standard input (`stdin`) and standard output (`stdout`).
5. **Conditional Execution and Termination**  
   Examining how user input can influence process execution and the exit status returned to the operating system.

### Repository Structure
```text
Lab-3/
├── README.md
├── Task-1/ (The Long-Running Process)      └── task1_alive.c, README.md
├── Task-2/ (Process Identity PID/PPID)     └── task2_identity.c, README.md
├── Task-3/ (Exit Codes & OS Feedback)      └── task3_exit.c, README.md
├── Task-4/ (Standard I/O Streams)          └── task4_input.c, README.md
└── Task-5/ (Conditional Execution & Term)  └── task5_control.c, README.md
```
*Each task directory contains its corresponding source code and an individual README.md with the theoretical explanation, implementation details, verification steps, screenshots, and observations.*


### Key OS Concepts
This lab connects practical C programming with core operating-system execution concepts:

```text
[ C Source Code ] 
       │
       v (Compilation & Execution)
[ Linux Process ] ──>(Allocated PID/PPID & Execution State)
       │
       v
[ Process Lifecycle ] ──> (Running / Sleeping States)
       │
       v
[ Termination ] ──> (Returns Exit Status/Code to Shell)
```

The experiments provide practical examples of how a program communicates with and is managed by the operating system.


### Technologies Used
* **Language & Compiler:** C (GCC)
* **Environment:** Linux (Bash shell)
* **Process Tools:** `ps`, `echo`, and related commands
* **Version Control:** Git & GitHub


### Learning Outcome
By completing this lab, You can develop a practical understanding of the relationship between **C programs, Linux processes, the shell, and the operating system kernel**. It demonstrates how concepts introduced in Operating Systems lectures can be observed directly through small C programs and Linux command-line tools.
