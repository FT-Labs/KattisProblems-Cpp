#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int findAdjacentes(int x, int y, queue<int>& xQ, queue<int>& yQ, vector<vector<int>>& passedPoints)
{
	int nextPoint = 0;

	//Starting simple bfs


}


bool passedPoints[1][1];


int FindPath(const int nStartX, const int nStartY,
             const int nTargetX, const int nTargetY,
             const unsigned char* pMap, const int nMapWidth, const int nMapHeight,
             int* pOutBuffer, const int nOutBufferSize)
{
	// Could not use simple 2d boolean array with memset because passing a 2d bool array to a function is problematic.
	// Since vector<bool> has no initializer and std::fill could not be used, i changed the array to integer.
	// I know this consumes huge memory, another implementation can be 2 nested for loops with a 2d boolean vector to set them all to 0. This would use
	// much less space. If an upper bound for question was given, i would declare them globally and have no problem changing global 2d bool array in the function.
	vector<vector<int>> passedPoints(nMapWidth, vector<int>(nMapHeight,0));

	queue<int> xQ; xQ.push(nStartX);
	queue<int> yQ; yQ.push(nStartY);

	bool isComplete = false;
	int leftPoints = 1;
	int nextPoints = 0;
	int counter = 0;

	int x, y;
	while(!xQ.empty() || !yQ.empty())
	{
		x = xQ.front(); xQ.pop();
		y = yQ.front(); yQ.pop();

		nextPoints += findAdjacentes();
		leftPoints--;

		if(x == nTargetX && y == nTargetY)
			return counter;

		if(leftPoints == 0)
		{
			leftPoints = nextPoints;
			nextPoints = 0;
			counter++;
		}
	}

	return -1;
}
