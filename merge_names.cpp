#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2){
   // throw std::logic_error("Waiting to be implemented");

   std::vector<std::string> v3(names1.size() + names2.size());

   std::merge(names1.begin(), names1.end(), names2.begin(), names2.end(), v3.begin());

    std::set<std::string> s( v3.begin(), v3.end() );
    v3.assign( s.begin(), s.end() );

    return v3;
}

#ifndef RunTests
int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    
    std::vector<std::string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif