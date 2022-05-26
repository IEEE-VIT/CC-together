int Solution::solve(vector<int> &v)
{
    int ans = -1;
    // iterate through vector to find first repeating element
    for (int i = 0; i < v.size(); i++)
    {
        // find element starting from the next element of i
        if (find(v.begin() + i + 1, v.end(), v[i]) != v.end())
        {
            ans = v[i];
            break;
        }
    }
    return ans;
}
// time complexity: O(n) for n elements in vector
// space complexity: O(1) for ans