#include <iostream>
#include <vector>
//needed to implement QuickSort Algorithm
#include "PartitionAlgo.hpp"

void QuickSort(std::vector<int> &vec, int low, int high);

// overload '<<' operator to directly print vectors
std::ostream &operator<<(std::ostream &os, const std::vector<int> &v)
{
    for(int i = 0; i < (int)v.size(); i++)
    {
        os << v[i] << std::endl;
    }

    return os;
}

int main() {
    std::vector<int> v = {5, 3, 2, 10, 9, 11};
    std::cout << "Array before QuickSort\n";
    std::cout << v << std::endl;
    std::cout << "Array after QuickSort\n";
    QuickSort(v, 0, v.size() - 1);
    std::cout << v << std::endl; 
    return 0;
}

void QuickSort(std::vector<int> &vec, int low, int high)
{
    if(low < high) {
        int pivotElementIndex = partitionAlgo(vec, low, high);
        QuickSort(vec, low, pivotElementIndex);
        QuickSort(vec, pivotElementIndex + 1, high);
    }
}
