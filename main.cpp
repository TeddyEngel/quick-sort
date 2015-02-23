//
//  main.cpp
//  QuickSort
//
//  Created by Teddy Engel on 23/02/2015.
//  Copyright (c) 2015 Teddy Engel. All rights reserved.
//

#include <vector>
#include <iostream>

void PrintVector(std::vector<int>& values)
{
    int i;
    
    for(i = 0; i != values.size(); i++)
    {
        std::cout << values[i] << std::endl;
    }
}

/*
** Manipulation related
*/
void Swap(std::vector<int>& values, const int& n1, const int& n2)
{
    int nTmp = values[n1];
    values[n1] = values[n2];
    values[n2] = nTmp;
}

int Partition(std::vector<int>& values, const int& nStart, const int& nEnd)
{
    int x = values[nStart];
    int i = nStart;

    for (int j = nStart + 1; j < nEnd; j++)
    {
        if (values[j] <= x)
        {
            i += 1;
            Swap(values, i, j);
        }
    }
    Swap(values, i, nStart);
    return i;
}

void QuickSort(std::vector<int>& values, const int& nStart, const int& nEnd)
{
    if (nStart < nEnd)
    {
        int q = Partition(values, nStart, nEnd);
         QuickSort(values, nStart, q);
         QuickSort(values, q + 1, nEnd);
    }
}

int main(int argc, const char * argv[]) {
    std::vector<int> values = {10, 0, 2, 5, -4, 2, 4};

    std::cout << "Unsorted collection:" << std::endl;
    PrintVector(values);
    QuickSort(values, 0, values.size());
    std::cout << "Sorted collection:" << std::endl;
    PrintVector(values);
    return 0;
}
