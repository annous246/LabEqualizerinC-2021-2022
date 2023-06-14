#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
void swap(int* a, int* b)
{
 int temp = *a;*a = *b; *b = temp;
}
 
void heapify(int arr[], int N, int i){
    int largest = i;
 
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < N && arr[left] > arr[largest])
        largest = left;
    if (right < N && arr[right] > arr[largest])
 
        largest = right;
    if (largest != i) {
 
        swap(&arr[i], &arr[largest]);
        heapify(arr, N, largest);
    }
}
void heapSort(int arr[], int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)
 
        heapify(arr, N, i);
    for (int i = N - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void swp(int* a, int* b,int *c,int *d)
{
 int temp = *a;*a = *b; *b = temp;
 temp = *c;*c = *d; *d = temp;
}
 
void hp(int arr[],int b[], int N, int i){
    int largest = i;
 
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < N && arr[left] > arr[largest])
        largest = left;
    if (right < N && arr[right] > arr[largest])
 
        largest = right;
    if (largest != i) {
 
        swp(&arr[i], &arr[largest],&b[i],&b[largest]);
        hp(arr,b, N, largest);
    }
}
void heap(int arr[],int b[], int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)
 
        hp(arr,b, N, i);
    for (int i = N - 1; i >= 0; i--) {
        swp(&arr[0], &arr[i],&b[0],&b[i]);
        hp(arr,b, i, 0);
    }
}

void fill(int a[],int n){
for(int i=0;i<n;i++){
printf("Quantity of beaker number %d\n",i+1);
do{
scanf("%d",a+i);
}while(a[i]<0);
}
}
void init(int a[],int n){
for(int i=0;i<n;i++){
	a[i]=i;
}
}

int  max(int a[],int n){int m=0;
for(int i=0;i<n;i++){if(m<a[i]){m=a[i];
}}return m;
}

int main(){
int t=0,n=0;puts("Give the number of beakers");
while(n<2){
scanf("\n%d",&n);
if(n<2){puts("Invalid input");
}
}puts("Give the name of the substance");char c[500];
scanf("\n%s",c);
printf("Give the quantity of %s in rounded milliliters\n",c);
while(t<1){
scanf("%d",&t);
if(t<1){puts("Invalid input");
}
}
int a[n],b[n];float ff[101];
init(b,n);fill(a,n);heap(a,b,n);
int m=max(a,n),s=0;
for(int i=0;i<n;i++){s+=(m-a[i]);
}
if(s>t){printf("Its not Possible to equalise all beakers\nYou need At least %d milliliters of %s (Adding %d milliliters of %s to the previous quantity will do it)",s,c,s-t,c);
}
else{t-=s;
float ad=(float)(t)/(float)(n);
for(int i=0;i<n;i++){ff[a[i]]=ad+(m-a[i]);
}heap(b,a,n);
for(int i=0;i<n;i++){printf("Adequate Quatity to add to beaker number %d = %f\n",i+1,ff[a[i]]);
}int ok=2;
do{puts("Do you want to procede to finish the operation? YES(1) NO(0)");
scanf("%d",&ok);
}while(ok!=0&&ok!=1);
if(ok){
	for(int i=0;i<n;i++){printf("Filling Beaker %d: \n",i+1);printf("%f milliliters\n",ff[a[i]]);puts("Filling Process");
	Sleep(1000);
	puts("0 milliliters");
	printf("Beaker %d = %f milliliters (Success)\n\n",i+1,ff[a[i]]+a[i]);
	}
}


}

}


