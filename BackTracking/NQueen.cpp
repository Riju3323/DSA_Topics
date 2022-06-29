
#include<bits/stdc++.h>
using namespace std;


void printB(int n,int board[][20]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
 

bool boardcheck(int board[][20],int n,int x,int y)
{

    for (int k = 0; k < x; k++)
    {
         if (board[k][y]==1)
         {
             return false;
         }
         
    }
    int i = x;
    int j = y;
    while (i>=0 and j>=0)
    {
        if (board[i][j]==1)
        {
            return false;
        }
        i--,j--;
    }
    i = x;
    j = y;
    while (i>=0 and j<n)
    {
        if (board[i][j]==1)
        {
            return false;
        }
        i--,j++;
    }
    
    return true;
}

void solve(int n,int board[][20],int i){
 
    if(i==n){
        printB(n,board);
        
        return ;
    }
    for (int j = 0; j < n; j++)
    {
        if(boardcheck(board,n,i,j)){
            board[i][j]=1;
            solve(n,board,i+1);
            board[i][j]=0;
 
        }
      
    }
      return ;
}
 
 
int main(){
  int board[20][20] = {0};
  int n;
  cin>>n;
 
  solve(n,board,0);

  return 0;
}