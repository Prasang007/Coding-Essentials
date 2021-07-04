// C++ program to print the cumulative frequency
// according to the order given
#include <bits/stdc++.h>
using namespace std;

// Function to print the cumulative frequency
// according to the order given
void countFreq(int a[], int n)
{
	// Insert elements and their
	// frequencies in hash map.
	unordered_map<int, int> hm;
	for (int i=0; i<n; i++)
		hm[a[i]]++;
	int cumul = 0;
	
// traverse in the array
for(int i=0;i<n;i++)
{
	// add the frequencies
	cumul += hm[a[i]];
		
	// if the element has not been
	// visited previously
	if(hm[a[i]])
	{
		cout << a[i] << "->" << cumul << endl;
	}
	// mark the hash 0
	// as the element's cumulative frequency
	// has been printed
	hm[a[i]]=0;
}
}

// Driver Code
int main()
{
	int a[] = {1, 3, 2, 4, 2, 1};
	int n = sizeof(a)/sizeof(a[0]);
	countFreq(a, n);
	return 0;
}
