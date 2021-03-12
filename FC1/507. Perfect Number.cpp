class Solution {
public:
    bool checkPerfectNumber(int num) {
        long sum = 1;
        for(int i = 2; i < sqrt(num); ++i)
        {
            if(num%i == 0)
                sum += i+num/i;
        }
        if(num == 1)
            return false;
        if(sum == num)
            return true;
        else
            return false;
    }
};
