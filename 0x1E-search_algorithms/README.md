# Search Algorithms
Search algorithms are methods or techniques used to find a particular item or element within a collection of data.
The goal of a search algorithm is to efficiently locate the desired item, minimizing the number of comparisons or operations required to find it. The efficiency of a search algorithm is often measured in terms of time complexity, which describes how the execution time of the algorithm grows as the size of the input data increases.
## Various types of search Algorithms
** Linear Search: 
Involves iterating through each element in the collection until the target item is found or the end of the collection is reached. Linear search is simple but may not be efficient for large collections.
** Binary Search:
Applicable only to sorted collections, binary search repeatedly divides the search interval in half until the target item is found or the interval becomes empty. Binary search is more efficient than linear search for sorted collections and has a time complexity of O(log n).
## Space Complexity
Space complexity is the memory required by an algorithm to execute a program and produce output
It is expressed in Big O (O(n), O(1)).
Auxillary Space is the temporary space (excluding the input size) allocated by the algorithm to solve the problem
Space complexity includes both Auxilary space and space used by input
`Space complexity = Input size + Auxillary Space`

*** Examples illustrating Space complexity
```
def addNum(n1, n2): # auxillary space
        sum = n1 + n2
        return sum #auxiillary space
```
Space is estimated by the size in byte the variable will take.
Here the auxillary space are the `function call` and the `return statement`
n1 -> 4bytes
n2 -> 4bytes
sum -> 4bytes
Aux Sp -> 4bytes(assumed)
Total --> 16bytes
No matter the value of n1 and n2, it will always occupy 4bytes each in the memory and the total byte will always be 16bytes
The input size will constantly be 16bytes(constant space)
Therefore the space complexity of this algrithm will be represented as `O(1)` because the space required does not depend on the size of the input(n1 and n2)

```
    int sumOfNum(int *arr, int n) {
        int sum = 0
        for(i = 0; i > n; i++)
        {
            sum = sum + arr[i];
        }
        return(sum)
    }

```