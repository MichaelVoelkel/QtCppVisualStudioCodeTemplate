# Simple Qt template for VSC

# Prerequisites
Tested with macOS, should also work with Linux, but under Windows you need a Linux subsystem to run bash. (Gladly add a
`bat` file as pull request)

# Idea / Introduction
The idea of this very simple template is to have something that works mostly out of the box for building a
C++ Qt project that can be used in Visual Studio Code.

You can use `scripts/build.sh` to compile fresh and `scripts/run.sh` to compile and run.

One important detail is that the build will generate a file `compile_commands.json` with include directories which is in turn
used by `.vscode/c_cpp_properties.json`. Why is this important? It will enable IntelliSense and Ctrl/Cmd+Click
in Visual Studio Code which is otherwise hard to achieve due to Qt's include folder structure that heavily
uses symlinks etc.

## How to use
Either run

`QT_DIR=<your_qt_directory_path> scripts/build.sh`

or have `QT_DIR` as environment variable

or just put `QT_DIR` into `build.sh`.

Then, you _need_ to adjust your `c_cpp_properties.json` because it only works when there are machine- and OS-specific
settings set. The example file works for macOS. Please create your own one via `Ctrl/Cmd+Shift+P` (Ctrl on Windows,
Cmd on macOS) `=> C/C++: Edit configuration (JSON)` and add the `compileCommands` line.

Once done, Intellisense in `main.cpp` should work.

## Note:
Generator must be `Unix Makefiles`, otherwise `compile_commands.json` is not generated. It might also be created
with other generators but at least `Xcode` does not work as of the time of this writing.