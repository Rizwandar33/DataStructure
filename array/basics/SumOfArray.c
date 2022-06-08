#include <stdio.h>
  void sum(int arr[] , int size)
  {
	int sum = 0;
	for(int i=0; i<size; i++)
	{
		sum = sum + arr[i];
	}
	printf("The sum of an array is : %d",sum);
  }
  int main()
  {
  	int arr[] = {3,4,5,6,7,8};
  	int size = sizeof arr / sizeof arr[0];
  	sum(arr,size);
  	return 0;
  }
 