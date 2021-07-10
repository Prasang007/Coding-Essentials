#include<iostream>
using namespace std;

int maxDistance(string S)
{
    int n = S.length();
    int l = 0, r = 0;

    for(int i = 0; i < n; i++){
        if (S[i] == 'L')
            l++;
        if (S[i] == 'R')
            r++;
    }

    return abs(n - (l+r)) +  abs(l-r));
}
int main() {
    string s ;
    maxDistance(s);
    return 0;
}