#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main ()
{
  int n, i, j, k;
  cout.precision (4);
  cout.setf (ios::fixed);
  cin >> n;
  float a[n][n];
  double det = 1;
  int flag = 0;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      cin >> a[i][j];
  for (i = 0; i < n; i++)
    for (k = i + 1; k < n; k++)
      if (abs (a[i][i]) < abs (a[k][i]))
	{
	  flag++;
	  for (j = 0; j < n; j++)
	    {
	      double temp = a[i][j];
	      a[i][j] = a[k][j];
	      a[k][j] = temp;
	    }
	}
  for (i = 0; i < n - 1; i++)
    for (k = i + 1; k < n; k++)
      {
	double t = a[k][i] / a[i][i];
	for (j = 0; j < n; j++)
	  a[k][j] = a[k][j] - t * a[i][j];
      }
  for (i = 0; i < n; i++)
    {
      det = det * a[i][i];
    }
  if (flag % 2 == 0)
    {
      det = det;
    }
  else
    {
      det = -det;
    }
  cout<< det;
  return 0;
}
