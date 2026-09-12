class Solution
{
public:
    int romanToInt(string s)
    {
        vector<pair<char, int>> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int total = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int cur = 0, next = 0;
            for (auto p : roman)
            {
                if (p.first == s[i])
                {
                    cur = p.second;
                }
            }
            if ((i + 1) < s.size())
            {
                for (auto p : roman)
                {
                    if (p.first == s[i + 1])
                    {
                        next = p.second;
                    }
                }
            }
            if (cur < next)
            {
                total -= cur;
            }
            else
            {
                total += cur;
            }
        }
        return total;
    }
};