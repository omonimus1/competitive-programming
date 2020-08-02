// https://app.codesignal.com/arcade/intro/level-1/s5PbmwxfECC52PWyQ/solutions
bool checkPalindrome(std::string inputString) {
    int len = inputString.size();
    int end = len-1;
    for(int i =0; i < len /2; i++)
    {
        if(inputString[i] != inputString[end])
            return false;
        end--;
    }
    
    return true; 
}
