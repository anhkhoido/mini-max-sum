Mini-Max Sum

by bishop15

Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

INPUT FORMAT

A single line of five space-separated integers.

CONSTRAINTS

1. Each integer is in the inclusive range of 1 to 10^9.

OUTPUT FORMAT

Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than 32 bit integer.)

SAMPLE IMPUT

1 2 3 4 5

SAMPLE OUTPUT

10 14

EXPLANATION

Our initial numbers are 1, 2, 3, 4, and 5. We can calculate the following sums using four of the five integers:

If we sum everything except 1, our sum is 2 + 3 + 4 + 5 = 14.
If we sum everything except 2, our sum is 1 + 3 + 4 + 5 = 13.
If we sum everything except 3, our sum is 1 + 2 + 4 + 5 = 12.
If we sum everything except 4, our sum is 1 + 2 + 3 + 5 = 11.
If we sum everything except 5, our sum is 1 + 2 + 3 + 4 = 10.

As you can see, the minimal sum is 1 + 2 + 3 + 4 = 10  and the maximal sum is 2 + 3 + 4 + 5 = 14. Thus, we print these minimal and maximal sums as two space-separated integers on a new line.

Hints: Beware of integer overflow! Use 64-bit Integer.
