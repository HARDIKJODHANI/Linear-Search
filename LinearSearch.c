#include <stdio.h>
int main(){
    int l, s, i, c=0;
    printf("Enter the size of array: ");
    scanf("%d", &l);

    int arr[l];

    printf("Enter Array Elements: ");
    for(i=0;i<l;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &s);

    for(i=0;i<l;i++){
        if(arr[i]==s){
            c++;
        }

    }

    if(c>0){
        printf("Element Found %d times", c);
    }
    else{
        printf("Element not found");
    }
}
