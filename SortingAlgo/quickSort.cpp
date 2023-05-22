#include <bits/stdc++.h>
#include "sorting.h"

using namespace std;

vector<int> v;

void quickSort(vector<int> &);

int main()
{
    initialiseVector(v);
    printVector(v);
    quickSort(v);
    printVector(v);
}

void quickSort(vector<int> &v)
{

    // Base case, return if the array is empty
    if (!v.size())
        return;

    // Pick the middle element in the array
    int pivotIdx = v.size() - 1;

    vector<int> left, right;

    for (int i = 0; i < v.size(); i++)
    {
        // Skip the pivot index
        if (i == pivotIdx)
            continue;
        if (v[i] < v[pivotIdx])
            left.push_back(v[i]);
        else
            right.push_back(v[i]);
    }

    // Recursion to sort left and right sub-array
    quickSort(left);
    quickSort(right);

    int idx = 0;

    // Swap the pivot to the right position
    v[left.size()] = v[pivotIdx];

    // Move every single element to the left side of pivot
    for (int i = 0; i < left.size(); i++, idx++)
        v[idx] = left[i];
    // Move every single element to the right side of pivot
    for (int i = 0; i < right.size(); i++, idx++)
        v[idx + 1] = right[i];
}