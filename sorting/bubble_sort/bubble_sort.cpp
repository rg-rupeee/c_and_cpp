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
 * @brief Bubble Sort
 *
 * @param v
 *
 * Worst Space Complexity: O(1)
 *
 * Worst Time Complexity : O(n * n)
 * Average Time Complexity : O(n * n)
 * Best Time Complexity : O(1)
 */
void bubbleSort(vector<int> &v)
{
  int i, j, n;
  n = v.size();
  for (i = 0; i < n; i++)
  {
    bool isSorted = true;
    for (j = 0; j < n - i - 1; j++)
    {
      if (v[j] > v[j + 1])
      {
        swap(v[j], v[j + 1]);
        isSorted = false;
      }
    }
    if (isSorted)
    {
      break;
    }
  }
}

int main()
{
  vector<int> v;
  takeInputSingleline(v);

  cout << "\nArray Before Sorting" << endl;
  print(v);

  bubbleSort(v);

  cout << "\nArray After Using Bubble Sort" << endl;
  print(v);

  return 0;
}
