#include <stdio.h>

int main() {
    const char *yellow = "\033[33m";
    const char *reset = "\033[0m";
    const char *blue = "\033[34m";
   const char *cyan = "\033[36m";
    printf("__________________________________\n");
    printf("___________%s###%s______%s*%s_____________\n",yellow, reset,blue,reset);
    printf("________%s####%s__________________%s*%s___\n",yellow, reset,blue,reset);
    printf("______%s####%s________________%s*%s_______\n",yellow, reset,blue,reset);
    printf("____%s#####%s______________%s* *_* *%s____\n",yellow, reset,blue,reset);
    printf("___%s#####%s________________%s*_*_*%s_____\n",yellow, reset,blue,reset);
    printf("__%s######%s_______________%s**   **%s____\n",yellow, reset,blue,reset);
    printf("_%s#######%s__________________________\n",yellow, reset);
    printf("_%s#######%s__________________________\n",yellow, reset);
    printf("_%s########%s_______________%s*%s_________\n",yellow, reset,blue,reset);
    printf("_%s###############%s__________________\n",yellow, reset);
    printf("_%s############%s__________%s167205110169%s\n",yellow, reset,cyan, reset);
    printf("__%s##########%s__________%sATTAPOL PUMCHAI%s\n",yellow, reset,cyan, reset);
    printf("___%s###########%s____________________\n",yellow, reset);
    printf("____%s############################%s__\n",yellow, reset);
    printf("______%s#########################%s___\n",yellow, reset);
    printf("________%s#####################%s_____\n",yellow, reset);
    printf("__________%s#################%s_______\n",yellow, reset);
    printf("______________%s#########%s___________\n",yellow, reset);
    printf("__________________________________\n");
}

