#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    if (head == NULL) {
        return 0;             /* acyclic */
    }
    node *fast_ptr = head;
    node *slow_ptr = head;
    for (;;) {
        if (fast_ptr->next == NULL) /* End of list */
            return 0;         /* acylic */
        fast_ptr = fast_ptr->next->next;
        if (fast_ptr == NULL) /* End of list */
            return 0;         /* acyclic */
        slow_ptr = slow_ptr->next;
        if (fast_ptr == slow_ptr) { 
            return 1;         /* cyclic */
        }
    }
    return 0;
}
