#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 18250

// bubble sort
void bubbleSort(int arr[])
{
    int i,j,temp;

    for(i=0;i<SIZE-1;i++)
    {
        for(j=0;j<SIZE-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

// swap two values
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

// partiton for quick sort
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    int j;

    for(j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[i+1],&arr[high]);

    return i+1;
}

// quick sort
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int p=partition(arr,low,high);

        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

int main()
{
    int bubble[SIZE];
    int quick[SIZE];

    srand(time(NULL));

    // genrate random numbers
    int i;
    for(i=0;i<SIZE;i++)
    {
        bubble[i]=rand()%100;
        quick[i]=bubble[i];
    }

    clock_t start,end;

    // checking bubble sort time
    start=clock();

    bubbleSort(bubble);

    end=clock();

    double bubbleTime=(double)(end-start)/CLOCKS_PER_SEC;

    // checking quick sort time
    start=clock();

    quickSort(quick,0,SIZE-1);

    end=clock();

    double quickTime=(double)(end-start)/CLOCKS_PER_SEC;

    printf("bubble sort time : %.6f seconds\n",bubbleTime);
    printf("quick sort time : %.6f seconds\n",quickTime);

    return 0;
}
