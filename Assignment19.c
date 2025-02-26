/*
#include<stdio.h>
int find_greatest(int[],int);
int main1()
{
    int n;
    printf("Enter size of array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x=find_greatest(a,n);
    printf("the greatest number from the given array is %d",x);


}
int find_greatest(int b[],int n)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(k<b[i])
        k=b[i];
    }
    return k;
}
int find_smallest(int[],int);
int main2()
{
    int n;
    printf("Enter size of array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x=find_smallest(a,n);
    printf("the smallest number from the given array is %d",x);


}
int find_smallest(int b[],int n)
{
    int k=b[1];
    for(int i=0;i<n;i++)
    {
        if(k>b[i])
        k=b[i];
    }
    return k;
}
void sort_array(int[],int);
int main3()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort_array(a,n);


}
void sort_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    for(int i=0;i<n;i++)
    printf("\n%d",a[i]);
    printf("\n\n");
}
void rotate_array(int[],int,int,int);
int main4()
{
    int m;
    printf("Enter size of array ");
    scanf("%d",&m);
    int a[m];
    printf("Enter elements of array\n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    int n,d;
    printf("Enter position of rotation\n");
    scanf("%d",&n);
    printf("Enter -1 for left direction or 1 for right direction\n");
    scanf("%d",&d);
    rotate_array(a,m,n,d);
}
void rotate_array(int x[],int m,int n,int d)
{
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=x[i];
    }
    if(d==-1)
    {
        for(int i=0;i<m-n;i++)
        {
            x[i]=x[i+n];
        }
        int k=0;
        for(int i=m-n;i<m;i++)
        {
            x[i]=a[k];
            k++;
        }
    }
    else
    {
        for(int i=m+n-1;i>n-1;i--)
        {
            x[i]=x[i-n];
        }
        for(int i=0;i<n;i++)
        {
            x[i]=x[m+i];
        }
    }
    for(int i=0;i<m;i++)
    printf(" %d",x[i]);
}
int first_occurance(int[],int);
int main5()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b=first_occurance(a,n);
    printf("value of element is %d",b);
}
int first_occurance(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        return a[i];
    }
}
void swap(int[],int,int,int);
int main6()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n],p,q;
    printf("Enter elements of array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter indices to swap\n");
    scanf("%d%d",&p,&q);
    swap(a,n,p,q);
}
void swap(int a[],int n,int p,int q)
{
    int k=a[p];
    a[p]=a[q];
    a[q]=k;
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
int count_duplicate(int[],int);
int main7()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort_array(a,n);
    printf("\nnumber of duplicate items is %d",count_duplicate(a,n));
}
int count_duplicate(int a[],int n)
{
    int k=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            k+=1;
            while (a[i]==a[i+1])
            {
                i+=1;
            }
            i-=1;
            
        }
    }
    return k;
}
void print_unique(int[],int);
int main8()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort_array(a,n);
    print_unique(a,n);
}
void print_unique(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
        while (a[i]==a[i+1])
        {
            i+=1;
        }
    }
}
void merge_array(int[],int[],int);
int main9()
{
    int n;
    printf("Enter size of array ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter elements of 1st array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter elements of 2nd array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&b[i]);
    merge_array(a,b,n);
}
void merge_array(int a[],int b[],int n)
{
    int x[n+n];
    for(int i=0;i<n;i++)
    {
        x[i]=a[i];
    }
    int j=0;
    for(int i=n;i<2*n;i++)
    {
        x[i]=b[j];
        j++;
    }
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1-i;j++)
        {
            if(x[j]<x[j+1])
            {
                int k=x[j];
                x[j]=x[j+1];
                x[j+1]=k;
            }
        }
    }
    for(int i=0;i<2*n;i++)
    printf("\n%d",x[i]);
}
void count_frequency(int[],int);
int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort_array(a,n);
    count_frequency(a,n);
}
void count_frequency(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int k=1;
        while (a[i]==a[i+1])
        {
            i+=1;
            k+=1;
        }
        printf("\nfrequency of %d is %d",a[i],k);
    }
}

*/
#include<stdio.h>
int find_greatest_no(int a[],int size)
{
    int i,max=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}

int main1()
{
    int n;
    printf("Enter size of array ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("max number is %d",find_greatest_no(a,n));
}


int find_smallest_no(int a[],int size)
{
    int i,max=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]<max)
            max=a[i];
    }
    return max;
}
int main2()
{
    int n;
    printf("Enter size of array ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("smallest number is %d",find_smallest_no(a,n));
}


void sort(int a[],int size)
{
    int i;
    for(int r=1;r<size;r++)
    {    for(i=0;i<size-r;i++)
        {
            int swap;
            if(a[i]>a[i+1])
            {
                swap=a[i];
                a[i]=a[i+1];
                a[i+1]=swap;
            }
        }
    }
}
int main3()
{
    int n;
    printf("Enter size of array ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n\n");
    return 0;
}


void rotate_array(int a[],int size,int n,int direction)
{
    if(direction==-1)
    {
        for(int i=1;i<=n;i++)
        {
            int left=a[0],i;
            for(i=0;i<size-1;i++)
            {
                a[i]=a[i+1];
            }
            a[i]=left;
        }
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            int right=a[size-1],i;
            for(i=size-1;i>0;i--)
            {
                a[i]=a[i-1];
            }
            a[0]=right;
        }
    }
}
int main4()
{
    int size,n,direction;
    printf("Enter size of array ");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements of array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter -1 for left and 1 for right\n");
    scanf("%d",&direction);
    printf("Enter position \n");
    scanf("%d",&n);
    rotate_array(a,size,n,direction);
    for(int i=0;i<size;i++)
        printf("%d ",a[i]);
}

int find_first_duplicate(int a[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }
    return -1;
}


int main5()
{
    int n;
    printf("Enter size of array ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("value of element is %d",find_first_duplicate(a,n));
}

void swap(int a[],int size,int m,int n)
{
    int t=a[m];
    a[m]=a[n];
    a[n]=t;
}

void prin_all_unique(int a[],int size)
{
    int unique;
    for(int i=0;i<size;i++)
    {
        if(a[i]!=unique)
        {
            unique=a[i];
            printf("%d ",unique);
        }
    }
}

int main8()
{
    int n;
    printf("Enter size of array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    prin_all_unique(a,n);
}

void count_frequency(int a[],int n)
{
    int unique=a[0],z=0;
    for(int i=0;i<n;i++)
    {
        z=0;
        while(unique==a[i])
        {
            z+=1;
            i+=1;
        }
        if(unique!=a[i])
        {
            printf("%d - %d, ",unique,z);
            unique=a[i];
            i-=1;
        }
    }
}

int main10()
{
    
    int n;
    printf("Enter size of array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    count_frequency(a,n);
}