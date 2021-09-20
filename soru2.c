#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int i, j=1;
    int k =1;
    int arr[a];
    int arr2[a];
    int temp = -1;
    for(i=1; i<=a;i++){
       scanf("%d", &arr[i]);
    } 
    
    temp = arr[j];
    printf("\n");

	printf("%d " ,j);
	printf("%d " ,arr[k]);
    while(j<a && temp != j ){
    	temp = arr[temp];
        arr2[k]=temp;
	
    	if(temp == j){
	  		j++;
	  		printf("\n");
	  		temp = arr[j];
	  		printf("%d " ,j); 
	  			if(temp != j)
	  				printf("%d " ,temp); 
	  		k=j;
	  	}else {
        	printf("%d " ,arr2[k]);
			k++;
      	}
      
    }
    return 0;
}
