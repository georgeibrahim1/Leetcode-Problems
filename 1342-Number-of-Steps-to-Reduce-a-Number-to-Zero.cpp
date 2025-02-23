class Solution {
public:
    int NumofSteps = 0;
    int numberOfSteps(int num) {
        if(num == 0)
        {
            return NumofSteps;
        }
        else if(num % 2 == 0)
        {
            num /= 2 ;
            NumofSteps += 1;
            numberOfSteps(num);
        }
        else
        {
            num -= 1;
            NumofSteps += 1;
            numberOfSteps(num);
        }

        return NumofSteps;
    }
};