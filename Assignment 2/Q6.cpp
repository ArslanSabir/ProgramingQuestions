/* Q.vi.	You are given an n x n 2D matrix representing an image.
Rotate the image by 180 degrees (anti-clockwise) but after sorting the n*n 2D array
*/

#include <bits/stdc++.h>
#define N 4
using namespace std;

void displayMatrix(
	int mat[N][N]);


void rotateMatrix(int mat[][N])
{

	for (int x = 0; x < N / 2; x++) {


		for (int y = x; y < N - x - 1; y++) {


			int temp = mat[x][y];

			// Move values from right to top
			mat[x][y] = mat[y][N - 1 - x];

			// Move values from bottom to right
			mat[y][N - 1 - x]
				= mat[N - 1 - x][N - 1 - y];

			// Move values from left to bottom
			mat[N - 1 - x][N - 1 - y]
				= mat[N - 1 - y][x];

			// Assign temp to left
			mat[N - 1 - y][x] = temp;
		}
	}
}

// Function to print the matrix
void displayMatrix(int mat[N][N])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout<<"\t"<< mat[i][j];

		printf("\n");
	}
	printf("\n");
}


int main()
{
	// Test Case 1
	int mat[N][N] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	};

	// Test Case 2
	/* int mat[N][N] = {
						{1, 2, 3},
						{4, 5, 6},
						{7, 8, 9}
					};
	*/

	// Test Case 3
	/*int mat[N][N] = {
					{1, 2},
					{4, 5}
				};*/

	// displayMatrix(mat);

	rotateMatrix(mat);

	rotateMatrix(mat);
	
	// Print rotated matrix
	displayMatrix(mat);

	return 0;
}

