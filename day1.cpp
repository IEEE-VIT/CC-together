int Solution::solve(vector<int> &A)
{
    unordered_map<int, int> map;

    for (auto num : A)
    {
        map[num]++;
    }

    for (auto num : A)
    {
        if (map[num] > 1)
        {
            return num;
        }
    }

    return -1;
}