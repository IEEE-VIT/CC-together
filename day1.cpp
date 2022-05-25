/*
  First Repeating element

  Given an integer array A of size N, find the first repeating element in 
  it. We need to find the element that occurs more than once and whose index 
  of first occurrence is smallest. If there is no repeating element, 
  return -1.

  Question link:
  https://www.interviewbit.com/problems/first-repeating-element/
*/


int Solution::solve(vector<int> &A) {
    // unordered set to store values encountered
    unordered_set<int> occurence;

    // -1 to indicate no repeating element
    int value = -1;

    // iterating from the end of the array 
    for(int i = A.size() - 1; i >= 0; i--){
        // if element already found, then new first repeating element
        if(occurence.find(A[i]) != occurence.end()){
            value = A[i];
        }
        else {
            occurence.insert(A[i]);
        }
    }

    return value;
}

/* 

Time complexity = O(n), since theres one for loop that iterates over A
Space complexity = O(n), unordered set 

*/