/****************************************************************

 Subject:            Sorting Analysis Challenge
 Course:             C++ Programming Course
 Professor:          Ricardo R. Rangel, Ph.D.
 Author:             Isabela Carla Rangel

 ****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "SortingAnalyzer.h"


/****************************************************************
* Constructs default object.
*
*/
SortingAnalyzer::SortingAnalyzer()
{
}


/****************************************************************
* Runs before object is destroyed.
*
*/
SortingAnalyzer::~SortingAnalyzer()
{
}


/****************************************************************
 * Prints the elements of an array of integers.
 *
 * @param	arr					array of integers
 * @param	numberOfElements		number of elements in the array
 */
void SortingAnalyzer::showArray(int arr[], int numberOfElements)
{
    for (int index = 0; index < numberOfElements; index++)
	{
		// shows the element
		if (index == numberOfElements - 1)
			printf("%d \n", arr[index]);
		else
			printf("%d, ", arr[index]);
	}
}



/****************************************************************
 * Sorts an array using Bubble Sort Algorithm.
 *
 * @param	arr						array of integers
 * @param	numberOfElements		number of elements in the array
 */
void SortingAnalyzer::bubbleSort(int arr[], int numberOfElements)
{

    // variable declarations
    bool hasChanges;

    // Consistency check
    if(numberOfElements <= 1)
        return;

    // Sets initial flag
    hasChanges = true;

    // While there is at least one change
    while(hasChanges)
    {
        hasChanges = false;
        // for each element
        for(int index = 0; index < (numberOfElements - 1); index++)
        {
            // check if the adjacent element is less than the current element
            if(arr[index + 1] < arr[index])
            {
                swapElements(arr, index, index + 1);
                hasChanges = true;
            }
        }
    }

}


/****************************************************************
 * Sorts an array using Selection Sort Algorithm.
 *
 * @param	arr						array of integers
 * @param	numberOfElements		number of elements in the array
 */
void SortingAnalyzer::selectionSort(int arr[], int numberOfElements)
{
    // Consistency check
    if(numberOfElements <= 1)
        return;

    // for each element in the array
    for (int i = 0; i < numberOfElements; i++)
    {
        // compare it linearly to every element after in the array
        for (int j = i + 1; j < (numberOfElements - 1); j++)
        {
            // If element j is less, then swap
            if(arr[j] < arr[i])
            {
                swapElements(arr, i, j);
            }

        }
    }

}


/****************************************************************
 * Sorts an array using Merge Sort Algorithm.
 *
 * @param	arr						array of integers
 * @param	numberOfElementsOfArray		number of elements in the array
 */
void SortingAnalyzer::mergeSort(int arr[], int numberOfElementsOfArray)
{
    // Variable Declarations
    int middleIndex;
    int numberOfElementsOfSubArray1;
    int numberOfElementsOfSubArray2;

    // Consistency check
    if (numberOfElementsOfArray <= 1)
        return;

    // Finds the middle of the array
    middleIndex = numberOfElementsOfArray / 2;

    // Sets the correct amount of elements for each
    numberOfElementsOfSubArray1 = middleIndex;
    numberOfElementsOfSubArray2 = numberOfElementsOfArray - middleIndex;

    // Creates the arrays
    int subArray1 [numberOfElementsOfSubArray1];
    int subArray2 [numberOfElementsOfSubArray2];

    // Copies respective elements into their arrays
    for (int index = 0; index < numberOfElementsOfSubArray1; index++)
		subArray1[index] = arr[index];

    for (int index = 0; index < numberOfElementsOfSubArray2; index++)
        subArray2[index] = arr[middleIndex + index];

    // Calls recursively the function mergeSort to sort the arrays
    mergeSort(subArray1, numberOfElementsOfSubArray1);
    mergeSort(subArray2, numberOfElementsOfSubArray2);

    // Merges the first and second subArrays to rebuild the original array
    mergeArrays(arr, numberOfElementsOfArray, subArray1, numberOfElementsOfSubArray1, subArray2, numberOfElementsOfSubArray2);


}


/****************************************************************
 * Merges two subArrays into an array.
 *
 * @param	arr								array of integers
 * @param   numberOfElementsOfArray			number of elements of the original array
 * @param	subArray1						first subarray of integers
 * @param   numberOfElementsOfSubArray1		number of elements of the first subarray
 * @param	subArray2						second subarray of integers
 * @param   numberOfElementsOfSubArray2		number of elements of the second subarray
 */
void SortingAnalyzer::mergeArrays(int arr[], int numberOfElementsOfArray,
                 int subArray1[], int numberOfElementsOfSubArray1,
                 int subArray2[], int numberOfElementsOfSubArray2)
{
    // Variable declarations
    int arrayIndex, subArray1Index, subArray2Index;

    // Consistency: if the number of elements of the subarrays is greater than the original array, exit
    if((numberOfElementsOfSubArray1 + numberOfElementsOfSubArray2) > numberOfElementsOfArray)
    {
        printf("Warning: there was an error using the function mergeArrays. \n");
		printf("The number of elements of the subarrays is greater than the number of elements of the array. \n");

		// ends the program
		exit(0);
    }
    // set the indexes for the arrays
    arrayIndex = 0;
    subArray1Index = 0;
    subArray2Index = 0;

    // while the indexes are inside the boundaries of the subarrays
    while((subArray1Index < numberOfElementsOfSubArray1) && (subArray2Index < numberOfElementsOfSubArray2))
    {
        // If the element of the first array is smaller than the second array
        if(subArray1[subArray1Index] < subArray2[subArray2Index])
        {
            // Copy into original array and increment counter.
            arr[arrayIndex] = subArray1[subArray1Index];
            subArray1Index++;
        }
        else
        {
            // Else copy the element from the second subArray
            arr[arrayIndex] = subArray2[subArray2Index];
            subArray2Index++;
        }
        arrayIndex++;
    }
    // if still there are elements in the first subarray,
    // copies the elements to the original array
    for (int i = subArray1Index; i < numberOfElementsOfSubArray1; i++)
    {
        // copies the element
        arr[arrayIndex] = subArray1[i];
        arrayIndex++;
    }

    // if still there are elements in the second subarray,
    // copies the elements to the original array
    for (int i = subArray2Index; i < numberOfElementsOfSubArray2; i++)
    {
        // copies the element
        arr[arrayIndex] = subArray2[i];
        arrayIndex++;
    }
}


/****************************************************************
 * Swaps two elements of an array.
 *
 * @param	arr		    array of integers
 * @param	index1		index of the first element in the array
 * @param	index2		index of the second element in the array
 */
void SortingAnalyzer::swapElements(int arr[], int index1, int index2)
{
    // Variable declarations
    int temp;

    // Swap Elements
    temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}
