/**
 * bubble-sort0.c - Bubble sort (Pseudocode)
 *
 * Computer Science 50
 * Week 4
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * Implement bubble sort!
 */
#include <stdio.h>
#include <cs50.h>
#include "helpers.h"

#define NUM_TESTS 4

void bubble_sort(int arr[], int size);

int main(void)
{
    int nums0[] = {31, 2, 5, 15, 21, 22, 11, 8, 1};
    int sz0 = 9;
    print_array(nums0, sz0);
    bubble_sort(nums0, sz0);
    print_array(nums0, sz0);

    int nums1[] = {1};
    int sz1 = 1;
    print_array(nums1, sz1);
    bubble_sort(nums1, sz1);
    print_array(nums1, sz1);

    int nums2[] = {};
    int sz2 = 0;
    print_array(nums2, sz2);
    bubble_sort(nums2, sz2);
    print_array(nums2, sz2);

    int nums3[] = {18, 23, 12, 13};
    int sz3 = 4;
    print_array(nums3, sz3);
    bubble_sort(nums3, sz3);
    print_array(nums3, sz3);
}

// implementation of bubble sort that sorts a given array in place
void bubble_sort(int arr[], int size)
{
    /*

    # set a flag for tracking whether or not we've swapped an element
    # in a particular iteration

    do
        set swapped = false

        for each element in the array except the last one
            if the next element is smaller than the current element
                swap the elements
                set swapped = true
    while swapped is true

    */

    // write your code here
}
