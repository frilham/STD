#include "mod6.h"

int main()
{
    List L;
    createList(L);
    insertAscending(L, 5);
    insertAscending(L, 7);
    insertAscending(L, 3);
    insertAscending(L, 11);
    insertAscending(L, 4);
    printList(L);
    bool findE = findElement(L,7);
    cout << frequency(L, 10) << endl;
    cout << boolalpha << findE;

}
