# Multiple indirection

Up to now we've discovered how to create pointer variables that point data items such as, integers and characters. In fact a pointer can also point to another pointer.

![Okay](https://i.imgflip.com/10undw.jpg)

So, if for example, you have this pointer variable that points to an integer:

```c
int *pi;
```

You can have another pointer variable that points to the previous pointer variable by referencing to it as follows:

```c
int **ppi;
```

When you use a pointer to access data stored at an address we call it dereferencing or indirection.

Using a pointer to access data referenced by another pointer may be called multiple indirection.

That's because it requires more than one step, more than one level of indirection to get at of the data such as, an integer, a character, or even an array that is being referenced.

You may wonder why on earth you would want to do that. Well multiple indirection can be used when working lists and arrays.

You might have lists of lists, that are accessed using pointers to pointers. We will see examples of this sort of thing later in this course.

Don't worry about that for now though, at the moment all you need to know is how pointers to pointers work.

Even if you don't use this in your own programs, you will need to understand them if you see them on other people's programs.
