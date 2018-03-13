#include<bits/stdc++.h>
using namespace std;
 
// Returns true if str1 is smaller than str2.
bool compareNumbers(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();
 
    if (n1 < n2)
       return true;
    if (n2 < n1)
       return false;
 
    // If lengths are same
    for (int i=0; i<n1; i++)
    {
       if (str1[i] < str2[i])
          return true;
       if (str1[i] > str2[i])
          return false;
    }
 
    return false;
}

void sortLargeNumbers(string arr[], int n)
{
   sort(arr, arr+n, compareNumbers);
}

int main()
{
    string arr[] = {"1", "7", "490", "100", "1", "2", "15"};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    sortLargeNumbers(arr, n);
 
    for (int i=0; i<n; i++)
      cout << arr[i] << " ";
 
    return 0;
}
