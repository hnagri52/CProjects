#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 100

int main(){

  char largest_word[size];
  char smalest_word[size];
  char word[size];
  int ch;

  printf("Enter a word: ");
  scanf("%s", word);
  strcpy(largest_word, word);
  strcpy(smalest_word, word);

  while(strlen(word) != 4 )
  {
    printf("Enter a word: ");
    scanf("%s", word);
    if( strcmp(smalest_word, word) > 0 )
      strcpy(smalest_word, word);
    if( strcmp(largest_word, word) < 0 )
      strcpy(largest_word, word);
  }

  printf("The Smalest word: %s\n", smalest_word);
  printf("The Largest word: %s\n", largest_word);

  return 0;
}
