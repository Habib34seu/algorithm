#include<bits/stdc++.h>

using namespace std;



int kadaneAlgo(int arr[], int &start, int &end, int n) {    //find max sum and starting and ending location
   int sum = 0, maxSum = INT_MIN;

   end = -1;    //at first no place is selected

   int tempStart = 0;    //starting from 0

   for (int i = 0; i < n; i++) {
      sum += arr[i];
      if (sum < 0) {
         sum = 0;
         tempStart = i+1;
      }else if (sum > maxSum) {     //get maximum sum, and update start and end index
         maxSum = sum;
         start = tempStart;
         end = i;
      }
   }

   if (end != -1)
      return maxSum;
   //when all elements are negative in the array
   maxSum = arr[0];
   start = end = 0;

   // Find the maximum element in array
   for (int i = 1; i < n; i++) {
      if (arr[i] > maxSum) {
         maxSum = arr[i];
         start = end = i;
      }
   }
   return maxSum;
}
int main() {
	int N;
	cin>>N;
	int M[N][N];
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin>>M[i][j];
		}
	}
 
   int maxSum = INT_MIN, endLeft, endRight, endTop, endBottom;

   int left, right;
   int temp[N], sum, start, end;

   for (left = 0; left < N; left++) {
      for(int i = 0; i<N; i++)//temp initially holds all 0
         temp[i] = 0;

      for (right = left; right < N; ++right) {
         for (int i = 0; i < N; ++i)    //for each row, find the sum
            temp[i] += M[i][right];
         sum = kadaneAlgo(temp, start, end, N);    //find sum of rectangle (top, left) and (bottom right)

         if (sum > maxSum) {    //find maximum value of sum, then update corner points
            maxSum = sum;
            endLeft = left;
            endRight = right;
            endTop = start;
            endBottom = end;
         }
      }
   }

   cout << "(Top, Left) ("<<endTop<<", "<<endLeft<<")"<<endl;
   cout << "(Bottom, Right) ("<<endBottom<<", "<<endRight<<")"<<endl;
   cout << "The max sum is: "<< maxSum;
   
}
