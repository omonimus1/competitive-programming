// https://leetcode.com/problems/count-number-of-teams/submissions/
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int len = rating.size();
        int solution = 0;
        for(int i = 0; i < len; i++)
        {
            for(int j=i+1; j < len; j++)
            {
                for(int k = j+1; k < len; k++)
                {
                    if(rating[i] < rating[j] && rating[j] < rating[k])
                        solution+=1;
                     if(rating[i] > rating[j] && rating[j] > rating[k])
                        solution+=1;
                }
            }
                
        }
        return solution; 
    }
};