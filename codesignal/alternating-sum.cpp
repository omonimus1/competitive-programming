// https://app.codesignal.com/arcade/intro/level-4/cC5QuL9fqvZjXJsW9/solutions
std::vector<int> alternatingSums(std::vector<int> a) {
    int sum_weight_first_array = 0;
    int sum_weight_second_array = 0;

    for(int i =0; i < a.size();i++)
    {
        if(i % 2 ==0)
            sum_weight_first_array += a[i];
        else
            sum_weight_second_array += a[i];
    }
    
    vector<int> result;
    result.push_back(sum_weight_first_array);
    result.push_back(sum_weight_second_array);
    return result;
}