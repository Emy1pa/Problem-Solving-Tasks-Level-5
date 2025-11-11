#include <iostream>
#include "clsMyString.h"

using namespace std;

int main()
{
    
    cout << "\n\n\t\t\t\t\t\t Undo/Redo Project \n\n";

    clsMyString S1;

    cout << "\nS1 = " << S1.value << "\n";
    S1.value = "Mohammed";
   
    cout << "S1 = " << S1.value << "\n";
    S1.value = "Mohammed2";

    cout << "S1 = " << S1.value << "\n";
    S1.value = "Mohammed3";

    cout << "S1 = " << S1.value << "\n";


    cout << "\n\nUndo: ";
    cout << "\n----------\n";

    S1.Undo();
    cout << "\nS1 after undo = " << S1.value << "\n";

    S1.Undo();
    cout << "\nS1 after undo = " << S1.value << "\n";

    S1.Undo();
    cout << "\nS1 after undo = " << S1.value << "\n";

    cout << "\n\nRedo: ";
    cout << "\n----------\n";

    S1.Redo();
    cout << "\nS1 after redo = " << S1.value << "\n";

    S1.Redo();
    cout << "\nS1 after redo = " << S1.value << "\n";

    S1.Redo();
    cout << "\nS1 after redo = " << S1.value << "\n";


    system("pause>0");
    return 0;

}