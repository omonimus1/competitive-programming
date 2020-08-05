//https://app.codesignal.com/interview-practice/task/HmNvEkfFShPhREMn4/
bool isListPalindrome(ListNode<int> * l) {
    string s;
    
    while(l!= NULL)
    {
        s.push_back((char) l->value);
        l = l->next;
    }
    
    int len = s.size();
    int end = len-1;
    for(int i =0; i < len/2; i++)
    {
        if(s[i] != s[end])
            return false;
        end--;
    }
    
    return true; 
}