#include<iostream>
using namespace std;
int main(void)
{
  int i,N;
  int f,fm,fmm;
  cout << "N=";
  cin >> N;
  fmm = 0;
  fm = 1;
  switch (N)
  {
    case 0:
    {
      f = 0;
      break;
    }
    case 1:
    {
      f = 1;
      break;
    }
    default:
    {
      for (i=2; i <= N; i++)
      {
	f = fm + fmm;
	fmm = fm;
	fm = f;
      }
    }
  }
  
  cout << "f_{" << N << "} = " << f << endl;
  return 0;
}