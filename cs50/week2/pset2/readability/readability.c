#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_num_of_letters(string text);
int count_num_of_words(string text);
int count_num_of_sentences(string text);

int main(void)
{
    // Prompt user for text
    string text = get_string("Text: ");
    printf("%s\n", text);

    // Count the number of letters in the text
    int letters = count_num_of_letters(text);

    // Count the number of words
    int words = count_num_of_words(text);

    // Count the number of sentences
    int sentences = count_num_of_sentences(text);

    // Use Coleman-Liau index of deterine the reading grade level
    float calculation = (0.0588 * letters / words * 100) - (0.296 * sentences / words * 100) - 15.8;

    int index = round(calculation);

    // Check what kind of grade we have for readers
    if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

// The function that counts num of letters
int count_num_of_letters(string text)
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }
    }
    return letters;
}

// The function that counts num of words
int count_num_of_words(string text)
{
    int words = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}

// The function that counts num of sentences
int count_num_of_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}