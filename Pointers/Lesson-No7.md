# Multiple indirection with integers

Let's start by looking at a fairly simple example of multiple indirection. You're warned in advance that simple as this code may seem, you'll probably need to stare at this quite a while in order to understand what's going on.

```c
#include <stdio.h>

#define LENGTH 3 //a constant value

int data[LENGTH];

int main(int argc, char **argv) {
    int *pi;
    int **ppi;

    printf ("Multiple indirection example\n");

    for (int i = 0; i < LENGTH; i++) {
        data[i] = i;
    }

    for (int i = 0; i < LENGTH; i++) {
        printf("%d\n", data[i]);
    }

    pi = data;
    ppi = &pi;

    for (int i = 0; i < LENGTH; i++) {
        printf("Round %d\n", i+1);
        printf("\data[%d] array address is %p\n", i, data);
        printf("item pointed to by pi is %d\n", *pi);
        printf("item pointed to by ppi is %p\n", *ppi);
        printf("item pointed to by double indirection of ppi is %d\n\n", **ppi);
        printf("The address of pi is %p and the value of ppi (what it points to) is %p\n\n", &pi, ppi);

        pi += 1;
    }

    return 0;
}
```

```c
#define LENGTH 3

int data[LENGTH];
```

Above we've declared an array to store three integers, also we've defined that length equals 3.

```c
for (int i = 0; i < LENGTH; i++) {
    data[i] = i;
}
```

The first loop put some values into the array (specifically `0`, `1` and `2`).

```c
for (int i = 0; i < LENGTH; i++) {
    printf("%d\n", data[i]);
}
```

The second loop just prints our array values, doing so we can check if everything's correct.

Now let's see how to access these elements using both: __simple indirection__ by using a pointer to an integer, and __multiple indirection__ using a pointer to a pointer which points to an integer.

Here we've two pointer variables: `*pi` which is a pointer to an integer, and `**ppi` which is declared with two asterisks, so is a pointer to a pointer to an int.

`data[]` is an array of integers. As we know an array is an address, it's the place in memory where a list of data items begins.

So we can simply assign that address, the array variable `data`, to the pointer variable `pi`. Like this:

```c
pi = data;
ppi = &pi;
```

Now we've assigned the address of `pi`, using the ampersand Address-Of operator, to the variable `ppi`.

So `pi` is a pointer which points to the `data` array and `ppi` points to the pointer `pi`.

```c
for (int i = 0; i < LENGTH; i++) {
    printf("Round %d\n", i+1);
    printf("\ndata[%d] array address is %p\n", i, data);
    printf("item pointed to by pi is %d\n", *pi);
    printf("item pointed to by ppi is %p\n", *ppi);
    printf("item pointed to by double indirection of ppi is %d\n\n", **ppi);
    printf("The address of pi is %p and the value of ppi (what it points to) is %p\n\n", &pi, ppi);

    pi += 1;
}
```

The code above shows a loop that iterates from `0` to `1 - LENGTH` (one less than the length of the array). Thus the loop runs only while `i` is less than `LENGTH`. In other words from `0` to `2`, and it prints out various bits of informations as well. We will look at then shortly.

```c
pi += 1;
```

Notice that each turn through the loop the pointer is advanced to the next element in the array by adding one to the pointer variable `pi`. By the way this is a simple example of pointer arithmetic which will be explained later in the course.

Now let's look at these `printf` statements, before we do that let's check the program output:

```txt
Multiple indirection example
0
1
2
Round 1

data[0] array address is 0x601050
item pointed to by pi is 0
item pointed to by ppi is 0x601050
item pointed to by double indirection of ppi is 0

The address of pi is 0x7ffc5a607a60 and the value of ppi (what it points to) is 0x7ffc5a607a60

Round 2

data[1] array address is 0x601050
item pointed to by pi is 1
item pointed to by ppi is 0x601054
item pointed to by double indirection of ppi is 1

The address of pi is 0x7ffc5a607a60 and the value of ppi (what it points to) is 0x7ffc5a607a60

Round 3

data[2] array address is 0x601050
item pointed to by pi is 2
item pointed to by ppi is 0x601058
item pointed to by double indirection of ppi is 2

The address of pi is 0x7ffc5a607a60 and the value of ppi (what it points to) is 0x7ffc5a607a60
```

We can verify that the print statement below, prints the array address.

```c
printf("\ndata[%d] array address is %p\n", i, data);
```

The `%p` format specifier is used to print an address as a hexadecimal value. The array address never changes during the runtime of the program, hence we see the same number at each turn through the loop (in our case, the value `0x601050`).

Next we dereference the int pointer `pi` to display the integer at each index of the array, like this:

```c
printf("item pointed to by pi is %d\n", *pi);
```

On the first turn through the loop `pi` points to the start of the array and the first element `0` is displayed. In subsequent turns through the loop the other integers which we've added to the array, they are `1` and `2`, are shown.

```c
printf("item pointed to by ppi is %p\n", *ppi);
```

The code above displays the item pointed to by `ppi`, you recall that `ppi` is a pointer that points to another pointer `pi`, and we've assigned the `data` array to `pi`. You must remember that an array is an address and at the first turn through the loop we dereference `*ppi` to get the value stored at whatever it points to. It turns out that it points to the pointer variable `*pi` and that is the address of the data array. So you can see that `ppi` points to `pi` which points to the array. The address of the array is shown at the first `printf` statement, so that when we dereference `*ppi` we get the address of the array stored in the pointer `*pi`.

In order to go further and get the value pointed to by the pointer `*pi`, we need to use this double indirection operator `**ppi`. That says - *"Get the value of what is pointed to by the pointer that `ppi` points to."*.

Try to catch this image: `ppi` points to ➜ the pointer `pi` which points to ➜ an integer. We can affirme that `**ppi` gets the value of the integer value pointed to by `pi`.

We've already saw that at each turn through the loop `pi` is incremented for the purpose of point to the next element of the array, and when we use the double indirection operator (`**ppi`) it returns the value pointed to by `pi`, which is the next integer in the array. On this line:

```c
printf("item pointed to by double indirection of ppi is %d\n\n", **ppi);
```

As hard as this can be hard to follow let's continue the analysis of our code.

```c
printf("The address of pi is %p and the value of ppi (what it points to) is %p\n\n", &pi, ppi);
```

The line above displays the address of the integer pointer variable `pi` and the value of the pointer variable `ppi`.

If we check the output we may notice that the numbers are the same and they stay the same:

```txt
The address of pi is 0x7ffc5a607a60 and the value of ppi (what it points to) is 0x7ffc5a607a60
```

That shows the value stored by the `ppi` variable is the __address__ of the `pi` variable in this program. The address never changes.

So the value of `ppi` is the address of the thing it points to. It points to `pi` and `pi` points to an int.

This example demonstrates that one level of indirection (`*ppi`) gets the value of the pointer `pi` which happens to be the address of an integer. And two levels of indirection (`**ppi`) gets the value of `pi` that is the data stored at the address pointed to by `*pi`. On this program that's the integers `0`, `1` or `2` at that address.

Let's take a look to one more line to clarify this subject even further.

```c
printf("The value of pi is %p and it points to %d\n\n", pi, *pi);
```

Now let's recheck the output from the original code:

```txt
The value of pi is 0x601058 and it points to 2
```

Okay, we can affirm that the `printf` statement above displays the hexadecimal value of the pointer `pi`, which is an address, and by indirection `*pi`, so there we get the integer value that is stored at that address.

The address of `pi` is incremented at the end of the loop, hence the number shown changes on each iteration through the loop. The value pointed to also changes.

But if you look back to this line where we used two `**` before the `ppi` variable:

```c
printf("item pointed to by double indirection of ppi is %d\n\n", **ppi);
```

That's two levels of indirection, the value returned is the same value which we got when using one level of indirection with the `pi` variable:

```c
printf("The value of pi is %p and it points to %d\n\n", pi, *pi);
```

And all this happens because `ppi` points to `pi`. Thus one level of indirection goes to `pi` and the second level of indirection goes to the integer to which `pi` points.

Okay, congratulations for getting so far. Yes may be hard to get to grips with all that stuff, especially if this is your first time using pointers or multiple indirection. In this case, the best you do is to try out the code provided at the [src] folder referring to this class, or write your own. Then use a debugger to step through it one line at the time. It's really worth the effort though.

Once you can understand this, you'll have crossed one of the major barriers to understanding how pointers __really__ work.
