#include "heapSort.h"
#include <stdio.h>

void heap (int arrayList[],int size,int currentLocation)
{
	int temp;
	int parentIndex,leftChildIndex,rightChildIndex;
	parentIndex = getParent(currentLocation);
	leftChildIndex = getLeftChild(currentLocation);
	rightChildIndex = getRightChild(currentLocation);
	if(currentLocation<size-1)
	{
		if(arrayList[currentLocation]<arrayList[rightChildIndex]&&rightChildIndex<size)
		{
			temp=arrayList[currentLocation];
			arrayList[currentLocation]=arrayList[rightChildIndex];
			arrayList[rightChildIndex]=temp;
		}
		if(rightChildIndex<size-1)
		{
			heap(arrayList,size,rightChildIndex);
		}
		if(arrayList[currentLocation]<arrayList[leftChildIndex]&&leftChildIndex<size)
		{ 
			temp=arrayList[currentLocation];
			arrayList[currentLocation]=arrayList[leftChildIndex];
			arrayList[leftChildIndex]=temp;
		}
		if(leftChildIndex<size-1)
		{
			heap(arrayList,size,leftChildIndex);
		}
		
		if(currentLocation!=0)
		{
			if(arrayList[currentLocation]>arrayList[parentIndex]&&parentIndex<size)
			{
				temp=arrayList[currentLocation];
				arrayList[currentLocation]=arrayList[parentIndex];
				arrayList[parentIndex]=temp;
			}
		}
			
		heap(arrayList,size,currentLocation);
		
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

















