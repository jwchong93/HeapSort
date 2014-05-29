#include "unity.h"
#include "heapSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_heap_will_sort_3_data_in_heap_order()
{
	int testList[]={4,5,6};
	heap(testList,3,0);
	TEST_ASSERT_EQUAL(6,testList[0]);
	TEST_ASSERT_EQUAL(5,testList[1]);
	TEST_ASSERT_EQUAL(4,testList[2]);
}

void test_heap_will_sort_7_data_in_heap_order()
{
	int i =0;
	int testList[]={4,5,6,7,8,9,10};
	heap(testList,7,0);
	for(i =0; i <7;i++)
	{
		printf("%d\n",testList[i]);
	}
	TEST_ASSERT_EQUAL(10,testList[0]);
	TEST_ASSERT_EQUAL(5,testList[1]);
	TEST_ASSERT_EQUAL(9,testList[2]);
	TEST_ASSERT_EQUAL(7,testList[3]);
	TEST_ASSERT_EQUAL(8,testList[4]);
	TEST_ASSERT_EQUAL(6,testList[5]);
	TEST_ASSERT_EQUAL(4,testList[6]);
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








