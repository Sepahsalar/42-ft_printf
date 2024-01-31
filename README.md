# 42-ft_printf
The `printf()` function stands out as one of the most versatile and widely used functions in the `C` programming. From aiding in testing to facilitating tabulation, `printf` serves as a powerful and indispensable tool for developers. This project seeks to replicate the functionality of the original MacOS's `printf`, encompassing its basic error handling, various flags, minimum field width specification, and the majority of its basic conversions.

</br>

# Content

1. [Usage](#Usage)
2. [Description](#description)
3. [Algorithm](#algorithm)

</br>

## Usage

Follow the steps below to test the project: 

1. Clone the repository:
```bash
$> git clone https://github.com/Sepahsalar/42-ft_printf.git
```
2. Compile the project:
```bash
$> make
```
3. Write your own test file and compile it with this command:
```bash
$> cc -Wall -Wextra -Werror <test_file>.c libftprintf.a
```

</br>

## Description

This project is pretty straightforward. It asks students to recode `printf()` in order to make them learn about how a **variadic function** works.

Implemented conversion characters are:

- `%c` Prints a single character.
- `%s` Prints a string (as defined by the common C convention).
- `%p` Prints a void * pointer argument in hexadecimal format.
- `%d` Prints an integer in base 10.
- `%i` Prints an integer in base 10.
- `%u` Prints an unsigned integer (base 10) number.
- `%x` Prints a number in hexadecimal (base 16) lowercase format.
- `%X` Prints a number in hexadecimal (base 16) uppercase format.
- `%%` Prints a percent sign.

</br>

## Algorithm

The project contains eight files (besides [`Makefile`](Makefile)). To sum up,

- [`ft_printf.h`](ft_printf.h): contains the prototypes of all necessary functions to the project.
- [`ft_printf.c`](ft_printf.h): It has three functions. They are:
  - `ft_printf()`: The main function that mimics the behavior of printf. It initializes a variable argument list, calls ft_putprintf() to process the format string, and returns the total length of the printed string.
  - `ft_check()`: This static function checks the format specifier and calls corresponding functions to handle the conversion. For example, for `%c`, it calls `ft_putchar()` to print a character.
  - `ft_putprintf()`: Another static function responsible for parsing the format string and invoking `ft_check()` for each format specifier encountered. It calculates the total length of the printed string.
- [`ft_printf_utils.c`](ft_printf_utils.c): Implements helper functions to manipulate heap(or dynamic) memory and arrays.
- [`ft_puthex.c`](ft_puthex.c): Handles the conversion of hexadecimal flag.
- [`ft_putnbr.c`](ft_putnbr.c): Handles the conversion of integer flag.
- [`ft_putpoint.c`](ft_putpoint.c): Handles the conversion of pointer flag.
- [`ft_uns_putnbr.c`](ft_uns_putnbr.c): Handles the conversion of unsigned integer flag.