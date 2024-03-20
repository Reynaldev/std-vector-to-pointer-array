/*
===================
std::vector<> to pointer array.

Usage: Just copy this header file to your own project

made by ReynDev

Note:
This file comes with no guarantee.
You may modify, distribute, or share this file however you like.
===================
*/

#include <cstring>
#include <vector>

// This function takes std::vector<> as argument and return the pointer array.
template <typename T>
T * std_vec_to_ptr_arr(const std::vector<T> &vec)
{
    T *arr = new T[vec.size()];

    for (int i = 0; i < vec.size(); i++)
        *(arr + i) = vec[i];

    return arr;
}

// This function takes std::vector as the first argument and pointer array as the second argument.
// Then, assign each pointer's index from std::vector's
template <typename T>
void std_vec_to_ptr_arr(const std::vector<T> &vec, T *dst)
{
    for (int i = 0; i < vec.size(); i++)
        *(dst + i) = vec[i];
}