class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> arr(n);

        for(int i = 0 ; i < n ; i++)
        { 
            if(( (i+1) % 3 == 0) && ( (i+1) % 5 == 0))
            {
                arr.at(i) = \FizzBuzz\;
                
            }
            else if( (i+1) % 3 == 0)
            {
                arr.at(i) = \Fizz\;
            }
            else if( (i+1) % 5 == 0)
            {
                arr.at(i) = \Buzz\;
            }
            else
            {
                arr.at(i) = to_string((i+1));
            }
        }

        return arr;
    }
};