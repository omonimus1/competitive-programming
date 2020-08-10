//  https://app.codesignal.com/arcade/intro/level-4/ZCD7NQnED724bJtjN/solutions
std::vector<std::string> addBorder(std::vector<std::string> picture) {
    int row_content_size = picture[0].size();
    
    int number_of_stars = row_content_size+2;
    string row = "";
    for(int i =0; i < number_of_stars; i++)
        row.push_back('*');
    // Add stars row at the top
    vector<string>result;
    result.push_back(row);
    string word ="";
    for(int i =0; i < picture.size(); i++)
    {
        word ="*";
        word.append(picture[i]);
        word.push_back('*');
        result.push_back(word);
    }
    
    // Add last row;
    result.push_back(row);
    return result; 

}
