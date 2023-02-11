#include <tuple>
#include <stdexcept>
#include <iostream>
#include <string>
#include <cmath>

std::pair<double, double> findRoots(double a, double b, double c)
{
    // throw std::logic_error("Waiting to be implemented");
    double square = sqrt(pow(b,2)-4*a*c);
    double x1 = (-b +square) / (2*a);
    double x2 = (-b -square) / (2*a);
    return std::make_pair(x1,x2);
}

#ifndef RunTests
int main()
{
    std::pair<double,double> roots = findRoots(2, 10, 8);
    std::cout << "Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second);
}
#endif