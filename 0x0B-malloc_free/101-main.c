#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_words(char *str)
{
    int count = 0, i = 0, in_word = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            count++;
        }
        i++;
    }

    return count;
}

char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int i, j, k, len, words;
    char **word_array;

    words = count_words(str);

    if (words == 0)
        return NULL;

    word_array = malloc((words + 1) * sizeof(char *));
    if (word_array == NULL)
        return NULL;

    i = 0;
    j = 0;
    while (str[i] != '\0' && j < words)
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;

        len = 0;
        while (str[i + len] != ' ' && str[i + len] != '\t' && str[i + len] != '\n' && str[i + len] != '\0')
            len++;

        word_array[j] = malloc((len + 1) * sizeof(char));
        if (word_array[j] == NULL)
        {
            for (k = 0; k < j; k++)
                free(word_array[k]);
            free(word_array);
            return NULL;
        }

        for (k = 0; k < len; k++)
            word_array[j][k] = str[i++];
        word_array[j][k] = '\0';

        j++;
    }

    word_array[j] = NULL;

    return word_array;
}

void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

int main(void)
{
    char **tab;

    tab =strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return 1;
    }
    print_tab(tab);

    return i
