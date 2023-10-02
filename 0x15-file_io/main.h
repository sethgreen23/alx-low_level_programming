#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);

#endif
