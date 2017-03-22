
#ifndef fibonacci_h
#define fibonacci_h

#include <stdint.h>

/** Calculates nth fibonacci number through iteration.
 *
 *  @param  n The parameter of f(n) for the nth Fibonacci number.
 *
 *  @return The nth fibonacci number.
 *
 */
uint64_t iterativeFibonacci( uint64_t n );

/** Calculates nth fibonacci number through recursion.
 *
 *
 *  @param  n The parameter of f(n) for the nth Fibonacci number.
 *
 *  @return The nth fibonacci number.
 *
 *
 */
uint64_t recursiveFibonacci( uint64_t n );

#endif /* fibonacci_h */
