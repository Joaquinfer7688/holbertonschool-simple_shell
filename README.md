<img src="https://i.ibb.co/Jmjr9Tx/SIMPLE-SHELL-BANNER.png" alt="SIMPLE-SHELL-BANNER" border="0">

# Table of Contents

- [Description](#description)
- [Files](#files)
- [Installation](#installation)
- [Authors](#authors)

## Description

This repository is a project that consisted in writing a simple shell in C. 

What is a shell? Generally, a shell is a program that runs other programs in response to text commands and use either a command-line interface (CLI) or graphical user interface (GUI), depending on a computer's role and particular operation. It is named a shell because it is the outermost layer around the operating system.
Command-line shells require the user to be familiar with commands and their calling syntax, and to understand concepts about the shell-specific scripting language (for example, bash)

## What is a process?

A process is an instance of an executing program, that has a unique process ID. This process ID is used by many functions and system calls to interact with and manipulate processes. In order to retrieve the current process’ ID, you can use the system call getpid. To get the process parent id we use: getppid.

Within the same program execution: getpid() will return the same value.
Across different program executions: getpid() will return different values for each execution, as each execution involves a separate process with a unique PID.

In the same regard, running getppid() multiple times within the same program execution will likely give you the same value, but running it across different executions or instances of the program could result in different values.


**The Simple Life of a Shell**

1. Begin by Starting the Shell
2. Pause and Await User Input
3. Understand and Break Down User Input
4. Carry Out the Command and Share the Outcome
5. Return to Step 2 for More Actions
* To finish using the shell, simply type the exit command at the prompt or use Ctrl-D, which is seen as the end of the file (EOF)

## Files used in this project

| File                   | Description                                                                                                  |
|------------------------|--------------------------------------------------------------------------------------------------------------|
| **`AUTHORS`**          | List of contributors                                                                                        |
| **`shell.h`**          | Header File. Contains libraries and prototypes of functions.                                                                                             |
| **`simple_shell.c`**   | Contains the implementation of a simple shell in C.                                                           |
| **`execve.c`**         | The `execute_command` function creates a new process to run a specified command.                                |
| **`freetokens.c`**     | The `free_tokens` function takes an array of strings and frees the memory allocated for each string and the array itself.|
| **`getcommandfunc.c`** | The `get_command` function resolves the full path of a command.                         |
| **`getenvfunc.c`**     | The `_getenv` function retrieves the value of an environment variable.                                      |
| **`split_stringfunc.c`**| Splits a string into an array of tokens.                                                                    |

## System Calls used in this project

The system call is the fundamental interface between an application and the Linux kernel, and the Kernel is the software that serves as a bridge between the hardware and the rest of the operating system functions.

| System Call | Description                                                                                     |
|-------------|-------------------------------------------------------------------------------------------------|
| **wait**    | Suspends execution of the calling thread until one of its children terminates.                                    |
| **fork**    | Creates a new process by duplicating the calling process. The new process is referred to as the child process, and the calling process is referred to as the parent process.          |
| **execve**  | Allows a process to execute another program.            |
| **malloc**  | Allocates size bytes and returns a pointer to the allocated memory.                   |
| **free**    | Frees the memory space from the heap, which must have been returned by a previous call to malloc(), calloc(), or realloc().                         |
| **issatty** | Tests whether a file descriptor refers to a terminal.                                  |
| **write**   | Writes to a file descriptor.                                                |
| **getline** | Reads an entire line from a stream, storing the address of the buffer containing the text into a pointer.|
| **stat**    | Displays file or file system status.                                                               |



## Installation

Clone this repository to your local machine:

```
$ git clone https://github.com/pablosalina25/holbertonschool-simple_shell
```
 Go to the repository folder:

```
$ cd holbertonschool-simple_shell
```

Compile it with :

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
The shell can be used in interactive or non-interactive mode.

Run the shell in interactive mode:

```
$ ./hsh
```

Example:

```
$ ./hsh
$ls
AUTHORS.txt       hsh
execve.c          README.md
freetokens.c      shell.h
getcommandfunc.c  simple_shell.c
getenvfunc.c      split_stringfunc.c
$echo hello_world
hello_world
$exit
```
Or  non-interactive mode:

```
$ echo "/bin/ls" | ./hsh
```

Example:

```
$ echo "/bin/ls" | ./hsh
AUTHORS.txt       hsh
execve.c          README.md
freetokens.c      shell.h
getcommandfunc.c  simple_shell.c
getenvfunc.c      split_stringfunc.c
```

## Authors
* **Joaquin Fernandez** [Github](https://github.com/Joaquinfer7688)
* **Pablo Salina** [Github](https://github.com/Pablosalina25)


