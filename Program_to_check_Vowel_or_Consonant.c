#include<stdio.h>
int main()
{
    char c;
    int lower_case_vowels,upper_case_vowels;
    scanf("%c",&c);
    lower_case_vowels=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    upper_case_vowels=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if (lower_case_vowels||upper_case_vowels)
    printf("Vowel");
    else
    printf("Consonant");
    return 0;
    
}
