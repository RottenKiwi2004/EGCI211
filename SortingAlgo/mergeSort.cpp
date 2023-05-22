#include <bits/stdc++.h>
#include "sorting.h"

using namespace std;

vector<int> v;

void mergeSort(vector<int> &);

int main()
{
    initialiseVector(v);
    printVector(v);
    mergeSort(v);
    printVector(v);
}

void mergeSort(vector<int> &v)
{
    // Base case is when array is empty or has exactly one element. They will always be considered sorted
    if (v.size() < 2)
        return;

    // Pick the middle element
    int midIdx = v.size() / 2;

    vector<int> left, right;

    // Partition the array to left and right array
    for (int i = 0; i < midIdx; i++)
        left.push_back(v[i]);
    for (int i = midIdx; i < v.size(); i++)
        right.push_back(v[i]);

    // Recursively sort the sub-array
    mergeSort(left);
    mergeSort(right);

    // Compare the front element and add the smaller one to the array
    int i, j, idx;
    for (i = 0, j = 0, idx = 0; i < left.size() && j < right.size();)
        if (left[i] < right[j])
            v[idx++] = left[i++];
        else
            v[idx++] = right[j++];
    // Add all remaining element from left side to the array, if right runs out first
    for (; i < left.size(); i++)
        v[idx++] = left[i];
    // Add all remaining element from right side to the array, if left runs out first
    for (; j < right.size(); j++)
        v[idx++] = right[j];
}