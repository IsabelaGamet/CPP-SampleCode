/****************************************************************

 Subject:            Sorting Analysis Challenge
 Course:             C++ Programming Course
 Professor:          Ricardo R. Rangel, Ph.D.
 Author:             Isabela Carla Rangel

 ****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include "SortingAnalyzer.h"

/****************************************************************
 * Main function to start the application.
 *
 * @param	numberOfArguments	number of arguments used to run the application
 * @param	arguments		array of arguments used to run the application
 *
 * @return	int			program exit status
 */
int main(int numberOfArguments, char* arguments[])
{
	// Variable Declarations
	char dashedLine[] = "----------------------------------------------------------------------\n";
	double bubbleSortTime, selectionSortTime, mergeSortTime;
	SortingAnalyzer *pSortingAnalyzer;

	// Initialize pSortingAnalyzer
	pSortingAnalyzer = new SortingAnalyzer();

	// print header
	printf("\n");
	printf(dashedLine);
	printf("  Sorting Analysis: Elapsed Time in Seconds \n");
	printf(dashedLine);
	printf("%15s %15s %15s %15s \n", "Number of", "Bubble Sort", "Selection Sort", "Merge Sort");
	printf("%15s %15s %15s %15s \n", "Elements", "O(n^2)", "O(n^2)", "O(nlog(n))");
	printf(dashedLine);

	// Iterate through multiple sizes of array
	for (int numberOfElements = 0; numberOfElements <= 30000; numberOfElements += 500)
	{
		// variable declarations
		clock_t         startTime, endTime, currentTime;
		int 			randomNumbers[numberOfElements];
		int				numbers[numberOfElements];

		// Gets current time for random generation
		currentTime = clock();

		// initializes random number generation
		srand((unsigned)currentTime);

		// Sets up a random element array
		for (int index = 0; index < numberOfElements; index++)
			randomNumbers[index] = (rand() % 1000) + 1;

		//**********************
		// Bubble sort

		// Copies random array elements
		for (int index = 0; index < numberOfElements; index++)
			numbers[index] = randomNumbers[index];


		// Gets start time
		startTime = clock();

		// Calls bubble sort
		pSortingAnalyzer->bubbleSort(numbers, numberOfElements);

		// Gets end time
		endTime = clock();

		// Calculates and sets time in seconds
		bubbleSortTime = double(endTime - startTime) / double(CLOCKS_PER_SEC);


		//**********************
		// Selection sort

		// Resets random array elements
		for (int index = 0; index < numberOfElements; index++)
			numbers[index] = randomNumbers[index];

		// Gets start time
		startTime = clock();

		// Calls selection sort
		pSortingAnalyzer->selectionSort(numbers, numberOfElements);

		// Gets end time
		endTime = clock();

		// Calculates and sets time in seconds
		selectionSortTime = double(endTime - startTime) / double(CLOCKS_PER_SEC);

		//**********************
		// Merge sort

		// Resets random array elements
		for (int index = 0; index < numberOfElements; index++)
			numbers[index] = randomNumbers[index];


		// Gets start time
		startTime = clock();

		// Calls merge sort
		pSortingAnalyzer->mergeSort(numbers, numberOfElements);

		// Gets end time
		endTime = clock();

		// Calculates and sets time in seconds
		mergeSortTime = double(endTime - startTime) / double(CLOCKS_PER_SEC);


		// Prints calculated information
		printf("%15d %15.4f %15.4f %15.4f \n", numberOfElements, bubbleSortTime, selectionSortTime, mergeSortTime);
	}

	printf("\n");
	printf(dashedLine);
	printf("\n");

	// Deletes pSortingAnalyzer
	delete pSortingAnalyzer;

	// Indicates it finished correctly
	return 0;
}
