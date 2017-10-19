#include <stdio.h>

int main(void)
{
    int salary;  /* Declare a variable called salary */
    salary = 10000;  /* A simple arithmetic assignment statement */
    printf("My salary is %d.", salary);
    return 0;
}

// Variables That Store Numbers
// There are several different types of variables, and each type of variable is used for storing a particular
// kind of data. You’ll start by looking at variables that you can use to store numbers. There are actually
// several different ways in which you can store numbers in your program, so let’s start with the simplest.
// Integer Variables
// Let’s look first at variables that store integers. An integer is any whole number without a decimal
// point. Examples of integers are as follows:
// 1
// 10,999,000,000
// 1
// You will recognize these values as integers, but what I’ve written here isn’t quite correct so far
// as your program is concerned. You can’t include commas in an integer, so the second value would
// actually be written in a program as 10999000000.
// Here are some examples of numbers that are not integers:
// 1.234
// 999.9
// 2.0
// –0.0005
// Normally, 2.0 would be described as an integer because it’s a whole number, but as far as your
// computer is concerned it isn’t because it contains a decimal point. For your program, you must
// write it as 2 with no decimal point. In a C program integers are always written without a decimal
// point; if there’s a decimal point, it isn’t recognized as an integer. 