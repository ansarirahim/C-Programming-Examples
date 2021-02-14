#include <bits/stdc++.h>
using namespace std;
bool maxConsecutiveOnes(int x)
{
    // Initialize result
    int count = 0;
    bool found = false;
    // Count the number of iterations to
    // reach x = 0.
    while (x != 0)
    {
        // This operation reduces length
        // of every sequence of 1s by one.
        x = (x & (x << 1));

        count++;
        if (count == 2)
        {
            found = true;
            cout << "Consecutive Ones found" << endl;
            break;
        }
    }
    if (!found)
        cout << "Consecutive Ones NOT found" << endl;
    return found;
    //return count;
}
#include <iostream>
using namespace std;
bool hasConsecutiveOnes(unsigned int n)
{
    if ((n & (n >> 1)) == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void main2Ones(unsigned int num)
{
    // int num = 67; //1000011
    if (hasConsecutiveOnes(num))
    {
        cout << "Has Consecutive 1s";
    }
    else
    {
        cout << "Has No Consecutive 1s";
    }
}
int main()
{
    unsigned int x;
    cin >> x;
    maxConsecutiveOnes(x);

    ///   cout << "MAX CONSECUTIVE ONES LENGTH="<< << endl;
    ///  main2Ones(x);//cout << "2 CONSECUTIVE ONES="<< << endl;
    // cout << maxConsecutiveOnes(222) << endl;
    return 0;
}
