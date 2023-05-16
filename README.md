
## Push Swap

> Because Swap_push isn’t as natural


__You have 2 stacks named a and b.__

+ At the beginning:
+ The __stack a__ contains a random amount of negative and/or positive numbers  which cannot be duplicated.
+ The __stack b__ is empty. The goal is to sort in ascending order numbers into __stack a__. To do so you have the following operations at your disposal:
* __sa__ (swap a): Swap the first 2 elements at the top of stack a.Do nothing if there is only one or no elements.
* __sb__ (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
* __ss__ : sa and sb at the same time.
* __pa__ (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
* __pb__ (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
* __ra__ (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.
* __rb__ (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.
* __rr__ : ra and rb at the same time.
* __rra__ (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
* __rrb__ (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
* __rrr__ : rra and rrb at the same time.

The program must print the moviments for the shortest path to sort the list

## How to install and use it?

    1. Clone
    2. cd PushSwap
    3. make

Those are the command that you have to use it, the next step is giving the arguments. for that here is an example how can you do it.

```sh
    ./push_swap {numbers} >>> This is an example.
    ./push_swap 8 6 5 2 0 1
    ra
    ra
    ra
    pb
    pb
    pb
    sa
    rra
    pa
    pa
    ra
    ra
    pa
    rra
    rra
```

This how the program should behave in his best!

## Algorithm used.

The first steps are to make a small hardcoded algorithm for 3. We know for 3 values the mas cases we can get are 5. For five numbers we have 120 posibilities. I'll give you timme to think about it!

Now the main problem is for more than 5 numbers. Here i dicide to search a bit about used algorithm after more or less 7 fails trying to create my own algorithm.

So, I decide to the the __Cost Algorithm__ one of the first steps is to get the Average value of the stack. in the mean time i check if the current number of the stack A is below the average if yes push to b otherwise rotate. I'll do this until the size stack A stays 5 and then i use my five algorithm to sort.

#### Now the best friends part.

I will use the example of a stack like this 

Stack A: | 1 | 4 | 5 | 21 | 52 |