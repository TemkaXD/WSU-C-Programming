#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char text[] = "My day begins early, and my dog waits by the door. I pack my bag, grab my coat, and walk with my friend Mia to the bus stop. She laughs at my jokes, but MY teacher does not! Oh my! Yesterday my class read a mystery about an army of ants, and I told everyone about my family. Is my story true? Ask my grandmother, my uncle, or my neighbor. I made this lunch myself, and my sandwich is the best one in school. My secret? Smile, keep my promise, and share my snacks. Oh my, tomorrow my brother comes too!";

  int text_lenght;
  int my_count = 0;
  int i;

  text_lenght = strlen(text);

  char *token = strtok(text, " ,.!?;");
  while (token != NULL) {
      if (strcmp(token, "my") == 0 || strcmp(token, "My") == 0 || strcmp(token, "MY") == 0) {
          my_count++;
      }
      token = strtok(NULL, " ,.!?;");
  }

  printf("Length: %d\n", text_lenght);
  printf("Count: %d\n", my_count);

  return 0;
}