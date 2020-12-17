/*Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 */
 *Leetcode 977*
 
 class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for(int i=0;i<A.size();i++)
        {
            A[i]=abs(A[i]*A[i]);
        }
        sort(A.begin(),A.end());
         return A;
    }
};
