# The relationship between pointers and arrays

Arrays in C are actually just sequential data items stored at some location in memory. The address of the array is the same as the address of the first item in the array, because it is where the array begins.

The name of the array (that is the name you get to the array variable) is also the address of the array.

To explain this let's look at how strings are used in C.

Unlike many other languages C does not have a dedicated string data type, in C a string is just an array of characters. For convenience C treats the null character `\0` as the string terminator.

When you declare a string variable like this:

```c
char str_one[] = "Hello World";
```

C automatically adds a null char at the end.

Now let's see if we can find where this string is stored in memory.

```c
# include <stdio.h>

int main(int argc, char **argv){
    char str_one[] = "Hello World";
    printf("%s %c %d %d %d\n", str_one, str_one[0], &str_one, &str_one[0], str_one);
    return 0;
}
```

On the program above you can see that we've just created a string *Hello world* which we've assigned to the string array variable `str_one`.

By running the program you should get an output similar to this:

```txt
Hello World H -181919468 -181919468 -181919468
```

First it displays the string, that is the array of characters of the variable `str_one`.

```txt
Hello World
```

Then the character at index `0`, that is at the first index of the array which is `H` of *Hello world*, `str_one[0]`.

```txt
H
```

Then we show the address of the array, which is this number representing a memory location, `&str_one`.

```txt
-181919468
```

Now we get the address of the first character, remember that earlier we saw that the address of the array is the same as the address of the first item in the array, `&str_one[0]`.

```txt
-181919468
```

Well we can see that's true because the address of the character `H`, which is shown when we use the Address-Of operator (&) `str_one[0]` is the same as the address of the string shown when we use the Address-Of operator (&) with the string variable `str_one`.

But take a look at the last value presented. Instead of using the Address-Of operator (&) to get an address we just display the variable itself `str_one` as an integer using `%d` in the format string.

```txt
-181919468
```

And this shows the same number, which is the address of the array.

## Revision

Now to understand how this works let's review what we've saw at the beginning of this lesson because it's really important that you understand this.

1. The address of an array is the same as the address of the first item in the array because it's where the array begins.
2. And the name of the array (that is the name you give to the array variable) is also the address of the array.

In other words, we may tend to think of arrays as fixed length lists and in many other programming languages that may be all you need to know about arrays. But the way your computer and the C language creates and stores an array is a bit different.

So remember that an array is really the same as an address in memory, that defines the beginning of sequential data items.

And when you deal with arrays (including strings) you're dealing with addresses. And usually when you're dealing with addresses, you will be using pointers. We will cover that in the next lesson.

### Futher reading

Here is an external reference about [how to interpreted memory addresses integers](https://stackoverflow.com/questions/1689423/memory-address-positive-or-negative-value-in-c).

Also there is [an pdf that covers that topic](/assets/pdfs/Printing-pointer-values.pdf)