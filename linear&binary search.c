#include<stdio.h>
#include<conio.h>

int linear(int a[],int n,int item)
{ 
    for(int i=0;i<n;i++)
    { 
        if(a[i]==item)
        return i;
    }
    return -1;
}
int binary(int a[],int n,int item)
{ 
    int low=0,high=n-1;

    while(low<=high)
    { 
        int mid=(low+high)/2;
    
    if(a[mid]==item)
        return mid;
    if(a[mid]<item)
        low=mid+1;
    else
        high=mid-1;


    } 
    return -1;
};
int main()
{ 
    int a[10],n,item,i,choice,result;

    {
    printf("enter the number\n");
    scanf("%d",&n);

    printf("Enter the number of element ");
    for(i=0;i<=n;i++)
    scanf("%d\n",&a[i]);

    printf("enter target element\n");
    scanf("%d",&item);
    } 
        printf("\nyour choice\n ");
        printf("1.linear\n 2.binary\n");
        printf("enter choice\n");
        scanf("%d",&choice);
    
     switch(choice)
     { 
        case 1:
        result = linear(a,n,item);
        break;
        case 2:
        result = binary(a,n,item);
        break;

     }
    if(result!=-1)
        printf("element %d index and value %d\n",result,result+1);
    else
         printf("not found");
    

    return 0;
}
