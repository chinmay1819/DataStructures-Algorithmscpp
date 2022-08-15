
#include <bits/stdc++.h>
using namespace std;



int knapSack(int W, int wt[], int val[], int n)
{

	
	if (n == 0 || W == 0)
		return 0;

	
	
	
	
	if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);

	
	
	
	else
		return max(
			val[n - 1]
				+ knapSack(W - wt[n - 1],
						wt, val, n - 1),
			knapSack(W, wt, val, n - 1));
}


int main()
{
	int val[] = { 60, 50, 20 };
	int wt[] = { 20, 25, 5 };
	int W = 40;
	int n = sizeof(val) / sizeof(val[0]);
	cout << knapSack(W, wt, val, n)<<endl;
	return 0;
}


