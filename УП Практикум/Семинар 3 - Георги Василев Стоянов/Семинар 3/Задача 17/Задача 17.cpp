#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int minSum = INT16_MAX;
    int maxSum = INT16_MIN;
    int lastSum = 0;
    bool isSumTheSame = true;
    for (int i = 1; i <= 2 * n; i+=2)
    {
        int a, b;
        std::cin >> a >> b;
        int pairSum = a + b;
        if (i == 1)
        {
            lastSum = pairSum;
        }
        if (pairSum <= minSum)
        {
            minSum = pairSum;
        }
        if (pairSum >= maxSum)
        {
            maxSum = pairSum;
        }
        if (lastSum != pairSum)
        {
            isSumTheSame == false;
        }
        lastSum = a + b;
    }
    if (isSumTheSame==true)
    {
        std::cout << "Equal sums: " << lastSum<<std::endl;
    }
    else
    {
        std::cout << "Different sums. Max Difference: " << (maxSum - minSum) << std::endl;
    }
}