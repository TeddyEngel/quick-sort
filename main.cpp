//
//  main.cpp
//  QuickSort
//
//  Created by Teddy Engel on 23/02/2015.
//  Copyright (c) 2015 Teddy Engel. All rights reserved.
//

#include <vector>
#include <iostream>
// #include <chrono>

void PrintVector(std::vector<int>& values)
{
    int i;
    
    for(i = 0; i != values.size(); i++)
    {
        std::cout << values[i] << std::endl;
    }
}


int main(int argc, const char * argv[]) {
    // std::chrono::time_point<std::chrono::system_clock> start, end;
    // std::vector<int> values = {10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2, 10, 0, 2, 5, -4, 3, 2};
    std::vector<int> values = {10, 0, 2, 5, -4, 3, 2};

    std::cout << "Unsorted collection:" << std::endl;
    PrintVector(values);
    // start = std::chrono::system_clock::now();
    // 
    QuickSort(values);
    // end = std::chrono::system_clock::now();
    // std::chrono::duration<double> elapsed_seconds = end-start;
    // std::cout << "Sort duration: " << elapsed_seconds.count() << "s\n";
    std::cout << "Sorted collection:" << std::endl;
    PrintVector(values);
    return 0;
}
