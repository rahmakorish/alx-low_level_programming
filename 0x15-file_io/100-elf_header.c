#include "main.h"
#include <elf.h>
void print_osabi_more(Elf64_Ehdr h);
/**
 * print_magic-prints elf magic
 * @h: elf header
 **/
void print_magic(Elf64_Ehdr h)
{
	int i;

	printf(" Magicc:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}
/**
 * print_class-prints elf magic
 * @h: elf header
 **/
void print_class(Elf64_Ehdr h)
{
	printf(" Class: ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
 * main-copies the content of a file to another
 * @argc:argument count
 * @argv:argument vector
 * Return:0success
 **/
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr h;
	ssize_t b;

	if (argc != 2)
	dprintf(STDOUT_FILENO, "Usage: elf_header elf_filename\n");
	exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	dprintf(STDOUT_FILENO, "Can't open file: %s\n", argv[1]);
		exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' && h.e_ident[3] == 'F')
	{
		printf("ELF HEADER:\n");
	}
	else
	{
		dprintf(STDOUT_FILENO, "Not ELF file: %s\n", argv[1]);
		exit(98);
	}
	print_magic(h);
	print_class(h);
/*	print_data(h);
	print_version(h);
	print_osabi(h);
	print_obiversion(h);
	print_type(h);
	print_entry(h);*/
	if (close(fd))
	{
	dprintf(STDOUT_FILENO, "Erroe closing file: %d\n", fd);
	exit(98);
	}
	(void) b;
	return (EXIT_SUCCESS);
}
