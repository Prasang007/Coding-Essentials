#include<iostream>
using namespace std;
int count[10], n, digit;
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