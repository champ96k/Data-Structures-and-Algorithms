// Problem Description
// You will be given an integer n. You need to return the count of prime numbers less than or equal to n.

// Problem Constraints
// 0 <= n <= 10^3

// Input Format
// Single input parameter n in function.

// Output Format
// Return the count of prime numbers less than or equal to n.

// Example Input
// Input 1:
// 19
// Input 2:
// 1

// Example Output
// Output 1:
// 8
// Output 2:
// 0

// Example Explanation
// Explanation 1:
// Primes <= 19 are 2, 3, 5, 7, 11, 13, 17, 19
// Explanation 2:
// There are no primes <= 1

// Expected Output
// Provide sample input and click run to see the correct output for the provided input. Use this to improve your problem understanding and test edge cases

int factorCount(int N)
{
    int factor = 0;
    for (int i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            if (i == N / i)
            {
                factor += 1;
            }
            else
            {
                factor += 2;
            }
        }
    }
    return factor;
}

int Solution::solve(int A)
{

    if (A <= 1)
    {
        return 0;
    }

    int count = 0;

    while (A)
    {

        int result = factorCount(A);
        if (result == 2)
        {
            count++;
        }

        A--;
    }
    return count;
}
