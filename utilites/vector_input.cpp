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

int main()
{
  vector<int> v;
  takeInputSingleline(v);
  print(v);
  return 0;
}