/****************************************************************

 Subject:            Sorting Analysis Challenge
 Course:             C++ Programming Course
 Professor:          Ricardo R. Rangel, Ph.D.
 Author:             Isabela Carla Rangel

 ****************************************************************/

#ifndef SORTINGANALYZER_H
#define SORTINGANALYZER_H

/******************
* Defines a class that can perform common sorting algorithms on arrays.
*
*/
class SortingAnalyzer
{
  public:
    // Constructor
    SortingAnalyzer();

    // Destructor
    ~SortingAnalyzer();

    // Prints the elements of an array of integers
    void showArray(int arr[], int numberOfElements);

    // Implementation of Bubble Sort
    void bubbleSort(int arr[], int numberOfElements);

    // Implementation of Selection Sort
    void selectionSort(int arr[], int numberOfElements);

    // Implementation of Merge Sort
    void mergeSort(int arr[], int numberOfElementsOfArray);

    // Auxiliary methods
    void mergeArrays(int arr[], int numberOfElementsOfArray,
                     int subArray1[], int numberOfElementsOfSubArray1,
                     int subArray2[], int numberOfElementsOfSubArray2);
    void swapElements(int a[], int index1, int index2);
};

#endif
