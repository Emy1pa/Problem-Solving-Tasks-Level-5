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

    system("pause > 0");
    return 0;
}


