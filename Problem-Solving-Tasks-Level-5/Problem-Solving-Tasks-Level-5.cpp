#include <iostream>
#include "clsDynamicArray.h"

using namespace std;


int main()
{

    clsDynamicArray <int> MyDynamicArray(5);
    
    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty ? " << MyDynamicArray.IsEmpty();
   cout << "\nArray Size: " << MyDynamicArray.Size();
    cout << "\nArray Items: \n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAtBeginning(400);
    cout << "\n\nArray Items after inserting 400 at beginning: ";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();


    MyDynamicArray.InsertBefore(2, 500);
    cout << "\n\nArray Items after inserting 500 before index 2: ";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAfter(2, 600);
    cout << "\n\nArray Items after inserting 600 after index 2: ";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAtEnd(800);
    cout << "\n\nArray Items after inserting 800 at End: ";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    system("pause > 0");
    return 0;
}


