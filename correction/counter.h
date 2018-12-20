/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.h
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#ifndef ___COUNTER_H
#define ___COUNTER_H

#define COUNTER_COUNT 8

enum Direction{UP, DOWN, UNDEFINED};

typedef struct CounterImplementation *Counter;

Counter new_counter(enum Direction direction);

void set_direction(Counter counter, enum Direction direction);
bool set_value(Counter c, int value);
int get_increment_value(Counter c);
void set_increment_value(Counter c,int value);
void increment(Counter c);
int get_value(Counter c);
void init();
enum Direction get_direction(Counter c);

#endif
