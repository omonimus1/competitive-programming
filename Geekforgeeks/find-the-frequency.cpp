// https://practice.geeksforgeeks.org/problems/find-the-frequency/1
// Function solution 
int findFrequency(vector<int> v, int x){
    return count(v.begin(), v.end(), x);
    /*
    What does count() do:
        long long frequency=0;
        for(int i =0; i<v.size(); i++)
        {
            if(v[i] == x)
                frequency++;
        }
        
        return frequency;
    */
}