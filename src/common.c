/*
 * this file should contain common functions used in this library.
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * read_to_memory()
 * reads an entire file to memory and returns a pointer.
 *
 * returns NULL on failure.
 */
char* read_to_memory(char file_name[]){

  /* declare a file pointer */
  FILE *infile;
  char *buffer;
  long numbytes;

  infile = fopen(file_name, "rb");

  if(infile == NULL){
    return NULL;
  }

  //get filesize
  fseek(infile, 0L, SEEK_END);
  numbytes = ftell(infile);

  /* reset the file position indicator to
  the beginning of the file */
  fseek(infile, 0L, SEEK_SET);

  /* grab sufficient memory for the
  buffer to hold the text */
  buffer = (char*)calloc(numbytes+1, sizeof(char));

  // guarantee nulltermination.
  buffer[numbytes+1] = 0;

  // memory error
  if(buffer == NULL){
    return NULL;
  }

  /* copy all the text into the buffer */
  fread(buffer, sizeof(char), numbytes, infile);
  fclose(infile);

  return buffer;
}

/*
 * strip_comments()
 * removes everything from TOKEN until newline in a memory chunk
 *
 * returns a new buffer on success
 * returns NULL on failure
 */
char* strip_comments(char *file_to_strip, char TOKEN){
  long current_char = 0;
  long byte_count = 0;
  char *buffer;

  while(file_to_strip[byte_count] != 0){
    byte_count++;
  } 
  // input or memory error
  if (!byte_count) {
    return NULL;
  }

  buffer = (char*)calloc(byte_count, sizeof(char));

  while(file_to_strip[current_char] != TOKEN){

  }

  return NULL;
}
