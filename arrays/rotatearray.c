/*#include <stdio.h>
void reverse(int abcd[]){
    int i=0;
    int j=6;
    while(i<j){
        int temp=abcd[i];
        abcd[i]=abcd[j];
       abcd[j]=temp;
       i++;
       
    }
    return ;
}  
int main(){
    int n=7;
    int a[]={10,21,13,40,40,23,1}; 
    int k;
     printf("enter no of rotation");
        scanf("%d",&k);
        if(k>n){
            k=k%n;
        }
   
   for(int i=0;i<k;i++){
    reverse(a);
   
   }
   for(int i=0;i<n;i++){
    
   printf("%d ",a[i]);
   }
    
    
    return 0;

}*/
#include <stdio.h>

void reverse(int arr[], int l, int r) {
    while(l < r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}

int main() {
    int n = 7;
    int a[] = {10, 21, 13, 12, 40, 23, 1};
    int k;

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    k = k % n; // rotation optimize

    // Step 1
    reverse(a, 0, k-1);

    // Step 2
    reverse(a, k, n-1);

    // Step 3
    reverse(a, 0, n-1);

    // Print array
    for(int i = 0; i < n; i++) {
        
        printf("%d ", a[i]);
    }

    return 0;
}