//Глупая сортировка
#include <iostream>

using namespace std;

int main()
{
  int N = 5;
  int A[N] = {5,4,3,2,1};
  int i = 0;

  // bool is_sorted = true;
  while(i < N-1){
    if (A[i] > A[i+1]){
	    // is_sorted = false;
	    A[i]^=A[i+1];
	    A[i+1]^=A[i];
	    A[i]^=A[i+1];
	    i = 0; // Если снова беспорядок сбросим цикл
    } else i++;
  }
  i = 0;
  while(i < N) cout << A[i++] <<'\t';
  cout << '\n';
  return 0;
}
