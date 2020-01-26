#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    int n,m;
    std::cout <<"Please enter a number no less than 0:";
    std::cin >> n;
    std::cout << solution.Factorial_Re(n) <<" (Recursive method)"<<std::endl;
    std::cout <<"Please enter a number no less than 0:";
    std::cin >> m;
    std::cout << solution.Factorial_NonRe(m) <<" (Non-resursive method)"<<std::endl;
    return EXIT_SUCCESS;
}