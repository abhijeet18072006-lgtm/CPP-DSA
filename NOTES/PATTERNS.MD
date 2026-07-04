# 03 - Patterns

Pattern Questions are based on Nested Loops.

Rule:

Outer Loop → Rows

Inner Loop → Columns

--------------------------------------------

# How to Solve Every Pattern

Step 1
Count Number of Rows

↓

Step 2
Count Number of Columns

↓

Step 3
Decide What to Print

↓

Step 4
Write Logic

--------------------------------------------

# Square Pattern

*****
*****
*****
*****
*****

Rows = 5

Columns = 5

Code Logic:

Outer Loop → 5 times

Inner Loop → 5 stars

--------------------------------------------

# Number Pattern

12345
12345
12345
12345
12345

Print j

cout << j;

--------------------------------------------

# Reverse Number Pattern

54321
54321
54321
54321
54321

Formula:

n - j + 1

--------------------------------------------

# Counting Pattern

123
456
789

Use one variable.

int count = 1;

cout << count;
count++;

--------------------------------------------

# Triangle Pattern

*
**
***
****
*****

Rows increase

Columns = Row Number

--------------------------------------------

# Reverse Triangle

*****
****
***
**
*

Rows decrease

--------------------------------------------

# Pyramid

    *
   ***
  *****
 *******

Remember:

Spaces

then

Stars

--------------------------------------------

# Pattern Tricks

Rule 1

Outer Loop controls Rows.

Rule 2

Inner Loop controls Columns.

Rule 3

Always draw pattern first.

Rule 4

Count rows.

Rule 5

Count columns.

Rule 6

Decide print statement.

--------------------------------------------

# Time Complexity

Nested Loops

Rows × Columns

Time Complexity = O(N²)

--------------------------------------------

# K3B (HOW TO CRACK EVERY PATTERN PROBLEM)

Every Pattern follows only three questions:

1.
How many rows?

2.
How many columns?

3.
What should I print?
------------------------------------------------

ALPHABET PATTERN
AAA
BBB
CCC
DDD
for this we just take a char value ch='A' and
it will look like = // char ch='A' +i-1; and print the ch//


for 
ABC
ABC
ABC just take j in place of i
-------------------------------------------------