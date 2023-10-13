#include <iostream>
using namespace std;

typedef int infotype;
typedef struct elmlist *adr;

struct elmlist
{
    infotype info;
    adr next;
};

struct list
{
};