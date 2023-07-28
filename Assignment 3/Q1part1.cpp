#include <iostream>
#include <cstring>
using namespace std;

int length(char *input)
{
    int count = 0;
    int i = 0;
    while (input[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
bool validate(char *input)
{
    for (int i = 0; i < length(input); i++)
    {
        if ((int(input[i]) > 90 && int(input[i]) < 97) || (int(input[i]) < 65) || (int(input[i]) > 122))
        {
            return false;
        }
    }
    return true;
}
void toLowerCase(char *input)
{

    for (int i = 0; i < length(input); i++)
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
            input[i] = char(input[i] + 32);
    }
}
int words(char *input)
{
    int count = 0;
    for (int i = 0; i < length(input); i++)
    {
        if (input[i] != 'a' && input[i] != 'e' && input[i] != 'i' && input[i] != 'o' && input[i] != 'u')
        {
            count++;
        }
    }
    return count;
}
int vowels(char *input)
{
    int count = 0;
    for (int i = 0; i < length(input); i++)
    {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
        {
            count++;
        }
    }
    return count;
}
void reverse(char *input)
{
    int size = length(input);
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        char temp = input[s];
        input[s] = input[e];
        input[e] = temp;
        s++;
        e--;
    }
}
bool isPalindrome(char *input)
{
    int size = length(input);
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        if (input[s] != input[e])
        {
            return false;
        }
    }
    return true;
}

void duplicates(char *input)
{
    int freq[128];
    for (int i = 0; i < 128; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < length(input); i++)
    {
        freq[int(input[i])]++;
    }
    for (int i = 0; i < 128; i++)
    {
        if (freq[i] > 1)
        {
            cout << char(i) << " ";
        }
    }
}
int main()
{
    char name[50] = "helloo";
    cout << "the length of string is: ";
    cout << length(name) << endl;
    cout << validate(name) << endl;
    toLowerCase(name);
    cout << name << endl;
    cout << isPalindrome(name) << endl;
    duplicates(name);

    return 0;
}