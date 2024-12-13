#!/bin/bash

# Check if a filename was provided
if [ -z "$1" ]; then
  echo "Usage: $0 [filename]"
  exit 1
fi

# Extract the base name (without extension) and input filename
FILE="$1"
BASENAME="${FILE%.cpp}"

# Check if the file exists
if [ ! -f "$FILE" ]; then
  echo "Error: File '$FILE' not found!"
  exit 1
fi

# Compile the C++ file
echo "Compiling $FILE..."
g++ -std=c++17 -o "$BASENAME" "$FILE"

# Check if the compilation was successful
if [ $? -ne 0 ]; then
  echo "Compilation failed."
  exit 1
fi

echo "Compilation successful. Running $BASENAME..."

# Run the compiled program
./"$BASENAME"

# Clean up the compiled binary (optional)
# Uncomment the next line if you want the script to remove the binary after execution
# rm "$BASENAME"
