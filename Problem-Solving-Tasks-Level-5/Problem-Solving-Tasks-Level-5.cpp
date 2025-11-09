#include <iostream>
#include "clsMyQueue.h"
#include "clsMyStack.h"


using namespace std;


int main()
{
    clsMyStack <int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);

    cout << "\nStack: \n";
    MyStack.Print();
    cout << "\n";

    cout << "\nStack Size: " << MyStack.Size() << endl;
    cout << "\nStack Top: " << MyStack.Top() << endl;
    cout << "\nStack Bottom: " << MyStack.Bottom() << endl;

    MyStack.Pop();

    cout << "\nStack after pop(): \n";
    MyStack.Print();
    cout << "\n";

    cout << "\n\nItem(2): " << MyStack.GetItem(2);

    MyStack.Reverse();
    cout << "\n\nStack after reverse(): \n";
    MyStack.Print();
    cout << "\n";


    MyStack.UpdateItem(2, 600);
    cout << "\n\nStack after updating Item(2) to 600: \n";
    MyStack.Print();
    cout << "\n";

    MyStack.InsertAfter(2, 800);
    cout << "\n\nStack after Inserting 800 after item(2): \n";
    MyStack.Print();
    cout << "\n";

    MyStack.InsertAtFront(1000);
    cout << "\n\nStack after Inserting 1000 at front: \n";
    MyStack.Print();

    MyStack.InsertAtBack(2000);
    cout << "\n\nStack after Inserting 2000 at back: \n";
    MyStack.Print();

    MyStack.Clear();
    cout << "\n\nStack after Clear(): \n";
    MyStack.Print();

    system("pause > 0");
    return 0;
}


