#include <vector>
#include <stdexcept>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

int countNumbers(const std::vector<int>& sortedVector, int lessThan)
{
    // find the value in the vector that is less than the number
    std::vector<int>::const_iterator lower_bound_itr;
    lower_bound_itr = std::lower_bound(sortedVector.begin(), sortedVector.end(), lessThan);
    return lower_bound_itr - sortedVector.begin();

}

#ifndef RunTests
int main()
{
    std::vector<int> v { 1, 3, 5, 7 };
    std::cout << countNumbers(v, 4);
}
#endif