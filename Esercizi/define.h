#ifndef _define_h_
#define _define_h_
// soglia massima per indicare se la spesa è fuori budget
#define soglia_massima_spesa 100.00f

// macro per calcolare la penale del 10%
#define calc_penale(x) ((x) * 0.1f)

// macro per abilitare la compilazione del codice per il calcolo della penale
#define ABILITA_CALC_PENALE

#define debug
#ifdef debug
#define debug_print(x) printf("[debug] - %s\n", x);
#else
debug_print(x); 
#endif // debug


#endif //_define_h_