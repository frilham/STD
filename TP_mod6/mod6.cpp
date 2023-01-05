#include "mod6.h"

void createList(List &L) {
    first(L) = NULL;
    last(L) = NULL;
}

address createElement(infotype databaru) {
    address P = new elmList;
    info(P) = databaru;
    next(P) = NIL;
    prev(P) = NIL;
    return P;
}

void insertAscending(List &L, infotype dataBaru){
    address P = createElement(dataBaru);

    if(first(L) == NIL && last(L) ==NIL) {
        first(L) = P;
        last(L) = P;
    }else {
        address before = first(L);
        while(before != NIL && info(before) < dataBaru) {
            before = next(before);
        }
        if(before == NIL) {
            next(last(L)) = P;
            prev(P) = last(L);
            last(L) = P;
        }else if(before == first(L)) {
           next(P) = first(L);
            prev(first(L)) = P;
            first(L) = P;
        }else {
            next(P) = before;
            prev(P) = prev(before);
            next(prev(before)) = P;
            prev(before) = P;
        }

    }
}

void printList(List L) {
    address P = first(L);
    while(P != NIL) {
        cout << info(P) << " ";
        P = next(P);
    }
}

bool findElement(List L, infotype dataDicari) {
    address P = first(L);
    bool found = false;
    while(!found && P != NIL) {

        found = info(P) == dataDicari;

        P = next(P);
    }
    return found;
}

int frequency(List L, infotype dataDicari) {
    address P = first(L);
    int freq = 0;
    while(P != NIL) {
        if(info(P) == dataDicari) {
            freq++;
        }
        P = next(P);
    }
    return freq;
}
