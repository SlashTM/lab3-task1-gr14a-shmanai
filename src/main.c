#include <stdio.h>
#include <string.h>

int countOccurrences(char sentence[], char letter) {
    int count = 0;
    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] == letter) {
            count++;
        }
    }
    return count;
}

int main() {
    char sentence[1000];
    char letter;
    printf("Введите предложение: ");
    fgets(sentence, 1000, stdin);
    printf("Введите букву: ");
    scanf("%c", &letter);
    int occurrences = countOccurrences(sentence, letter);
    printf("Буква '%c' встречается %d раз(а) в предложении.\n", letter, occurrences);
    return 0;
}
