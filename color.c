#include "include/color.h"

const char* get_case_color(int value) {
    switch (value) {
        case 2:   return "\033[42m";
        case 4:   return "\033[43m";
        case 8:   return "\033[44m";
        case 16:  return "\033[45m";
        case 32:  return "\033[46m";
        case 64:  return "\033[41m";
        case 128: return "\033[48;5;220m";
        case 256: return "\033[48;5;196m";
        case 512: return "\033[48;5;202m";
        case 1024:return "\033[48;5;100m";
        case 2048:return "\033[48;5;58m";
        default:  return "\033[40m";
    }
}