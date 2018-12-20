/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.cpp
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/

#include "counter.h"


struct CounterImplementation
{
  enum Direction direction;
  int value;
  int currentValue;
  bool is_used;
};

struct CounterImplementation c1={UNDEFINED,0,0,false};
struct CounterImplementation c2={UNDEFINED,0,0,false};
struct CounterImplementation c3={UNDEFINED,0,0,false};
struct CounterImplementation c4={UNDEFINED,0,0,false};
struct CounterImplementation c5={UNDEFINED,0,0,false};
struct CounterImplementation c6={UNDEFINED,0,0,false};
struct CounterImplementation c7={UNDEFINED,0,0,false};
struct CounterImplementation c8={UNDEFINED,0,0,false};

Counter counters[COUNTER_COUNT]={&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8};


Counter new_counter(enum Direction direction)
{
  for (int i = 0; i < COUNTER_COUNT; i++)
  {
  if (!counters[i]->is_used)
  {
    counters[i]->is_used=true;
    counters[i]->direction=direction;
    return counters[i];
  }
}
return 0;
}
void set_direction(Counter counter, enum Direction direction)
{
  counter->direction=direction;
}
bool set_value(Counter c, int value)
{
  if (c->direction==DOWN)
  {
    c->value=value;
      return true;
  }
  return false;
}
int get_increment_value(Counter c)
{
  return c->currentValue;
}
void set_increment_value(Counter c,int value)
{
  if (value>=0)
  {
    c->currentValue=value;
  }
}
void increment(Counter c)
{
  if (c->direction==UP)
  {
    c->value+=c->currentValue;
  }
  else if (c->direction==DOWN)
  {
    c->value-=c->currentValue;
  }
}
int get_value(Counter c)
{
  return c->value;
}
void init()
{
  for (int i = 0; i < COUNTER_COUNT; i++)
  {
    counters[i]->is_used=false;
    counters[i]->value=0;
    counters[i]->currentValue=1;
    counters[i]->direction=UNDEFINED;
  }
}
enum Direction get_direction(Counter c)
{
  return c->direction;
}
