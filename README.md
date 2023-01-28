# Bad_allocation
IDE: CLion

Write a short program,  all within main().   Its purpose is to cause your system to run out of memory.

It should go around a loop as many times as necessary to run out of dynamic memory.  Each time around the loop,

-- allocate a large block of integers.  The bigger the block, the faster your program will crash, so try a million or so ints.

-- save the pointer in a vector.  

-- Store at least one number somewhere in the newly-allocated area.

After every ten times, print the loop counter to the screen.
