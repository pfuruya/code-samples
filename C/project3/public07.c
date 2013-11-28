/*
 * CMSC 216, Spring 2013, Project #3
 * Public test 7 (public07.c)
 *
 * Tests different options for the cd command.  Run with input redirected
 * from public07.input.
 */

#include <stdio.h>
#include "filesystem.h"
#include "driver.h"

int main() {
  Filesystem filesystem;

  driver(&filesystem);

  return 0;
}
