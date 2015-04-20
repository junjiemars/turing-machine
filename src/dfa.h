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

typedef struct {
    state_t state;
    char symbol;
    int type; // 0:q0 1:final
} transit_t;

typedef transit_t (*delta)(transit_t* transit, alphabet_t symbol);

#endif
