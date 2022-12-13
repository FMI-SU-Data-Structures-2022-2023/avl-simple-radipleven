#include "solution.h"

size_t findValue(const int *array, size_t start, size_t end)
{

    return array[(end - start) / 2];
}

Node *toTreeHelper (const int *sorted_data, size_t from, size_t to)
{
    Node *root = new Node(findValue(sorted_data,from,to),nullptr,nullptr);
    


    if (from != to) 
    {
        if ((to- from) / 2 - 1 > 0)
        {
            root->left = toTreeHelper(sorted_data, 0, (to- from) / 2 - 1);
            
        }
        if (from < to)
        {
            root->right= toTreeHelper(sorted_data, from + (to - from) / 2 + 1, to ); 
        }
        
        
    }
    return root;
}

Node* toTree(const int *sorted_data, size_t size)
{
    return toTreeHelper(sorted_data,0,size-1);
}

void printInOrder(Node *tree)
{
    if(!tree)return;

    printInOrder(tree->left);
    std:: cout<< tree->value;

    printInOrder(tree->right);
}

int main()
{

    int array[5] = {1, 2 ,3 ,4, 5};
    size_t size = 5;

    Node *root = toTree(array,size,0,size-1);
    printInOrder(root);
}