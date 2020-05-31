#include <iostream>
#include <vector>
using namespace std;

int main() {

cout<<"aa";
int n = 5; int m = 6;
  vector<vector <int> > board(n , vector<int> (m));

 /* for(int i=0;i<n;i++)
  {
    for(int j =0;j<m;j++)
    {
      if(j==1 && i!=n-1)
      {
        board[i][j] = 1;
      }
      else if (i==n-1 && j==4)
      {
        board[i][j] = 1;
      }
      else
      {
        board[i][j] = 0;
      }
    }
  }*/

  cout<<board[0][0];



  cout << "Hello!" << "\n";
}
