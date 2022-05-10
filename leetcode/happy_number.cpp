class Solution
{
private:
    std::unordered_map<int,bool> repeated;
public:
    bool isHappy(int n)
    {
        int ss{0};
        while(n!=0)
        {
            ss += (n%10) * (n%10);
            n /= 10;
        }
        if(ss == 1) return true;
        if(repeated[ss]) return false;
        repeated[ss] = true;
        return isHappy(ss);
    }
};
