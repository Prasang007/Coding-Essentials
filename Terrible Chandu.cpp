
#include <iostream>
#include <cstring>
using namespace std;
// Write your code here
void reverse(char str[]) {
	// cout<<str<<endl;
	int s_len = strlen(str);
	for(int i=0; i<s_len/2;i++){
		swap(str[i],str[s_len-i-1]);
	}
	cout<<str<<endl;
}
int main() {
	int num;
	cin >> num;										
	int i;
	char s[num][30]; 
	// char arrStr[30][num];
	for(i=0;i<num;i++) {
		cin>>s[i];
		reverse(s[i]);
	}
	return 0;		
}
