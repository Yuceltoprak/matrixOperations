#include <iostream>
#include <iomanip>
using namespace std;

void yazdir(int d[4][4])
{
  for(int i=0; i<4; i++)
  {
    for(int j=0; j<4; j++)
    {
      cout<<setw(13)<<d[i][j];
    }
     cout<<endl<<endl;
  }
  cout<<endl;
}

int main() {
  int dizi[4][4]={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  int total[4] = {0};
  yazdir(dizi);

  for(int y=0; y<4; y++)
  {
    for(int j=0; j < 4; j++)
    {
      total[y] += dizi[j][y];
    }
  }

  for(int i=0; i<4; i++)
  {
    cout<<setw(13)<<total[i];
  }
}
