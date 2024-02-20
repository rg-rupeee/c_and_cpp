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
 * @brief Insertion Sort
 *
 * @param v
 *
 * Worst Space Complexity: O(1)
 *
 * Worst Time Complexity : O(n * n)
 * Average Time Complexity : O(n * n)
 * Best Time Complexity : O(1)
 */
void insertionSort(vector<int> &v)
{
  cout << "Sorting Array" << endl;
  int i, j, n, cur;
  n = v.size();
  for (i = 1; i < n; i++)
  {
    j = i - 1;
    cur = v[i];
    while (j >= 0 && cur < v[j])
    {
      v[j + 1] = v[j];
      j--;
    }
    v[j+1] = cur;

    print(v);
  }
}

/*
5 2 4 3 1

2 5 4 3 1

*/

int main()
{
  vector<int> v;
  takeInputSingleline(v);

  cout << "\nArray Before Sorting" << endl;
  print(v);

  insertionSort(v);

  cout << "\nArray After Using Insertion Sort" << endl;
  print(v);

  return 0;
}
