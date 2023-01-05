#ifndef MOD6_H_INCLUDED
#define MOD6_H_INCLUDED

#include <iostream>

#define NIL NULL
#define next(P) (P)->next
#define info(P) (P)->info
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

using namespace std;

typedef int infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};



void createList(List &L);
void insertAscending(List &L, infotype dataBaru);
address createElement(infotype databaru);
void printList(List L);
bool findElement(List L, infotype dataDicari);
int frequency(List L, infotype dataDicari);


#endif // MOD6_H_INCLUDED
