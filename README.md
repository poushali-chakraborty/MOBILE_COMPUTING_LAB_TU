# Walsh Code Generator

This C program generates Walsh Code using the Hadamard matrix. It allows you to input the value of the first Hadamard matrix and the index of the Hadamard matrix you want to generate. The program then calculates the Hadamard matrices and their corresponding signature sequences.

## Program Description

The program follows the following steps:

1. Initialize variables and arrays.
2. Take user inputs for the value of H1 (0 or 1) and the maximum value of N for the Hadamard matrix.
3. Generate and display the first Hadamard matrix (H2).
4. Calculate and display the signature sequence for the first Hadamard matrix.
5. Start a loop to generate subsequent Hadamard matrices.
6. Divide the matrix into quadrants and apply the Hadamard algorithm.
7. Generate and display the next Hadamard matrix (H2n).
8. Calculate and display the signature sequence for the current Hadamard matrix.
9. Multiply N by 2 for the next iteration.
10. Repeat steps 6-9 until N reaches the maximum value.
11. End the program.

## Usage

1. Compile the C program using a C compiler.
2. Run the compiled executable.
3. Follow the prompts to input the values for H1 and N.
4. The program will generate the Hadamard matrices and display them along with their signature sequences.

## Example Output

```
ENTER VALUE FOR H1 (0 or 1)
1
ENTER VALUE FOR N UPTO WHICH YOU WANT THE HADAMARD MATRIX:
8
H2 Matrix ::
1       1
1       0

SIGNATURE SEQUENCE::
s1      =       (       +1      +1      )
s2      =       (       +1      -1      )

H4 Matrix ::
1       1       1       1
1       -1      1       -1
1       1       -1      -1
1       -1      -1      1

SIGNATURE SEQUENCE::
s1      =       (       +1      +1      +1      +1      )
s2      =       (       +1      -1      +1      -1      )
s3      =       (       +1      +1      -1      -1      )
s4      =       (       +1      -1      -1      +1      )

H8 Matrix ::
1       1       1       1       1       1       1       1
1       -1      1       -1      1       -1      1       -1
1       1       -1      -1      1       1       -1      -1
1       -1      -1      1       1       -1      -1      1
1       1       1       1       -1      -1      -1      -1
1       -1      1       -1      -1      1       -1      1
1       1       -1      -1      -1      -1      1       1
1       -1      -1      1       -1      1       1       -1

SIGNATURE SEQUENCE::
s1      =       (       +1      +1      +1      +1      +1      +1      +1      +1      )
s2      =       (       +1      -1      +1      -1      +1      -1      +1      -1      )
s3

      =       (       +1      +1      -1      -1      +1      +1      -1      -1      )
s4      =       (       +1      -1      -1      +1      +1      -1      -1      +1      )
s5      =       (       +1      +1      +1      +1      -1      -1      -1      -1      )
s6      =       (       +1      -1      +1      -1      -1      +1      -1      +1      )
s7      =       (       +1      +1      -1      -1      -1      -1      +1      +1      )
s8      =       (       +1      -1      -1      +1      -1      +1      +1      -1      )

```

## Note

- The program uses the Hadamard algorithm to generate the Hadamard matrices.
- Signature sequences are calculated based on the values in the Hadamard matrices.
- The program assumes valid inputs for H1 and N.
- The generated matrices and signature sequences are displayed in the console.

## Author

This program was written by Poushali Chakraborty on August 13, 2019, at 7:47 PM.

THANK YOU :)
