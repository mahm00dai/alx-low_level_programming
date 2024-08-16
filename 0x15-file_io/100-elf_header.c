#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * error_exit - Prints an error message and exits with status 98.
 * @message: The error message to print.
 * @filename: The filename to include in the error message, or NULL.
 *
 * This function prints an error message to the standard error output
 * and exits the program with status code 98. If a filename is provided,
 * it is included in the message.
 */
void error_exit(const char *message, const char *filename)
{
	if (filename)
		dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	else
		dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
 * print_magic - Prints the magic numbers of the ELF header.
 * @e_ident: The ELF identification array from the ELF header.
 *
 * This function prints the magic numbers (the first 16 bytes) of the ELF
 * header in hexadecimal format.
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");
}

/**
 * print_class - Prints the class of the ELF file.
 * @e_ident: The ELF identification byte for class.
 *
 * This function prints the class of the ELF file, such as ELF32 or ELF64.
 * It interprets the class byte from the ELF identification array.
 */
void print_class(unsigned char e_ident)
{
	printf("  Class:                             ");
	switch (e_ident)
	{
		case ELFCLASSNONE:
			printf("Invalid class\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident);
	}
}

/**
 * print_data - Prints the data encoding of the ELF file.
 * @e_ident: The ELF identification byte for data encoding.
 *
 * This function prints the data encoding of the ELF file, such as little
 * endian or big endian. It interprets the data encoding byte from the
 * ELF identification array.
 */
void print_data(unsigned char e_ident)
{
	printf("  Data:                              ");
	switch (e_ident)
	{
		case ELFDATANONE:
			printf("Invalid data encoding\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident);
	}
}

/**
 * print_version - Prints the version of the ELF file.
 * @e_ident: The ELF identification byte for version.
 *
 * This function prints the version of the ELF file. It interprets the
 * version byte from the ELF identification array and prints whether
 * it is the current version or not.
 */
void print_version(unsigned char e_ident)
{
	printf("  Version:                           ");
	switch (e_ident)
	{
		case EV_NONE:
			printf("Invalid version\n");
			break;
		case EV_CURRENT:
			printf("1 (current)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident);
	}
}

/**
 * print_osabi - Prints the OS/ABI information of the ELF file.
 * @e_ident: The ELF identification byte for OS/ABI.
 *
 * This function prints the OS/ABI (Operating System/Application Binary
 * Interface) of the ELF file. It interprets the OS/ABI byte from the ELF
 * identification array and prints the corresponding string.
 */
void print_osabi(unsigned char e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident);
	}
}
/**
 * print_abiversion - Prints the ABI version of the ELF file.
 * @e_ident: The ELF identification byte for ABI version.
 *
 * This function prints the ABI (Application Binary Interface) version of
 * the ELF file. It interprets the ABI version byte from the ELF
 * identification array and prints its value.
 */
void print_abiversion(unsigned char e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident);
}

/**
 * print_type - Prints the type of the ELF file.
 * @e_type: The ELF type from the ELF header.
 *
 * This function prints the type of the ELF file, such as executable or
 * shared object. It interprets the type field from the ELF header.
 */
void print_type(uint16_t e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - Prints the entry point address of the ELF file.
 * @e_entry: The entry point address from the ELF header.
 *
 * This function prints the entry point address of the ELF file in
 * hexadecimal format. It interprets the entry point address field from
 * the ELF header.
 */
void print_entry(uint64_t e_entry)
{
	printf("  Entry point address:               0x%lx\n", (unsigned long)e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		error_exit("Usage: elf_header elf_filename", NULL);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_exit("Error: Can't read from file", argv[1]);

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		error_exit("Error: Can't read from file", argv[1]);

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
		error_exit("Error: Not an ELF file", argv[1]);

	printf("ELF Header:\n");
	print_magic(header.e_ident);
	print_class(header.e_ident[EI_CLASS]);
	print_data(header.e_ident[EI_DATA]);
	print_version(header.e_ident[EI_VERSION]);
	print_osabi(header.e_ident[EI_OSABI]);
	print_abiversion(header.e_ident[EI_ABIVERSION]);
	print_type(header.e_type);
	print_entry(header.e_entry);

	close(fd);
	return (0);
}

