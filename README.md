NAME
        _printf

SYNOPSIS
       #include holberton.h

       int _printf(const char * format , ...);
       
DESCRIPTION
       The  _printf  function  replicates  the  functionality  of the regular
       printf. It is currently in beta and open to contributors.  If  you  or
       someone  you  know has been diagnosed with no_checker_checks syndrome,
       helping us complete _printf may be the cure.

       Return Value

       Upon successful return, _printf will return the number of the  charac‐
       ters printed.

       % Modifier

       By  using  the  % modifier before an <option> command, you are able to
       print out different types of output.

OPTIONS
       c - Print a char

       s - Print a string

       d - Print an integer

       i - The same as d , print an integer

       % - Print out a percent sign

       r - Print a string in reverse

SEE ALSO
        Betty(1)

BUGS
       No known bugs.

AUTHOR
       Kyle Litscher & Rory Fahy
