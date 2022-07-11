# OS Fundamentals

### MS-DOS

1. command.com (hosts a lot of internal commands)
2. config.sys
3. io.sys
4. autoexec.bat (optional)

Some useful pointers about OS

-   The first software to be loaded into the memory when your computer starts (boots)
-   It is the only program that is running at all times
-   At the core level, Kernel is the program that is loaded first
-   Kernel is the part of the OS that interacts with the hardware
-   In most OS, there will be a shell/ command interpreter loaded after kernel, which interacts with the kernel.
-   The OS takes care of
    -   memory management
    -   I/O management
    -   Network management
    -   CPU (processing) management
    -   Disk/Storage management
    -   Security management

![](./images/unix_arch.dio.png)

## Generations of computers and OS (evolution)

-   First gen

    -   1945-55
    -   Vacuum tubes
    -   OS was implemented using plug boards / punch cards
        ![](/images/1stgencomputer.dio.png)

-   Second generation

    -   1955-65
    -   Transisters
    -   Batch systems

-   Third generation

    -   1965-80
    -   IC (Integrated circutes)
    -   Multiprogramming

-   Fourth generation
    -   1980 onwards
    -   LSI (Large scale integration)
    -   OS for PCs

## Types of operating systems

-   Batch Operating System

    -   ![](./images/batch-os.dio.png)
    -   Examples of Batch OS -> Payroll System, Bank Application

-   Time-Sharing Operating System

    -   Each task is given a small amount of time (usually in milliseconds)
    -   All taks do some work with in the given amount of time, and allows other tasks to do their work
    -   At any point in time, only one task is being processed by the CPU
    -   Examples: Multics, Unix, etc

-   Distributed OS

    -   Lots of internconnected computers communicate with each other
    -   Independent computers (like yours or mine) have their own CPU/RAM
    -   ![](./images/distributed-os.dio.png)
    -   Leverages computation power possessed by millions of computers in the world

-   Network OS

    -   ![](./images/network_os.dio.png)
    -   Specialized network server os required (Novell Netware, BSD, Unix, Linux, Windows Server 2003+)
    -   Client computers connect to the network server and request for remote booting
    -   Network server sends a copy of the OS which gets loaded in the client memory

-   Real-time OS
    -   These OS serve Real-Time computers
    -   The response time for processing the input and giving the output is very very small

# Linux OS

-   Open source
-   Free
-   Was developed by Linus Towalds in 1991
-   Thousands of distro (linux distributions) are there today
-   ![](./images/linux-architecture.dio.png)

### Kernel

-   The core part of the OS
-   Establishes communication between software and physical devices
-   Manages resources (memory, cpu, i/o, network, storage) using device drivers

### System libraries

-   special programs that help in accessing kernel
-   provide "system calls", functions that can be triggered by an application program
    -   example: open() close() functions, that can be triggerd from with in a C program

# Process Management

-   A process is a program under execution
-   A program is a set of instructions (written in high level language, and compiled to the machine language)
-   The term "machine" refers to the OS
-   An executable program (a.k.a binary code) is a set of instructions in the machine language which can be understood and executed by the OS (actually kernel)
-   Process is an active entity
-   Program is a passive entity
-   A process has
    -   Process ID (PID)
    -   Process Status (ready, running etc)
    -   CPU Registers (memory inside the CPU)
    -   I/O status information
    -   CPU Scheduling information (such as priority information)
    -   Accounts information (user, group etc)

## Different states of a Process

-   New
    -   You just ran or executed a program
    -   OS creates a running process for the same (with ID etc)
-   Ready
    -   After creation, process by default moves to this "Ready" State
    -   The process is ready for execution
    -   It is waiting since there is only one process being handled by the CPU (Single core)
-   Run
    -   CPU is executing the instructions of the process
    -   There will be time cap as how long a process is handled by the CPU
    -   If the task of the process is not finished with in the allotted time, it will go back to the Ready state
-   Wait (or Block)
    -   A process becomes blocked, when it demands I/O access
    -   Once blocked, it can not be resumed to the Run state, but it will go back to the Ready state, and waits for its turn to get the CPU time
-   Completed (or Terminated)
    -   The entire task of the running program is finished, and the process quits
-   Suspended Reday
    -   When the "ready-queue" is full, some processes are moved to another queue which is called "Suspended ready"
-   Suspended Block
    -   When the "block/wait-queue" is full, some processes are moved to another queue which is called "Suspended block"

![](./images/process-management.dio.png)

### Context Switching

-   Process of saving the context (information about the state of the process like data held by the process, etc) of running process and loading the context of one of the "Ready" process next in queue (for executing by CPU)
-   happens when
    -   when a high-priority process comes to the ready state
    -   Interrupt occurupt
    -   Preemptive CPU Scheduling used

# Divisions of memory

-   During the execution of a program (process), the program stores data in the form of memory variables
-   Variables declared inside a function (including parameters/arguments) (a.k.a local variables) are stored in STACK
-   A program a may request the OS for extra memory, dynamicall, based on the requirements at the runtime. Such memory is allocated in HEAP
-   The code itself (during execution) is stored in CODE SEGMENT

![](./images/divisions-of-memory.dio.png)

# Assignment for Day 1

Do a bit of research about CPU scheduling and address the following tasks:

1. Write about CPU Scheduling in Operating Systems
2. What are the different types of CPU Scheduling Algorithms?
3. Explain in detail about Round Robin Scheduling Algorithm

As in the past, please write your content on a paper, and submit the PDF version of the same in the submission folder.
