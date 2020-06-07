# Indirection

In the previous lesson we started to work on in this program:

```c
#include <stdio.h>

int main(int argc, char **argv)
{
    int num;
    int *numPtr;
    int num2;

    num = 100;
    numPtr = &num;
    num2 = *numPtr;

    printf("num=%d, numPtr=%d, address of num=%d, num2=%d\n", num, numPtr, &num, num2);

    return 0;
}
```

Now let's see how we can find the value of the integer to which the pointer *numPtr* is pointing.

In fact the variable *num2* does exactly that.

We want to assign to *num2* the value stored at the address referenced by the pointer variable *numPtr*. Remember that *numPtr* points to the address of the *num* variable (*&num*), and that variable has the value of `100`.

```c
num2 = *numPtr;
```

Again we've used the star operator (\*), and when we put this in front of a pointer variable it returns no longer the address, but __the data__ that is found at that address. So we can now assign that data to our __int__ variable *num2*.

Once we run this program we get the output as following:

```txt
num=100, numPtr=1444620972, address of num=1444620972, num2=100
```

Now if we verify that *num2* has indeed been assigned, the value of *num* was `100` and *num2* also has the value `100`.

So in summary, the pointer *numPtr* gave me the address of the *num* variable, and the star operator (\*) returned the data stored at that address.

Accessing stored at an address in this way is sometimes known as dereferencing or indirection. The pointer gives me a reference to an address and the asterisk, which is sometimes called the *dereferencing operator* or the *indirection operator*, gives me access to the data that's stored at that address.
