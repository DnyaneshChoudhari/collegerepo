#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> stack;
    int num, choice, pos, counter = 0;
    cout << "1.Push 2.Pop 3.display 4.peek 0.Exit" << endl;
    do
    {
        cout << "Enter choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (counter < 10)
            {
                int num;
                cout << "Enter number:" << endl;
                cin >> num;
                stack.push_back(num);
                counter++;
            }
            else
                cout << "Stack full !" << endl;
            break;
        case 2:
            if (counter > 0)
            {
                stack.pop_back();
                counter--;
            }
            else
                cout << "Stack empty !" << endl;
            break;
        case 3:
            cout << "Stack :" << endl;
            for (int i : stack)
                cout << i << " ";
            cout << endl;

            break;
        case 4:
            cout << "Enter position(0-9):" << endl;
            cin >> pos;
            if (stack.at(pos) > 0 && stack.at(pos) < 10)
                cout << "Element at " << pos << ":" << stack.at(pos) << endl;
            else
                cout << "No element found!";
            break;
        case 0:
            break;
        default:
            cout << "Invvalid choice!" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}