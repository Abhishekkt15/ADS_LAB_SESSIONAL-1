#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "bank.h"


void test(){

    Slist s1 = slist_new();
    Slist *list= &s1;
    assert (count_cust(list) == 0);

    list = open_acc(list,"Pramod","",26,"CSIPA1473A","SB","9865478523",2000);
    assert(list->head->data.initial_depo == 2000);
    list = open_acc(list,"Dileep","",24,"TYSUW4562J","SB","9865478523",3000);
    assert (list->head->data.age == 24);
    


}


int main()
{
    test();
    return 0;
}
