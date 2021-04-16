# simple_shell

### C Programming Language
Project status: in procces


## Table of Contents
1. [General Info](#general-info)
2. [Requirements](#Requirements)
3. [Flowchart](#Flowchart)
4. [Files](#files)
5. [Usage](#Usage)
6. [Authors](#Authors)

## General Info
***
This is a UNIX command line interpreter based on the simple shell(sh). It reads user input from the command line, interprets it, and executes commands.

In this project we want to emulate the Shell command interpreter, which allows the user to communicate with the kernel through instructions, which in turn allows them to be executed, on the other hand it allows access to tools that allow controlling the operation of the computer.


What you should learn from this project:

- Create a shell environment.
- Apply various functions to a large project.
- The complexities of making a simple shell.
- Manage lots of files and find a good workflow.
- reinforce teamwork skills.

## Requirements

* Gcc, version >= 4.8.4
* Linux

### Steps to compile the shell and execute
git clone

gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

./hsh

Enter your first command.


## Flowchart
***
![Image text](https://media-exp1.licdn.com/dms/image/C4E22AQHxB2qbamEvJg/feedshare-shrink_1280/0/1618458721260?e=1621468800&v=beta&t=wEwYAjF_C66eyXX1oOctr1iSh2l4N9d9K1mkFTGKyqs)
## Files
***
| # | File |
| ------------- | ------------- |
|      1    | shell.h |
|      2    |  simple_shell.c |
|      3    |   strtok.c |
|      4    | tokenizer.c  |
|      5    |  environ.c |
|      6    | count_word.c  |
|      7    |  _receved.c |
|      8    | AUTHORS  |
|      9    |  man_1_simple_shell |
## Usage
```
$ ./hsh

	($) /bin/ls

    AUTHORS  README.md  _receved.c  count_word.c

    environ.c  man_1_simple_shell  shell.h  simple_shell.c

	strtok.c  tokenizer.c

	($)

	($) exit

$

```


## Authors
***

> Sergio Velasquez 2458@holbertonschool.com
>
> Hugo Cortés hugocortesmu@gmail.com
>