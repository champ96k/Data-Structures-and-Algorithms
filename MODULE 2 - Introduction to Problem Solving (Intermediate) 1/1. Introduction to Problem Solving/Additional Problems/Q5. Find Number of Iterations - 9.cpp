// Find the total number of iterations in the following code snippet:

// NOTE: ^ denotes power, not Bitwise XOR.

for (int i = 1; i <= n; i++){
    for (int j = 1; j <= 3 ^ i; j++)
    {
        print(i + j);
    }
}


// - n^3 times.
// - 3 + 9 + 27 + .... + 3^n times.
// - 3^n times.
// - n * (3^n) times.
