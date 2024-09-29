// lab_01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int FindIndex(int arr[], int size, int n)
{

    for (int i = 0; i < size; i++) 
        if (arr[i] == n) 
            return i;     
               
    
    return -1;
}

int main()
{
    int arr[]{ 3,141,592,6,33,58 };
    int N;
    std::cout << "Input N: ";
    std::cin >> N;
    int size = sizeof(arr) / sizeof (arr[0]);
    int inx = FindIndex(arr, size, N);

    std::cout << "inx=" << inx;
    return 0;

}

