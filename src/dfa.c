#include "dfa.h"


transit_t* alloc() {
    transit_t* t = (transit_t*)malloc(sizeof(transit_t));
    return (t);
}
// input: aab
//
transit_t delta(transit_t* transit, alphabet_t symbol) {
    if (0 == transit->type) {
        if ('a' == symbol) {

        }
    }
}


