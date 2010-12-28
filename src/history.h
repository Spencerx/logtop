#ifndef __HISTORY__
#define __HISTORY__

#include "avl.h"

void init_history();
history_element_t *oldest_element_in_history();
history_element_t *newest_element_in_history();
unsigned int qte_of_elements_in_history();
void update_history(log_line_t *element);

#endif