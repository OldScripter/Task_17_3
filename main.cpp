#include <iostream>

int GetStringLength(char* str)
{
    int length = 0;

    while (*(str + length) != '\0')
    {
        ++length;
    }
    return length;
}

bool Substr(char* str, char* substr)
{
    int hit_counter = 0;
    int substr_length = GetStringLength(substr);

    for (int i = 0; *(str + i) != '\0'; i ++)
    {
        for (int j = 0; j < substr_length && *(str + i + j) != '\0'; j++)
        {
            if (*(substr + j) == *(str + i + j))
            {
                hit_counter++;
                if (hit_counter == substr_length) return true;
            }
            else
            {
                hit_counter = 0;
                break;
            }
        }
    }
    return false;
}



int main() {
    char a[] = "Banana!";
    char b[] = "na";
    char c[] = "r!";
    std::cout << (Substr(a, b) ? "true" : "false") << "\n";
    std::cout << (Substr(a, c) ? "true" : "false") << "\n";
    return 0;
}
