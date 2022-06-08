#include<stdio.h>
 void selection_sort(int arr[] , int size)
  {
   	for(int i=0; i<size-1 ;i++)
 	{
 		int minimum = i;
 		for(int j=i+1; j<size; j++)
 		{
 			if (arr[j] < arr[minimum])
 			{
 				minimum=j;
			}
		}
     if (minimum != i)
       {
    	int temp = arr[minimum];
    	arr[minimum] = arr[i];
    	arr[i] = temp;
	   }
	}	
  }
  void ArrayBeforeSort(int arr[] , int size)
  {
  	printf("Array before sorting :\n");
  	for (int i=0; i<size; i++)
  	{
  		printf("%d\t",arr[i]);
	  }
  }
  void ArrayAfterSort(int arr[] , int size)
  {
  	printf("\nArray After sorting :\n");
  	for (int i=0; i<size; i++)
  	{
  		printf("%d\t",arr[i]);
	  }
  }
  int main()
  {
  	int arr[] = {8,9,3,5,1,4,2};
  	int size = sizeof arr / sizeof arr[0];
  	ArrayBeforeSort(arr,size);
  	selection_sort(arr,size);
  	ArrayAfterSort(arr,size);
  	return 0;
  }
    