#include<stdio.h>
#include<stdbool.h>
  bool linear_search(int arr[], int size , int x)
  {
  	bool flag = false;
  	for(int i=0; i<size; i++)
  	{
  		if(arr[i]==x)
  		{
  			flag = true;
  			break;
		  }
	  }
	  return flag;
  }
  int main()
  {
  	int arr[] = {1,2,3,4,5};
  	int size = sizeof arr / sizeof arr[0];
  	bool match_found = linear_search(arr,size,5);
  	if (match_found == true)
  	{
  		printf("number found");
	  }
	  else
	  {
	  	printf("number not found");
	  }
  	return 0;
  }