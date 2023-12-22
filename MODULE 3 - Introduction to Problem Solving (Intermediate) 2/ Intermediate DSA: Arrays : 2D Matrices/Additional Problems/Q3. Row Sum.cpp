// Problem Constraints
// 1 <= A.size() <= 103

// 1 <= A[i].size() <= 103

// 1 <= A[i][j] <= 103



// Input Format
// First argument A is a 2D array of integers.(2D matrix).



// Output Format
// Return an array containing row-wise sums of original matrix.



// Example Input
// Input 1:

// [1,2,3,4]
// [5,6,7,8]
// [9,2,3,4]


// Example Output
// Output 1:

// [10,26,18]


// Example Explanation
// Explanation 1

// Row 1 = 1+2+3+4 = 10
// Row 2 = 5+6+7+8 = 26
// Row 3 = 9+2+3+4 = 18


vector<int> Solution::solve(vector<vector<int> > &A) {

    vector<int>v;

    int row = A.size();
    int col = A[0].size();

    for(int i=0;i<row;i++) {
        int sum = 0;
        for(int j=0;j<col;j++) {
            sum = sum + A[i][j];
        }
        v.push_back(sum);
    }

    return v;

}
