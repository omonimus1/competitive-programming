/* A string is Isogram when a letter does not occcurs more than once. 
machine: is isogram
geeks : is NOT isogram (because the 'e' occurs more than once)
*/
bool isIsogram(string s)
{
    for(int i =0; i < s.size(); i++)
    {
        for(int j=i+1; j<s.size(); j++)
        {
            if(s[i] == s[j])
                return false; 
        }
    }
    return true; 
}