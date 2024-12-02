/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lift.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:34:10 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/02 11:57:21 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SECTION: Inclusions */

/* SECTION: Function definitions */
int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int isascii(int c);
int isprint(int c);
int strlen(const char* s);
void *memset(void *dest, int ch, size_t count);
void *bzeor(void* ptr, size_t n);
void *memcpy(void *dest, const void *src, size_t count);
void *memmove(void* dest, const void* src, size_t count);
char *strncpy(char *dest, const char *src, size_t count);
size_t strlcpy(char *dst, const char *src, size_t size);
size_t strlcat(char *dst, const char *src, size_t size);
int toupper(int c);
int tolower(int c);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
int strncmp(const char *s1, const char *s2, size_t n);
void *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
char *strnstr(const char *big, const char *little, size_t len);
int atoi(const char *nptr);
void *malloc(size_t size);
char *strdup(const char *s);
