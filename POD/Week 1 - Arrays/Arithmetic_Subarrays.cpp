class Solution
{
public:
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
    {
        //vector to store answers
        vector<bool> ans;

        //for each subarray - O(m) where m is the length of l and r
        for (int i = 0; i < l.size(); i++)
        {
            //get indices to find subarray
            auto start = nums.begin() + l[i];
            auto end = nums.begin() + r[i] + 1;
            //declaring subarray
            vector<int> subarray(r[i] - l[i] + 1); 
            copy(start, end, subarray.begin());

            //sort subarray - O(xlogx) where x is the size of subarray
            sort(subarray.begin(), subarray.end());

            bool flag = true;

            //check if subarray is arithmetic - O(x) where x is the size of subarray
            for (int j = 0; j < subarray.size() - 1; j++)
            {
                //if difference between adjacent elements is not 1
                if (subarray[j + 1] - subarray[j] != subarray[1] - subarray[0])
                {
                    flag = false;
                    break;
                }
            }
            //push answer to vector
            ans.push_back(flag);
        }
        return ans;
    }
};

// time complexity: O(mxlogx)
// space complexity: O(mx) for answer and subarray vectors