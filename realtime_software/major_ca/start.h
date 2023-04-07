#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

#define DEFAULT_AMPLITUDE 2
#define DEFAULT_FREQUENCY 10
#define MAX_AMPLITUDE 5
#define MIN_AMPLITUDE 0
#define MAX_FREQUENCY 20
#define MIN_FREQUENCY 10

char* waveform[4];
void print_help();
int init(int argc, char *argv[]);