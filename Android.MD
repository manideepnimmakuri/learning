# ANDROID 

## What is embedded system?

  the system which is designed to do specific task is known as embedded system which include custom hardware and software.
## Advantages

- Cost efficiency
- High quality 

## Disadvantages

- Development cost 
- Complex design

## types of embeddeed system

1. **saftey-critical , non-complex application**
 - It is used handle critial jobs
 - Uses priority based scheduling
 - Runs on RTOS (example : FreeRTOS)

2.**non safety ,complex application** 
 - It handles multiple features , non time critical tasks 
 - It uses fair scheduling process
 - Runs on general purpose os ( Linux,Android)

## What does embedded android engineer does?

For embedded system , a regular board is taken and unwanted ports (or) peripherals are removed. So as an embedded engineer we need to build custom OS from the general OS.

## Android 
 - It is started as camera OS , acquired in 2005
 - It uses Bionic C library
 - It requires less memory and high CPU hungry
 - It uses CFS scheduling
 - It has low memory killer :- when multiple processes runs at a time then for better performance android kills low priority processes. 
 - It uses Binder IPC instead of V IPC

## linux os architure

    +----------------------------+
    |                            |
    |     Application            |
    |                            |
    +----------------------------+
    |                            |
    |       services             |
    |                            |
    +----------------------------+
    |                            |
    |       libraries            |
    |                            |
    + ---------------------------+
    |                            |
    | system call interface      |
    |                            |
    +----------------------------+
    |                            |
    |         driver             |
    |                            |
    +----------------------------+
    |                            |
    |      Linux OS Base         |
    |     (MMU,VM,PM,IPC)        |
    |                            |
    +----------------------------+

## Application layer

 - It is the top layer uses the apps like (firefox,texteditor).
 - These interact with OS through system calls(via libraies).

## services layer

 - in Linux,the services layer refers to background processes and demons that provides core functionality to the system and applications.

## Libraries Layer

 - this layer consists of shared libraries that provides pre-written functions and APIs for applications and services to use.

## system call interface

 - The gateway between user space and kernel space.
 - it is used file I/O (open(),write(),read(),close(),etc.

## driver

 - It is the code which is used to interface the OS with hardware peripheral.

## Linux Os Base Layer

 - It is responsible for system-level opeation 
 - MMU(Memory Management Unit):- Translates vitual to physical memory
 - VM( Virtual Memory):-Manages memory allocation,paging,swap.
 - PM(process management):-Process scheduling,context switching.
 - IPC(Inter-process communication):-pipes,semaphores,message queues,shared memory.
