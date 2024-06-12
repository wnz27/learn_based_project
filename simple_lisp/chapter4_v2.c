/*
 * @Author: 27
 * @LastEditors: 27
 * @Date: 2024-06-12 11:52:58
 * @LastEditTime: 2024-06-12 11:54:11
 * @FilePath: /learn_based_project/simple_lisp/chapter4_v2.c
 * @description: type some description
 */
#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
// #include <editline/history.h>

int main(int argc, char **argv) {

  /* Print Version and Exit Information */
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  /* In a never ending loop */
  while (1) {

    /* Output our prompt and get input */
    char *input = readline("lispy> ");

    /* Add input to history */
    add_history(input);

    /* Echo input back to user */
    printf("No you're a %s\n", input);

    /* Free retrieved input */
    free(input);
  }

  return 0;
}