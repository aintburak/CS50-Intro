# Recover

This tool is designed to recover JPEG files from a forensic image, typically used in data recovery or digital forensic scenarios. It reads through a raw binary file and extracts JPEG files by identifying the JPEG header signature.

## How It Works

The program reads 512-byte blocks from a file (e.g., a memory card dump). It identifies the start of JPEG files by detecting the JPEG header (`0xff 0xd8 0xff [0xe0, 0xe1, ...]`) and continues to save the JPEG data to a new file until another JPEG header is detected or the end of the file is reached.

## Usage

To use this tool, compile the C program and run it from the command line with the file you want to recover JPEGs from as an argument:

\```bash
gcc -o recover recover.c
./recover memory_card.raw
\```

### Parameters

- `FILE`: This is the binary file from which JPEGs will be recovered. The file should be a binary dump of a memory card or similar device.

## Output

The program will output JPEG files in the same directory where it is run. These files will be named sequentially (`000.jpg`, `001.jpg`, etc.) based on the order they are found in the input file.

## Requirements

- GCC compiler or any standard C compiler.
- Basic understanding of command line operations.

## Limitations

- This tool assumes that the JPEG files are stored contiguously and that there is no other data interleaved within the JPEG images other than possible file system metadata which does not disrupt the JPEG headers.
- The tool does not perform error checking on corrupted JPEG files.

## Contributing

Contributions to the project are welcome. You can improve the error handling, add features like recovery of other file types, or improve the efficiency of the existing algorithm.

## License

This project is open-sourced under the MIT License. See the LICENSE file for more details.