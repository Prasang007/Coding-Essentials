/**
IP
6
[2,2,2,1,3,1,3]
OP
1 1 2 2 2 3 3 

*/
#include<iostream>
using namespace std;
int count[10], n, digit;  // count has the temp array used to store number of times a number repeats 

int main ()
{
    int maxi =0;
    cin>>n;
    for ( int i =0; i<n;i++){
        cin>>digit;
        if(digit>100){
            cout <<"out of b"  << endl;
        break;
        } else{
            maxi = maxi<digit?digit:maxi;
            ++count[digit];
        }
    }
    for ( int i =0; i<=maxi;i++){
        if(count[i]>0){
            for(int j=0;j<count[i];j++){
                cout<<i;
            }
        }       
    }
}