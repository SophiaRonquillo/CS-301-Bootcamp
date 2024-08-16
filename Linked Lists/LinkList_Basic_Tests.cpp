//
// Created by we7289 on 8/18/2023.
//

#include "LinkListInt.h"
#include <iostream>
using namespace std;

int main(void) {

    LinkListInt list;

    list.Add(5);
    list.Add(6);
    list.Add(8);
    list.Add(10);

    cout << list.ToString() << endl;

    if (list.Contains(5)) {
        cout << "Woot! I have a 5!" << endl;
    }

    list.Remove(6);
    cout << list.ToString() << endl;

    return 0;
}