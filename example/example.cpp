/*
===================
Example usage of vec2arr.h
===================
*/

#include <iostream>
#include <cstring>
#include <vector>

#include "../vec2arr.h"

int main(int argc, char **argv)
{
    std::vector<int> vec;

    for (int i = 1; i < argc; i++)
        vec.push_back(atoi(*(argv + i)));
    
    printf("Vector:\n\t");
    for (int i : vec)
        printf("%d ", i);

    putchar('\n');

    // There are two of the same function to convert std::vector<> into *array 

    int *p = std_vec_to_ptr_arr(vec);

    // int *p = new int[vec.size()];
    // std_vec_to_ptr_arr(vec, p);

    printf("Ptr arr:\n\t");
    for (int i = 0; i < vec.size(); i++)
        printf("%d ", *(p + i));

    delete[] p;

    return 0;
}