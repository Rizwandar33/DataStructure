#include <stdio.h>
 void insertion_sort(int arr[] , int size){
 	for (int i=0; i<size; i++){
 		int temp = arr[i];
 		int j = i-1;
 		while(j>=0 && arr[j] > temp  ){
 			arr[j+1] = arr[j];
 			j--;
		 }
	   arr[j+1]=temp;
	 }
 }
  void displaybeforesort(int arr[] , int size)
  {
  	printf("The Array elements before sorting :\n");
  	for (int i=0; i<size; i++){
  		printf("%d\t",arr[i]);
	  }
  }
  void displayaftersort(int arr[] , int size)
  {
  	printf("\nThe Array elements After sorting :\n");
  	for (int i=0; i<size; i++){
  		printf("%d\t",arr[i]);
	  }
  }
  int main(){
  	int arr[] = {5,3,7,2,1,8,4};
  	int size = sizeof arr / sizeof arr[0];
  	displaybeforesort(arr,size);
  	insertion_sort(arr,size);
  	displayaftersort(arr,size);
  	return 0;
  }