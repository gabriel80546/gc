compile="gcc -I . -I lists -I gc_list -I libftgc lists/*.c *.c libftgc/*.c gc_list/*.c"
echo $compile
$compile
