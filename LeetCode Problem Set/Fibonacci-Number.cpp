class Solution {
public:
    int fib(int n) {
        double a=(1+sqrt(5))/2.0;
        double b=(1-sqrt(5))/2.0;
        return round((pow(a,n)-pow(b,n))/sqrt(5));
    }
};