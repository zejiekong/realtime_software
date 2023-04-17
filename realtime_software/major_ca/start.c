#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <getopt.h>
#include "start.h"

#define DEFAULT_AMPLITUDE 2
#define DEFAULT_FREQUENCY 10
#define MAX_AMPLITUDE 5
#define MIN_AMPLITUDE 0
#define MAX_FREQUENCY 20
#define MIN_FREQUENCY 10

char* waveform[4] = {"sine","sawtooth","square","triangle"};
//waveform, amplitude,frequency ...

void print_help(const char* program_name) {
    printf("Usage: %s [OPTIONS]\n", program_name);
    printf("Generate a waveform with specified amplitude and frequency.\n");
    printf("Options:\n");
    printf("  -w, --waveform=TYPE         Set the waveform type (default: sine)\n");
    printf("                              Supported types: sine, sawtooth, square, triangle\n");
    printf("  -a, --amplitude=AMPLITUDE   Set the waveform amplitude (default: %d)\n", DEFAULT_AMPLITUDE);
    printf("  -f, --frequency=FREQUENCY   Set the waveform frequency in Hz (default: %d)\n", DEFAULT_FREQUENCY);
    printf("  -h, --help                  Display this help message\n");
    printf("E.g. ./main -w sine -a 3 -f 50\n");
    printf("To generate sine wave with 3V amplitude and 50Hz frequency\n");
}

int init(int argc, char *argv[]) 
{
    double amplitude = DEFAULT_AMPLITUDE;
    double frequency = DEFAULT_FREQUENCY;
    char* waveform_type = "sine";

    int option;
    static struct option long_options[] = {
        {"waveform", required_argument, 0, 'w'},
        {"amplitude", required_argument, 0, 'a'},
        {"frequency", required_argument, 0, 'f'},
        {"help", no_argument, 0, 'h'},
        {0, 0, 0, 0}
    };

    while ((option = getopt_long(argc, argv, "a:f:w:h", long_options, NULL)) != -1) {
        switch (option) {
            case 'a':
                amplitude = atof(optarg);
                printf("amp: %f\n",amplitude);
                if(amplitude <MIN_AMPLITUDE || amplitude > MAX_AMPLITUDE)
                {
                    printf("%f not in amplitude range of %d to %d\n",amplitude,MIN_AMPLITUDE,MAX_AMPLITUDE);  
                    print_help(argv[0]);
                    exit(1);
                }
                break;
            case 'f':
                frequency = atof(optarg);
                printf("freq: %f\n",frequency);
                if(frequency < MIN_FREQUENCY || frequency > MAX_FREQUENCY)
                {
                    printf("%f not in frequency range of %d to %d\n",amplitude,MIN_FREQUENCY,MAX_FREQUENCY);
                    print_help(argv[0]);
                    exit(1);
                }
                break;
            case 'w':
                waveform_type = optarg;
                printf("wave: %s\n",waveform_type);
                int match_found = 0;
                for(int i=0;i<4;i++)
                {
                    if(strcmp(waveform_type,waveform[i])==0)
                    {
                        match_found = 1;
                        break;
                    }
                }
                if (match_found == 0)
                {
                    printf("%s not a waveform option\n",waveform_type);
                    print_help(argv[0]);
                    exit(1);
                }
                break;
            case 'h':
                print_help(argv[0]);
                return 0;
            default:
                print_help(argv[0]);
                return 1;
        }
    }
}

    