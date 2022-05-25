class Solution
{
public:
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
    {

        int n = l.size();

        vector<bool> result;

        for (int i = 0; i < n; i++)
        {
            int lower = l[i];
            int upper = r[i];
            int size = upper - lower + 1;
            int temp[size];
            int count = 0;
            for (int j = lower; j <= upper; j++)
            {
                temp[count] = nums[j];
                count++;
            }
            sort(temp, temp + size);
            int diff = temp[1] - temp[0];
            bool found = 0;
            for (int j = 2; j < size; j++)
            {
                if (temp[j] - temp[j - 1] != diff)
                {
                    result.push_back(false);
                    found = 1;
                    break;
                }
                diff = temp[j] - temp[j - 1];
            }
            if (found)
                continue;
            result.push_back(true);
        }

        return result;
    }
};