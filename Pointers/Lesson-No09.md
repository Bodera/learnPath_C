# Indirection and command-line args

We're going to cover now another very common example of multiple indirection often find that the `main()` function of a *C* programm, the argument `char **argv` preceded by two stars (*) which, as we know, that means it's a pointer to a pointer to, in this case, a `char`. The `**argv` gives us the number or count of arguments.

You can see the code of this lesson by clicking [here](./assets/src/006-IndirectionAndCommandlineArgs.c).

You can search how to pass command-line arguments in your prefered IDE, in case you're using Geany as I'm using on my machine, the steps to pass command-line arguments when executing a file is:

> Build > Set build commands > Run commands panel

If you prefer to execute the steps from a terminal instead:

```bash
$ gcc [programName].c -o programName
$ ./programName <arg1> <arg2> ... <argN>
```

The expected output for this program is: 

```bash
arg 0 is programName
arg 1 is <arg1>
arg 2 is <arg2>
...
arg N is <argN>



arg 0 is programName
arg 1 is <arg1>
arg 2 is <arg2>
...
arg N is <argN>
```

Notice how even withou supplying any arguments the executable name is received as the only argument at index 0.

The arguments are received by the main procedure as an array that initializes the `**argv` argument and then, the code parses them out into individual strings.
