/*
 
Copyright (C) 2015  Team Jellyfish
 
This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.
 
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
 
*/

#ifndef __JELLY_H__
#define __JELLY_H__

#include "kit.h"

struct jellyfish{
    cl_context ctx;
    cl_device_id dev;
    cl_platform_id platform;
    cl_command_queue cq;
    cl_program program;
    cl_kernel kernels[8];
};

typedef struct jellyfish *jelly;

// globals
char **buffer, **buffer2, **buffer3;
bool correct_packet = FALSE;
cl_mem log, output, input, local, group, storage;
cl_int err;
size_t global_size = 4;
size_t local_size = 2;
size_t global_xor_size = 4;
size_t local_xor_size = 2;

#endif
