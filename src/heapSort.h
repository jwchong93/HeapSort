#ifndef heapSort_H
#define heapSort_H

void heap (int arrayList[],int size,int currentLocation);
int getParent(int childIndex);
int getLeftChild(int parentIndex);
int getRightChild(int parentIndex);

#endif // heapSort_H
