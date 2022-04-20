# Simple consent
Simple C++ program to ask user for action confirmation. Intended to be used to confirm some actions inside IDE (i.e. confirm to publish a new version of a library),
but can be used in any environment or use case.

## Usage

It is **very** easy to use.

```bash
./consent "Are you sure you want to do that?"
```

That's it. Literally one argument - your prompt. Program will add ` [y/N]: ` automatically.

## Compiling

```bash
g++ -o consent ./consent.cpp
```
Tested on Arch Linux (btw). IDK if it is portable to Windows (maybe with use of Cygwin or MinGW).

## License

Licensed under MIT License.
