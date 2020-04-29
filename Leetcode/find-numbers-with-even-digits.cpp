
//https://leetcode.com/explore/featured/card/fun-with-arrays/521/introduction/3237/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
         int single_number; 

        unsigned int counter = 0, number_of_digits;
        for(int i =0; i< nums.size(); i++)
        {
            number_of_digits = 0;
            single_number = nums[i];
            while(single_number > 0)
            {
                number_of_digits++;
                single_number /= 10;
            }
            if(number_of_digits % 2== 0)
                counter++;
        }
        return counter; 
    }
};