
#include <stdio.h>
char per(char input1[], char input2[])
{
    int freq1[26] = {0}, freq2[26] = {0};

    for (int i = 0; input1[i] != '\0'; i++)
    {
        freq1[input1[i] - 'a']++;
    }
    for (int i = 0; input2[i] != '\0'; i++)
    {
        freq2[input2[i] - 'a']++;
    }
    return freq1,freq2;
}
int main()
{
    char a1[1000]={'d','r','f','a','i'};
    char a2[1000]={'n','e','i','a','m'};
     printf("%c",per(a1,a2));
}
