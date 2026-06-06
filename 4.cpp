#include <bits/stdc++.h> 
 
using namespace std; 
 
bool isSorted(int arr[], int n) { 
  for (int i = 0; i < n; i++) { 
    for (int j = i + 1; j < n; j++) { 
      if (arr[j] < arr[i]) 
        return false; 
    } 
  } 
 
  return true; 
} 
 //directlu  sort(arr.begin(),arr.end()); for sorting the array from begin to end
int main() { 
 
  int arr[] = {1, 2, 3, 4, 5}, n = 5; 
  bool ans = isSorted(arr, n); 
  if (ans) //direct for if(ans==true)
  cout << "True" << ' '; 
  else cout << "False" << endl; 
