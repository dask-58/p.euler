#!/bin/bash

if [ -z "$1" ]; then
  echo "Usage: $0 [filename]"
  exit 1
fi

FILE="$1"
BASENAME="${FILE%.cpp}"

if [ ! -f "$FILE" ]; then
  echo "Error: File '$FILE' not found!"
  exit 1
fi

echo "Compiling $FILE..."
g++ -std=c++17 -o "$BASENAME" "$FILE"

if [ $? -ne 0 ]; then
  echo "Compilation failed."
  exit 1
fi

echo "Compilation successful. Running $BASENAME..."

./"$BASENAME"

rm "$BASENAME"
