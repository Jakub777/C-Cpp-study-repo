#include <stdlib.h>
#include <string.h>
#include <stdio.h>

const char *morse[55] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
const char *ascii[55] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

void decode_letter(const char* morse_code) {
  const char* ptr_space = strchr(morse_code, ' ');
  const int morse_letter_len = 1 + (ptr_space - morse_code);
  char morse_letter[morse_letter_len + 1];
  memcpy(morse_letter, morse_code, morse_letter_len);
  morse_letter[morse_letter_len] = '\0';
  printf("%s", morse_letter);
}
char* decode_morse(const char* morse_code) {
    char my_array[200] = {0};
    char* curr_char = my_array;
    int i = 0;
    decode_letter("asd");
//     while (*morse_code != '\0') {
//       *curr_char = 
//       morse_code++;
//     }
    printf("dlugosc to: %d", i);
    return curr_char;
}



int main() {
    decode_letter("asd ");
    return 0;

}