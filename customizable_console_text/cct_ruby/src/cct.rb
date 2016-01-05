#!/bin/ruby -w

Class cct
{
    RESET = "\e[0m";
    
    BOLD = "\e[1m";
    DIM = "\e[2m";
    ITALIC = "\e[3m";
    UNDERLINE = "\e[4m";
    BLINK = "\e[5m";
    COLOR_REVERSE = "\e[7m";
    HIDDEN = "\e[8m";
    
    // Foreground colors
    DEFAULT = "\e[39m";
    BLACK = "\e[30m";
    RED = "\e[31m";
    GREEN = "\e[32m";
    YELLOW = "\e[33m";
    BLUE = "\e[34m";
    MAGENTA = "\e[35m";
    CYAN = "\e[36m";
    GRAY_LIGHT = "\e[37m";
    GRAY_DARK = "\e[90m";
    RED_LIGHT = "\e[91m";
    GREEN_LIGHT = "\e[92m";
    YELLOW_LIGHT = "\e[93m";
    BLUE_LIGHT = "\e[94m";
    MAGENTA_LIGHT = "\e[95m";
    CYAN_LIGHT = "\e[96m";
    WHITE = "\e[97m";
    
    // Background colors
    DEFAULT_BACK = "\e[49m";
    BLACK_BACK = "\e[40m";
    RED_BACK = "\e[41m";
    GREEN_BACK = "\e[42m";
    YELLOW_BACK = "\e[43m";
    BLUE_BACK = "\e[44m";
    MAGENTA_BACK = "\e[45m";
    CYAN_BACK = "\e[46m";
    GRAY_LIGHT_BACK = "\e[47m";
    GRAY_DARK_BACK = "\e[100m";
    RED_LIGHT_BACK = "\e[101m";
    GREEN_LIGHT_BACK = "\e[102m";
    YELLOW_LIGHT_BACK = "\e[103m";
    BLUE_LIGHT_BACK = "\e[104m";
    MAGENTA_LIGHT_BACK = "\e[105m";
    CYAN_LIGHT_BACK = "\e[106m";
    WHITE_BACK = "\e[107m";
}
