// https://app.codesignal.com/arcade/intro/level-2/xzKiBHjhoinnpdh6m
int adjacentElementsProduct(std::vector<int> inputArray) {
    int biggest = INT_MIN;
    int product; 
    for(int i=0; i < inputArray.size()-1; i++)
    {
        product = inputArray[i]*inputArray[i+1];
        if(product > biggest)
            biggest = product;
    }
    return biggest;
}
