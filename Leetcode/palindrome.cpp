class Solution {
public:
    bool isPalindrome(int x) {
        string a = to_string(x);
        if(a.size() ==1)
            return true;
        if(a.size()==2)
        {
            if(a[0] == a[1])
                return true;
            return false; 
        }
        
        int end =  a.size()-1;
        for(int i =0; i <a.size()/2; i++)
        {
            if(a[i] != a[end])
                return false;
            end--;
        }
        return true;
    }
};