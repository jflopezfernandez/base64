# Base64
Base64 encoding utility written in C.

## Usage
Base64 is a command-line utility with a simple command interface. At the moment,
the utility will only decode. Furthermore, every command line argument will be
interpreted as a string to encode. There is absolutely no command-line argument
processing of any kind at the moment. (Note that this is only temporary; the
project is still under active development.)

Assuming you're still in the build directory after building the project, simply
run the resulting binary with the strings you wish to encode as arguments. The
program will iterate over each string, base64-encoding each of them and printing
them out one output string per line.

```bash
$ ./base64 horse cow dog "Cheeze whiz"
aG9yc2U=
Y293
ZG9n
Q2hlZXplIHdoaXo=
```

## References
 * [RFC 4648](https://tools.ietf.org/html/rfc4648) - The Base16, Base32, and
Base64 Data Encodings
