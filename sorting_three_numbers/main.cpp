#include <iostream>
using namespace std;

const int N = 3;

int main()
{
  int arr[N];
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (arr[i] < arr[j])
      {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
      }
    }
  }

  cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
  return 0;
}
