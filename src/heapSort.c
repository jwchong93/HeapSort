#include "heapSort.h"
#include <stdio.h>

void heap (int arrayList[],int size,int currentLocation)
{
	int temp;
	if(currentLocation<size-1)
	{
		if(arrayList[currentLocation]<arrayList[(currentLocation+1 )*2]&&(currentLocation+1 )*2<size)
		{
			temp=arrayList[currentLocation];
			arrayList[currentLocation]=arrayList[(currentLocation+1 )*2];
			arrayList[(currentLocation+1 )*2]=temp;
		}
			heap(arrayList,size,(currentLocation+1 )*2);
		if(arrayList[currentLocation]<arrayList[(currentLocation+1 )*2-1]&&(currentLocation+1 )*2-1<size)
		{ 
			temp=arrayList[currentLocation];
			arrayList[currentLocation]=arrayList[(currentLocation+1 )*2-1];
			arrayList[(currentLocation+1 )*2-1]=temp;
		}
			heap(arrayList,size,(currentLocation+1 )*2-1);
		if(currentLocation!=0)
		{
			if(arrayList[currentLocation]>arrayList[(currentLocation+1 )/2-1]&&(currentLocation+1 )/2-1<size)
			{
				temp=arrayList[currentLocation];
				arrayList[currentLocation]=arrayList[(currentLocation+1 )/2-1];
				arrayList[(currentLocation+1 )/2-1]=temp;
			}
		}
			 //heap(arrayList,size,currentLocation);
	}
	


}