#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <stdint.h>
#include <time.h>

#define MAX_WORD_SIZE 46
#define NULL_CHARACTER '\0'
#define ALPHABET "abcdefghijklmnopqrstuvwxyz"
#define ALPHABET_LEN 26

void GenerateRandomWord(char *word);

int main(void)
{
        srand(time(NULL));
        char current_word[MAX_WORD_SIZE] = "\0";
        while (1) {
                GenerateRandomWord(current_word);
                printf("%s ", current_word);
        }
        return EXIT_SUCCESS;
}


void GenerateRandomWord(char *word)
{
        memset(word, NULL_CHARACTER, MAX_WORD_SIZE);       
        uint_fast8_t randidx = 0; 
        uint_fast8_t wrdsize = (uint_fast8_t) rand() % MAX_WORD_SIZE; 
        for (uint_fast8_t i = 0; i < wrdsize; ++i) {
                randidx = rand() % ALPHABET_LEN;
                word[i] = ALPHABET[randidx];
        }
}


