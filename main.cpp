#include <iostream>
#include <cstring>
#include <vector>

// This function takes std::vector<> as argument and return the pointer array.
template <typename T>
T * std_vec_to_ptr_arr(const std::vector<T> &vec)
{
    T *arr = (T*) malloc(sizeof(T) * vec.size());

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

    // int *p = (int*) malloc(sizeof(int) * vec.size());
    // std_vec_to_ptr_arr(vec, p);

    printf("Ptr arr:\n\t");
    for (int i = 0; i < vec.size(); i++)
        printf("%d ", *(p + i));

    delete[] p;

    return 0;
}