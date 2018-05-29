#include <iostream>

void arrayAdd(int* arr, int s, int n);

int main ()
{
int arr[100];

  for (int i = 0; i < 100; i++)
  {
    arr[i] = i * i;
printf("The value of the %d element of the array is %d\n", i, arr[i]);
  }//end of for loop

  arrayAdd(arr, 100, 5);

} //end of int main


void arrayAdd(int arr[], int s, int n) {

    for (int i = 0; i < s; i++)
    { 
      arr[i] = i + n;
  printf("The value of the %d element of the array is now %d\n", i, arr[i]);
    } //end of for loop
} //end of function
