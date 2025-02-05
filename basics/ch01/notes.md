# Chapter 1: Hello, World!

This document contains concepts and things to remember.

## The first program: Hello, World!

- The name `cout` refers to a standard output stream
- The *output operator* `<<` puts characters into `cout`
- The name `cout` is an abbreviation of "**c**haracter **out**put"
- `std::` says that the `cout` is to be found in the standard library
- `import std` makes the standard library accessible
- `int main` is the entry point, and does not really need a return value.
- The word *statement* stands for an action within a program. 

## Linking

- The separate parts of a program are colled *modules* or *translation units*
- Each module must be compiled into object code files
- The program that links such parts together is called *linker*

Example taken from the program `hello_word`:
hello_word.cpp -> compiler -> obj file -> linker
module std -> compiler object file 2 -> linker 
linker -> executable file

Three types of different errors:

- Compile-Time
- Link-time
- Run-time

