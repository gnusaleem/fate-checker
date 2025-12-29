# fate-checker

[![C CI/CD](https://github.com/gnusaleem/fate-checker/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/gnusaleem/fate-checker/actions/workflows/c-cpp.yml)

## A Simple Program to check flames of two persons

### Most important Formula

- pos = (pos + count - 1) % size

Example
=======
```c
count = 9
pos = 0
size = 6


0 = (0 + 9 - 1) % 6 = 2
```

## Usage
```c
./flames

************ FLAMES************
First person name: X
Second person name: Y
RelationShip Status: ? // Displays based on the names
```
