#include <iostream>

size_t findValue(const int *array, size_t start, size_t end);

struct Node {
   int value;   // Стойност съхранена в елемента
   Node* left; // Ляв наследник или nullptr, ако няма такъв
   Node* right; // Десен наследник или nullptr, ако няма такъв
};