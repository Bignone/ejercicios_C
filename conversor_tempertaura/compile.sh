echo "* Compiling conversor program *"
echo "."
echo "Cleaning previous files... "
make -f makefile clean
echo "."
echo "Compiling..."
#gcc conversor.c -Wall -o conversor
make
echo "."
echo "Finished!"
