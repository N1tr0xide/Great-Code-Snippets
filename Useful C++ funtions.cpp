//Check if a string can be converted to an int. DOES NOT check negative numbers.
#include <string>
bool CheckStringToInt(string string)
{
    for (int i = 0; i < string.length(); i++)
    {
        if (!isdigit(string[i])) return false;
        else return true;
    }
}

//Check if a number id odd or even
void CheckOddOrEven()
{
    if (number % 2 == 0)
    {
        result = "even";
    }
    else 
    {
        result = "odd";
    }
}
