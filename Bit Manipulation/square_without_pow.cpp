#include<bits/stdc++.h>
using namespace std;
// calculate the square of a number withou using <<, *, +

int calcSquare(int n){
    if(n==0){
        return 0;
    }

    if(n<0){
        n = -n;
    }

    int x = n>>1;

    if (n & 1)
        return ((calcSquare(x) << 2) + (x << 2) + 1);
    else // If n is even
        return (calcSquare(x) << 2);
}
int main(void){
    int n;
    std::cin >> n;

    int x = calcSquare(n);
    std::cout<<x<<endl;

}