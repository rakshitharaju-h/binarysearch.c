#include <stdio.h>
int main()
{
// Define variables
int a[20];
int n,i,j,temp,key;
int first,mid,last;
// Accept the size of the array
printf("Enter the size of the array :");
scanf("%d",&n);
// Accept elements into the array
printf("Enter %d elements :",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
// Print the elements of the array before sorting
printf("The elements of the array before sorting is ----\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
/* Sort the array as the data
must be sorted for binary search
*/
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
// Display the sorted elements of the array
printf("\n\nThe sorted array is ---\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
// Accept the element to be searched
printf("\n\nEnter the element to be searched :");
scanf("%d",&key);
// search for the element in the sorted array
first=0;
last=n-1;
while(first <= last)
{
mid=(first+last)/2;
if(key==a[mid])
{
printf("\nThe element %d is found at location %d\n",key,mid+1);
return (0);
}
else if (key < a[mid])
{
last = mid-1;
}
else
{
first = mid+1;
}
}
printf("\nThe element %d is not found in the array\n",key);
return (1);
}