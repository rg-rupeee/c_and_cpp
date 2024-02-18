#include <bits/stdc++.h>
using namespace std;

void takeInput(vector<int> &v)
{
  cout << "Enter elements (press Enter to stop):\n";
  string input;
  while (true)
  {
    getline(cin, input);
    if (input.empty())
    {
      break;
    }
    int num = stoi(input);
    v.push_back(num);
  }
}

void takeInputSingleline(vector<int> &v)
{
  cout << "Enter elements separated by spaces (press Enter to stop):\n";
  string line;
  getline(cin, line);

  istringstream iss(line);
  int num;
  while (iss >> num)
  {
    v.push_back(num);
  }
}

void print(vector<int> &v)
{
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;
}

/**
 * @brief Selection Sort
 * 
 * @param v 
 * 
 * Space Complexity: O(1)
 * 
 * Worst Time Complexity : O(n * n)
 * Average Time Complexity : O(n * n)
 * Best Time Complexity : O(n * n)
 */
void selectionSort(vector<int> &v)
{
  int i, j, n;
  n = v.size();
  for (i = 0; i < n - 1; i++)
  {
    int mn = v[i];
    int mnIndex = i;
    for (j = i + 1; j < n; j++)
    {
      if (v[j] < mn)
      {
        mn = v[j];
        mnIndex = j;
      }
    }
    swap(v[i], v[mnIndex]);
  }
}

int main()
{
  vector<int> v;
  takeInputSingleline(v);

  cout<<"\nArray Before Sorting"<<endl;
  print(v);

  selectionSort(v);
  
  cout<<"\nArray After Using Selection Sort"<<endl;
  print(v);

  return 0;
}