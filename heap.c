#include<stdio.h>
#define MAX_VALUE=999

void insert(int num, int arr[], int *h_size);
int del_root(int arr[], int *h_size);
void display(int arr[], int h_size);
void restoreUp(int arr[], int loc);
void restoreDown(int arr[], int i, int size);
void buildHeap(int arr[], int size);

void main()
{
    int arr[100];
    int h_size=0;
    arr[0]=MAX_VALUE;

    int ch, i, num;

    while(1)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. RestoreUp\n5. RestoreDown\n6. BuildHeap\n");
        printf("Enter you choice: ");
        scanf("%d", &ch);

        switch(ch)
        {

            case 1:
            {
                printf("Enter the element to be inserted : ");
                scanf("%d", &num);
                insert(num, arr, &h_size);
                break;
            }

            case 2:
            {
                if(h_size==0)
                {
                    printf("Heap is Empty");
                }
                else
                {
                    num=del_root(arr, &h_size);
                    printf("Maximum element is %d", num);
                }
                break;
            }

            case 3:
            {

            }
        }
    }
}
