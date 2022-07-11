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
