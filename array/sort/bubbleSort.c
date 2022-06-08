#include<stdio.h>
#include<stdbool.h>
  void bubblesort(int arr[] , int size)
  {
  	int temp;
  	for (int i=0; i<size; i++)
  	{
  		for(int j=0; j<size-i-1; j++)
  		{
  			if (arr[j] > arr[j+1])
			  {
  			     temp = arr[j];
				  arr[j] = arr[j+1];
				  arr[j+1] = temp;	
			  }
		  }
	  }
  }
  void arrayBeforesort(int arr[] , int size)
  {
  	printf("Array Before sorting :\n");
  	for (int i=0; i<size ; i++)
  	{
  		printf("%d\t",arr[i]);
	  }
  }
  
   void arrayAfterssort(int arr[] , int size)
  {
  	printf("\nArray After sorting :\n");
  	for (int i=0; i<size ; i++)
  	{
  		printf("%d\t",arr[i]);
	  }
  }
  int main()
  {
  	int arr[] = {9,2,5,1,7,3};
  	int size = sizeof arr / sizeof arr[0];
  	arrayBeforesort(arr,size);
  	bubblesort(arr,size);
  	arrayAfterssort(arr,size);
  	return 0;
  }
  