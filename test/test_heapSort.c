#include "unity.h"
#include "heapSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_heapSort_will_sort_3_data_in_heap_order()
{
	int testList[]={4,5,6};
	heapSort(testList,3,0);
	TEST_ASSERT_EQUAL(6,testList[0]);
	TEST_ASSERT_EQUAL(5,testList[1]);
	TEST_ASSERT_EQUAL(4,testList[2]);
}

void test_heapSort_will_sort_7_data_in_heap_order()
{

	int testList[]={4,5,6,7,8,9,10};
	heapSort(testList,7,0);
	TEST_ASSERT_EQUAL(10,testList[0]);
	TEST_ASSERT_EQUAL(8,testList[1]);
	TEST_ASSERT_EQUAL(9,testList[2]);
	TEST_ASSERT_EQUAL(7,testList[3]);
	TEST_ASSERT_EQUAL(5,testList[4]);
	TEST_ASSERT_EQUAL(6,testList[5]);
	TEST_ASSERT_EQUAL(4,testList[6]);
}

void test_heapSort_will_sort_10_data_in_heap_order()
{
	int i =0;
	int testList[]={1,2,3,4,5,6,7,8,9,10};
	heapSort(testList,10,0);
	TEST_ASSERT_EQUAL(10,testList[0]);
	TEST_ASSERT_EQUAL(9,testList[1]);
	TEST_ASSERT_EQUAL(6,testList[2]);
	TEST_ASSERT_EQUAL(8,testList[3]);
	TEST_ASSERT_EQUAL(5,testList[4]);
	TEST_ASSERT_EQUAL(3,testList[5]);
	TEST_ASSERT_EQUAL(1,testList[6]);
	TEST_ASSERT_EQUAL(7,testList[7]);
	TEST_ASSERT_EQUAL(4,testList[8]);
	TEST_ASSERT_EQUAL(2,testList[9]);
}

void test_heapAscending_will_sort_the_data_in_increasing_mode()
{
	int testList[]={4,5,6,7,8,9,10,1,2,3};
	heapAscending(testList,10,0);
	TEST_ASSERT_EQUAL(1,testList[0]);
	TEST_ASSERT_EQUAL(2,testList[1]);
	TEST_ASSERT_EQUAL(3,testList[2]);
	TEST_ASSERT_EQUAL(4,testList[3]);
	TEST_ASSERT_EQUAL(5,testList[4]);
	TEST_ASSERT_EQUAL(6,testList[5]);
	TEST_ASSERT_EQUAL(7,testList[6]);
	TEST_ASSERT_EQUAL(8,testList[7]);
	TEST_ASSERT_EQUAL(9,testList[8]);
	TEST_ASSERT_EQUAL(10,testList[9]);
}

void test_heapAscending_will_sort_10_random_data_in_increasing_mode()
{
	int testList[]={45,78,63,128,56,98,78,425,85,69};
	heapAscending(testList,10,0);
	TEST_ASSERT_EQUAL(45,testList[0]);
	TEST_ASSERT_EQUAL(56,testList[1]);
	TEST_ASSERT_EQUAL(63,testList[2]);
	TEST_ASSERT_EQUAL(69,testList[3]);
	TEST_ASSERT_EQUAL(78,testList[4]);
	TEST_ASSERT_EQUAL(78,testList[5]);
	TEST_ASSERT_EQUAL(85,testList[6]);
	TEST_ASSERT_EQUAL(98,testList[7]);
	TEST_ASSERT_EQUAL(128,testList[8]);
	TEST_ASSERT_EQUAL(425,testList[9]);
}
void test_getParent_will_return_the_parent_index()
{
	int testIndex;
	testIndex = getParent(1);
	//The returned value should be 0
	TEST_ASSERT_EQUAL(0,testIndex);
	testIndex = getParent(2);
	TEST_ASSERT_EQUAL(0,testIndex);
	
	//Lets try some bigger index number.
	testIndex = getParent(6);
	//The returned value should be 2
	TEST_ASSERT_EQUAL(2,testIndex);
	testIndex = getParent(5);
	TEST_ASSERT_EQUAL(2,testIndex);

	
}

void test_getLeftChild_will_return_the_LeftChild_index()
{
	int testIndex;
	testIndex = getLeftChild(0);
	//The returned value should be 1
	TEST_ASSERT_EQUAL(1,testIndex);
	testIndex = getLeftChild(1);
	TEST_ASSERT_EQUAL(3,testIndex);
	
	//Lets try some bigger index number.
	testIndex = getLeftChild(3);
	//The returned value should be 7
	TEST_ASSERT_EQUAL(7,testIndex);
	testIndex = getLeftChild(7);
	TEST_ASSERT_EQUAL(15,testIndex);	
}

void test_getRightChild_will_return_the_RightChild_index()
{
	int testIndex;
	testIndex = getRightChild(0);
	//The returned value should be 2
	TEST_ASSERT_EQUAL(2,testIndex);
	testIndex = getRightChild(2);
	TEST_ASSERT_EQUAL(6,testIndex);
	
	//Lets try some bigger index number.
	testIndex = getRightChild(6);
	//The returned value should be 14
	TEST_ASSERT_EQUAL(14,testIndex);
	testIndex = getRightChild(14);
	TEST_ASSERT_EQUAL(30,testIndex);	
}








