#ifndef CONSOLE_CONFIG_LOCAL_H__
#define CONSOLE_CONFIG_LOCAL_H__

// This is the default configuration file. It may be used as a template for a local configuration file `console-locals.h' which is included if `CONSOLE_USE_LOCALS' is defined.

// Our little language only works with one integral type, called a "cell" like FORTH. Usually it is the natural int for the part. For Arduino this is 16 bits.
// Define to allow different types for the 'cell'. console_cell_t must be a signed type, console_ucell_t must be unsigned, and they must both be the same size.
#include <stdint.h>
typedef int64_t  console_cell_t;		// Need 64 bit to fit pointers.
typedef uint64_t console_ucell_t;

// For unit test we want printf format for signed cell.
#define CONSOLE_FORMAT_CELL "ld"

// Stack size, we don't need much.
#define CONSOLE_DATA_STACK_SIZE (8)

// Input buffer size
#define CONSOLE_INPUT_BUFFER_SIZE 40

// Character to signal EOL for input string.
#define CONSOLE_INPUT_NEWLINE_CHAR '\n'

// Macros to fake Arduino Flash memory macros.
#define pgm_read_word(a_) (*(a_))
#define PSTR(s_) s_
#define PROGMEM /* empty*/

#endif // CONSOLE_CONFIG_LOCAL_H__
