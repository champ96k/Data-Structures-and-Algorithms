
# Begin champ pro tips


###### By looking at the constraints of a problem, we can often "guess" the solution.

##### Common time complexities

Let n be the main variable in the problem.

  - If n ≤ 12, the time complexity can be O(n!).
  - If n ≤ 25, the time complexity can be O(2n).
  - If n ≤ 100, the time complexity can be O(n4).
  - If n ≤ 500, the time complexity can be O(n3).
  - If n ≤ 104, the time complexity can be O(n2).
  - If n ≤ 106, the time complexity can be O(n log n).
  - If n ≤ 108, the time complexity can be O(n).
  - If n > 108, the time complexity can be O(log n) or O(1).
  
 #### The following table shows the basic idea about the number of elements and associated time complexity. You have a big input size with 5000 elements, you are writing your code with O(n3) complexity. It is of no use, you will get time limit exceeded error even though your logic is correct.

 ##  Input Size (n)	                      Time Complexity
   
     If less than 11 input elements	       O(n!)
     If less than 24 input elements	       O(2n)
     if less than 100 input elements       O(n4).
     If less than 300 input elements	     O(n3)
     If less than 5000 input elements	     O(n2)
     If less than 10^6 input elements	     O(n log n)
     If less than 10^7 input elements	     O(n)
     If less than 2^10^7 input elements	   O(log n)
     If n > 10^8, the time complexity      O(log n) or O(1).
     
     
##     Complexity	Remarks

    O(1)	      Constant time algorithm, uses a direct formula (no loops)
    O(log n)	  Logarithmic, often halves the size of the input at each iteration until it reaches 1 (so number of iterations is about log2n)
    O(√n)   	  Usually a single loop from 1 to √n
    O(n)	      Usually a single loop from 1 to n
    O(n log n)	Time complexity of efficient sorting algorithms (n = number of elements)
    O(n2)	      Usually two nested loops
    O(n3)	      Usually three nested loops
    O(2n)	      Often iterates through all subsets of the input elements (which are n in number)
    O(n!)	      Often iterates through all permutations of the input elements (which are n in number)
  
##### Examples of each common time complexity

    -To give a very rough idea consider that 1million instructions will be executed per second. Considering time limit to be 1sec.
    - max value of n tme complexity

  - O(n!) [Factorial time]: Permutations of 1 ... n
  - O(2n) [Exponential time]: Exhaust all subsets of an array of size n
  - O(n3) [Cubic time]: Exhaust all triangles with side length less than n
  - O(n2) [Quadratic time]: Slow comparison-based sorting (eg. Bubble Sort, Insertion Sort, Selection Sort)
  - O(n log n) [Linearithmic time]: Fast comparison-based sorting (eg. Merge Sort)
  - O(n) [Linear time]: Linear Search (Finding maximum/minimum element in a 1D array), Counting Sort
  - O(log n) [Logarithmic time]: Binary Search, finding GCD (Greatest Common Divisor) using Euclidean Algorithm
  - O(1) [Constant time]: Calculation (eg. Solving linear equations in one unknown)
  
 ###### In case time limit is x seconds then the algo's worst case acceptable complexity will be multiplied by a factor of x.
 
 




