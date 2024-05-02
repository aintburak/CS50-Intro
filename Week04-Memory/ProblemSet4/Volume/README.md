# CS50 Problem Set 4 - Volume

![WAV File Structure](https://cs50.harvard.edu/x/2024/psets/4/volume/wav_file.png)


## Overview

In this problem set, you will be tackling the challenge of manipulating audio file volumes. Specifically, you will work with WAV files, which store audio as a sequence of samples. These samples are numbers that represent audio signals at specific times. By scaling these samples, we can increase or decrease the volume of the audio.

## Problem to Solve

WAV files begin with a 44-byte header containing metadata about the file, followed by audio data made up of 16-bit integer samples. Your task is to write a program, `volume.c`, that adjusts the volume of an audio file by a specified factor. For example, multiplying each sample value by 2.0 will double the audio volume, while multiplying by 0.5 will halve it.

## Requirements

- Implement `volume.c` in the `volume` directory.
- Your program should:
  1. Accept three command-line arguments: the input file name, the output file name, and the scaling factor.
  2. Read the WAV header from the input file and write it unchanged to the output file.
  3. Scale each sample by the given factor and write the modified sample to the output file.
  4. Handle only 16-bit signed samples.
  5. Manage resources properly, ensuring no memory leaks if `malloc` is used.

## Example Usage

```bash
./volume input.wav output.wav 2.0
```

## Distribution Code

You can download the starting code provided by the CS50 staff, which includes basic file handling and command-line argument parsing.

## Implementation Details

1. **Reading and Writing the Header:**
   - Use `uint8_t` to handle each byte of the 44-byte header.
   - Use `fread()` to read the header from the input file and `fwrite()` to write it to the output file.

2. **Processing Audio Samples:**
   - Use `int16_t` for each audio sample.
   - Read samples one at a time, scale them by the factor, and write the modified samples back.

3. **Using `fread()` and `fwrite()` Effectively:**
   - Utilize the return value of `fread()` to detect the end of the file.
   - Place `fread()` in a loop to continuously read, modify, and write samples until the end of the file is reached.

## Hints

- Ensure proper error handling when opening files. If `fopen()` returns `NULL`, the file might be missing or inaccessible.
- Always close your files with `fclose()` after you're done to prevent any resource leaks.

## Conclusion

By completing this problem set, you will gain a deeper understanding of file I/O operations in C, specifically dealing with binary files like WAV audio. This exercise will also enhance your understanding of data types and memory management in C programming.
