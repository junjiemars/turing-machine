/*
* Determinstic Finite Automaton M is a 5-tuple(Q, ∑, ∂, q0, F), consisting of
 * Q:   a finite set of states
 * ∑:   a finite set of input symbols called the alphabet
 * ∂:   a transition function, ∂: Q * ∑ -> Q
 * q0:  a start state, q0 <- Q
 * F:   a state of accept states, F < Q
 *
 * see [determinstic finite automaton](http://en.wikipedia.org/wiki/Deterministic_finite_automaton)
 */

#ifndef DFA_H
#define DFA_H 1

typedef const char* const state_t;
typedef char alphabet_t;

typedef state_t (*delta)(state_t state, alphabet_t symbol);

typedef struct {
    state_t state;
    char input;
    delta delta;
} transit_t;


static state_t void_state = 0;
static state_t empty_state = "";

//BOOL delta_char(alphabet_t a);
//BOOL delta_or(alphabet_t a, alphabet_t b);
//BOOL delta_and(alphabet_t a, alphabet_t b);
//BOOL delta_loop(alphabet_t a);
//BOOL delta_void(alphabet_t a);
//BOOL delta_empty(alphabet_t a);

#endif
