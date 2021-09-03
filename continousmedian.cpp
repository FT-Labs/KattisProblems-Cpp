#include <bits/stdc++.h>
using namespace std;


// Insertion sort also works on this algorithm, however has a time complexity of O(n**2). Usint heaps will reduce this time complexity. STL Priority queue is goint to be used.

long tot = 0;

void getMedians(int arr[], int n)
{
	// max heap to store smaller half elements
	priority_queue<int> maxHeapSmaller;

	//min heap to store greater half elements
	priority_queue<int, vector<int>, greater<int>> minHeapGreater;

	int med = arr[0]; //Get the first median
	tot += med;
	maxHeapSmaller.push(arr[0]);


	/*
	   At any time heaps need to be balanced. Therefore their sizes must be differ by maximum of 1.
	   If heaps are balanced, declare median as average of minHeapRight.top() and maxHeapLeft.top().
	   If they are unbalanced, then  the median is defined as top element of heap with larger size. */

	for(int i=1; i<n; i++)
	{
		int cur = arr[i];

		// Case 1: maxHeap has more elements
		if(maxHeapSmaller.size() > minHeapGreater.size())
		{
			if(cur < med)
			{
				minHeapGreater.push(maxHeapSmaller.top());
				maxHeapSmaller.pop();
				maxHeapSmaller.push(cur);
			}
			else
				minHeapGreater.push(cur);

			med = (minHeapGreater.top() + maxHeapSmaller.top())/2.0;
		}
		else if(minHeapGreater.size() == maxHeapSmaller.size())
		{
			if(cur < med)
			{
				maxHeapSmaller.push(cur);
				med = (int) maxHeapSmaller.top();
			}
			else
			{
				minHeapGreater.push(cur);
				med = (int) minHeapGreater.top();
			}
		}
		else //Last case: Greater half elements has more size than smaller elements
		{
			if(cur > med)
			{
				maxHeapSmaller.push(minHeapGreater.top());
				minHeapGreater.pop();
				minHeapGreater.push(cur);
			}
			else
			{
				maxHeapSmaller.push(cur);
			}

			med = (maxHeapSmaller.top() + minHeapGreater.top())/2.0;
		}

		tot += med;
	}
}

int arr[100001];

int main()
{
	int t; cin >> t;

	while(t--)
	{
		int n; cin >> n;

		for(int i=0; i<n; i++)
			cin >> arr[i];

		getMedians(arr, n);

		cout << ::tot << endl;

		::tot = 0;


	}


	return 0;
}
