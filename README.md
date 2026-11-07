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


### Requirements

Before starting the lab, make sure the following are available:

* **Linux:** A Linux-based operating system such as Ubuntu, Debian, Fedora, or Arch Linux.
* **GCC:** GNU C Compiler for compiling the C programs.
* **Bash:** A Linux shell for executing programs and commands.
* **Git:** Required for version control and pushing the lab work to GitHub.
* **Standard Linux utilities:** Commands such as `ps`, `echo`, and `grep`.

> Most standard Linux distributions already include utilities such as `ps`, `echo`, and `grep`.

### Installation

For Ubuntu/Debian-based systems, install the required development tools and Git using:

```bash
sudo apt update
sudo apt install build-essential git
````

The `build-essential` package includes GCC and other essential tools required for compiling C programs.

### Verify Installation

Verify that the required tools are installed:

```bash
gcc --version
git --version
ps --version
```

You should see version information for each command.

## Getting Started

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
/
├── LICENSE
├── README.md
├── Task-1/ (The Long-Running Process)      └── looping.c, README.md
├── Task-2/ (Process Identity PID/PPID)     └── task2_identity.c, README.md
├── Task-3/ (Exit Codes & OS Feedback)      └── task3_exit.c, README.md
├── Task-4/ (Standard I/O Streams)          └── task4_input.c, README.md
└── Task-5/ (Conditional Execution & Term)  └── task5_control.c, README.md
```
*Each task directory contains its corresponding source code and an individual README.md with the theoretical explanation, implementation details, verification steps, screenshots, and observations.*

### Compilation

The C programs in this lab can be compiled using GCC.

For example:

```bash
gcc task1_alive.c -o task1
```

The same pattern can be used for the other tasks:

```bash
gcc task2_identity.c -o task2
gcc task3_exit.c -o task3
gcc task4_input.c -o task4
gcc task5_control.c -o task5
```

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


