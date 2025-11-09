#include <iostream>
#include "clsMyQueue.h"

using namespace std;


int main()
{
    clsMyQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);

    cout << "\nQueue: \n";
    MyQueue.Print();
    cout << "\n";

    cout << "\nQueue Size: " << MyQueue.Size() << endl;
    cout << "\nQueue Front: " << MyQueue.Front() << endl;
    cout << "\nQueue Back: " << MyQueue.Back() << endl;

    MyQueue.Pop();

    cout << "\nQueue after pop(): \n";
    MyQueue.Print();
    cout << "\n";

    cout << "\n\nItem(2): " << MyQueue.GetItem(2);

    MyQueue.Reverse();
    cout << "\n\n Queue after reverse(): \n";
    MyQueue.Print();
    cout << "\n";


    MyQueue.UpdateItem(2, 600);
     cout << "\n\nQueue after updating Item(2) to 600: \n";
     MyQueue.Print();
     cout << "\n";

   MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after item(2): \n";
    MyQueue.Print();
    cout << "\n";

    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueue.Print();

    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueue.Print();

    MyQueue.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueue.Print();

    system("pause > 0");
    return 0;
}


