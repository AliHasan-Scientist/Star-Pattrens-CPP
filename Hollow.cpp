
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int row,col;
    row=5;
    col=5;
    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i ==row||j==1||j==col)
            {
                cout << j;
            }
            
           
           else{
               cout<<" ";
           }
        }
  cout<<endl;
       
    }
}
