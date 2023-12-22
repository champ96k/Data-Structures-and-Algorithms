// Problem Description
// Given a number A. Return 1 if A is prime and return 0 if not.

// Note :
// The value of A can cross the range of Integer.

// Problem Constraints
// 1 <= A <= 109

// Input Format
// The first argument is a single integer A.

// Output Format
// Return 1 if A is prime else return 0.

// Example Input
// Input 1:
// A = 5
// Input 2:

// A = 10

// Example Output
// Output 1:
// 1
// Output 2:

// 0

// Example Explanation
// Explanation 1:
// 5 is a prime number.
// Explanation 2:

// 10 is not a prime number.

// Expected Output
// Provide sample input and click run to see the correct output for the provided input. Use this to improve your problem understanding and test edge cases

int getFactor(int A)
{

    int factor = 0;

    for (int i = 1; i * i <= A; i++)
    {
        if (A % i == 0)
        {
            if (i == (A / i))
            {
                factor = factor + 1;
            }
            else
            {
                factor = factor + 2;
            }
        }
    }

    return factor;
}

int Solution::solve(int A)
{

    int factorCount = getFactor(A);

    if (factorCount == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
