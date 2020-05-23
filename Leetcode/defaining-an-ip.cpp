// https://leetcode.com/problems/defanging-an-ip-address/submissions/
class Solution {
public:
    string defangIPaddr(string address) {
        string final_ip = "";
        for(int i =0; i< address.size(); i++)
        {
            if(address[i] == '.')
                // append() : append a string
                final_ip.append("[.]");
            else
                // push_back() : append a char
                final_ip.push_back(address[i]);
        }
        return final_ip;
    }
};