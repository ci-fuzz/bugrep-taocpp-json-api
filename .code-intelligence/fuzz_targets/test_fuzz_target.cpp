#include <iostream>
#include <stddef.h>
#include <stdint.h>
#include <tao/json.hpp>

// extern "C" int FUZZ_INIT_WITH_ARGS(int *argc, char ***argv) {
extern "C" int FUZZ_INIT()
{
   // Add global setup code here - called once before fuzzing starts

   return 0;  // Non-zero return values are reserved for future use.
}

extern "C" int FUZZ( const char* Data, size_t Size )
{

   return 0;  // Non-zero return values are reserved for future use.
}