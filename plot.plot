set terminal postscript color
set output "output.ps"
set title "problem 1"
set xlabel "size"
set ylabel "time (seconds)"
plot [:][:] "data.out" using 1:2 with line

