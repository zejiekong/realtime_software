#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>

int arrow_key;

int waitKey(int delay) {
  struct termios old_tio, new_tio;
  int c;

  // Get the current terminal settings
  tcgetattr(STDIN_FILENO, &old_tio);
  new_tio = old_tio;

  // Set non-canonical mode with no echo to read single characters without buffering or displaying input
  new_tio.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &new_tio);

  fd_set fds;
  struct timeval tv;
  tv.tv_sec = 0;
  tv.tv_usec = delay * 1000; // Convert delay from milliseconds to microseconds

  FD_ZERO(&fds);
  FD_SET(STDIN_FILENO, &fds);

  // Use select to wait for input with timeout
  if (select(STDIN_FILENO + 1, &fds, NULL, NULL, &tv) > 0) {
      if (FD_ISSET(STDIN_FILENO, &fds)) {
          c = getchar(); // Read a single character from stdin
      }
  } else {
      c = -1; // Return -1 if no key is pressed within the timeout
  }

  // Restore the original terminal settings
  tcsetattr(STDIN_FILENO, TCSANOW, &old_tio);

  return c;
}

int keyboard()
{
  while (1) {
  int ch = 0;
  ch = waitKey(500);
    if (ch == 27) { // Check for escape sequence
      char arrow_buf[3];
      arrow_buf[0] = getchar();
      arrow_buf[1] = getchar();
      arrow_buf[2] = '\0';
      if (strcmp(arrow_buf, "[A") == 0) {
        printf("Up arrow key pressed.\n");
        arrow_key = 1;
      } else if (strcmp(arrow_buf, "[B") == 0) {
        printf("Down arrow key pressed.\n");
        arrow_key = 2;
      } else if (strcmp(arrow_buf, "[C") == 0) {
        printf("Right arrow key pressed.\n");
        arrow_key = 3;
      } else if (strcmp(arrow_buf, "[D") == 0) {
        printf("Left arrow key pressed.\n");
        arrow_key = 4;
      }
    }
  }
}