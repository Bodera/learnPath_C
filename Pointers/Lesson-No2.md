# Pointer variables

Now let's see how we can create and use a pointer variable in C.

```c
#include <stdio.h>

int main(int argc, char **argv)
{
    int num;
    int* numPtr;
    int num2;

    num = 100;
    numPtr = &num;
    num2 = *numPtr;

    printf("num=%d, numPtr=%d, address of num=%d, num2=%d\n", num, numPtr, num, num2);

    return 0;
}
```

Here I've declared a simple __int__ variable called *num* and also I've declared a pointer variable calles *numPtr*.

The asterisk or star operator (\*) shows that this is a pointer. The data type shows the type of data to which this pointer will point. So this pointer will point to a memory location containing an integer.

Incidentally it's up to you to put the asterisk when declaring the pointer. Some programmers put it immediately after the data type, others put it before the variable name, so you could do this:

```c
int *numPtr;
```

So whichever you do they work the same, as long as the star operator is placed between the type and the variable name, the declaration is valid.

We've assigned an integer value that it's `100` to the variable *num*, and assigned to the pointer variable *numPtr* to point to the *num* variable.

We do that using the Address-Of operator (&), the ampersand in front of the *num* variable that gets the address.

```c
numPtr = &num;
```

Remember that's the memory location of the *num* variable, and it assigns that address to the *numPtr* variable.

Let's be clear on this. The Address-Of operator __does not__ return the value of the *num* variable, that is `100`. It returns the address in memory at which that value is stored.

If you run this code [here](https://www.codechef.com/ide/), you should be able to see the following output.

```txt
num=100, numPtr=257492556, address of num=100, num2=100
```

So here you can see that the value of *num* variable is, as expected, `100`. But the value of the pointer variable *numPtr* is this very long number (please don't expect to get the same number since memory addresses are allocated dynamically) `257492556`.

Now let's correct a mistake on this code by adding the Address-Of operator to print the address of the variable *num*, like this:

```c
printf("num=%d, numPtr=%d, address of num=%d, num2=%d\n", num, numPtr, &num, num2);
```

Now we're supposed to no longer visualize the value of the variable *num*, which was `100`, but instead now we should visualize the address of that variable. Once the modification is done let's run the program.

```txt
num=100, numPtr=903773292, address of num=903773292, num2=100
```

We can see that the value of variable *numPtr* is the address of the variable *num*, those two numbers are the same.

But, of course, just having an address of a variable is not likely to be all that useful unless we can also find out what data is stored at that address. And in the next lesson we're going to discover how to access that data.
