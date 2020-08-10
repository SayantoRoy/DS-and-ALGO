#include <iostream>
#include <string>
using namespace std;

int ArrayChallenge(int arr[], int n) {

  if(n==1)
  {
    return -1;
  }

  int i =0;
  int maxs = -1;

  while(i < n-1)
  {
    while((i<n-1) && (arr[i+1] <= arr[i]))
    {
      i++;
    }

    if(i == n-1)
    {
      break;
    }

    int s = i++;

    while((i<n) && (arr[i] >= arr[i-1]))
    {
      i++;
    }

    int e = i -1;
    int profit = arr[e] - arr[s];
    if(profit > maxs)
    {
      maxs = profit;
    }
  }
  return maxs;

}

int main(void) {

  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set
     it equal to the stdin to test your code with arrays. */

     int n;
     cin>>n;
  int A[n];
  for(int i =0 ;i<n;i++)
  {
      int k;
      cin>>k;
      A[i] = k;
  }
  cout <<"The maximum profit that can be made is : \n" <<ArrayChallenge(A, n);
  return 0;

}
