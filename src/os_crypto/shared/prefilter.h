#ifndef HEADER_PREFILTER_H
# define HEADER_PREFILTER_H

/* Applies prefilter if any specified,
 * or open the file and return fd
 */
FILE *prefilter(const char *file_name, const char *prefilter_cmd);

/* Closes the file correctly, regarding if prefilter_cmd is set
 */
int prefilter_close(FILE *fp, const char *prefilter_cmd);

#endif
