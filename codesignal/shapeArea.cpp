//https://app.codesignal.com/arcade/intro/level-2/yuGuHvcCaFCKk56rJ/solutions
int shapeArea(int n) {
    if(n==1)
        return 1;
    else {
        return shapeArea(n-1) + (4 * (n-1));
    }
}
 