

#include "heapSort.h"
#include <stdio.h>

void heapAscending (int arrayList[],int size,int currentLocation)
{
	int temp;
	//heapSort (arrayList,size,currentLocation);
	for(;currentLocation<size;size--)
	{
		heapSort (arrayList,size,currentLocation);
		temp = arrayList[currentLocation];
		arrayList[currentLocation]= arrayList[size-1];
		arrayList[size-1] = temp;
		
	}
}
void heapSort (int arrayList[],int size,int currentLocation)
{
	heap (arrayList,size,currentLocation);
	heap (arrayList,size,currentLocation);
}
void heap (int arrayList[],int size,int currentLocation)
{
	int temp;
	int parentIndex,leftChildIndex,rightChildIndex;
	parentIndex = getParent(currentLocation);
	leftChildIndex = getLeftChild(currentLocation);
	rightChildIndex = getRightChild(currentLocation);
	if(currentLocation<size)
	{
		if(arrayList[currentLocation]<arrayList[rightChildIndex]&&rightChildIndex<size)
		{
			temp=arrayList[currentLocation];
			arrayList[currentLocation]=arrayList[rightChildIndex];
			arrayList[rightChildIndex]=temp;
		}
			heap(arrayList,size,rightChildIndex);
		if(arrayList[currentLocation]<arrayList[leftChildIndex]&&leftChildIndex<size)
		{ 
			temp=arrayList[currentLocation];
			arrayList[currentLocation]=arrayList[leftChildIndex];
			arrayList[leftChildIndex]=temp;
		}


			heap(arrayList,size,leftChildIndex);
		
		if(currentLocation!=0)
		{
			if(arrayList[currentLocation]>arrayList[parentIndex]&&parentIndex<size)
			{
				temp=arrayList[currentLocation];
				arrayList[currentLocation]=arrayList[parentIndex];
				arrayList[parentIndex]=temp;
			}
		}
		
		
		
	}
	


}

int getParent(int childIndex)
{
	return (childIndex+1)/2-1;
}

int getLeftChild(int parentIndex)
{
	return parentIndex*2+1;
}

int getRightChild(int parentIndex)
{
	return (parentIndex+1)*2;
}

















