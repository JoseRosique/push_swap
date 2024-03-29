<a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl4qxms4g001609l49j835g66/project/2597729" alt="joslopez's 42 push_swap Score" /></a>
# MANDATORY PART
<b>The rules</b>
<p>• You have 2 stacks named a and b.</p>
<p>• At the beginning:</p>
<p>◦ The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.</p>
<p>◦ The stack b is empty.</p>
<p>• The goal is to sort in ascending order numbers into stack a. To do so you have the following operations at your disposal:</p>
<p><i>sa (swap a): Swap the first 2 elements at the top of stack a.</i></p>
<p>Do nothing if there is only one or no elements.</p>
<p><i>sb (swap b): Swap the first 2 elements at the top of stack b.</i></p>
<p>Do nothing if there is only one or no elements.</p>
<p><i>ss : sa and sb at the same time.</i></p>
<p><i>pa (push a): Take the first element at the top of b and put it at the top of a.</p>
<p>Do nothing if b is empty.</p>
<p><i>pb (push b): Take the first element at the top of a and put it at the top of b.</i></p>
<p>Do nothing if a is empty.</p>
<p><i>ra (rotate a): Shift up all elements of stack a by 1.</i></p>
<p>The first element becomes the last one.</p>
<p><i>rb (rotate b): Shift up all elements of stack b by 1.</i></p>
<p>The first element becomes the last one.</p>
<p><i>rr : ra and rb at the same time.</i></p>
<p><i>rra (reverse rotate a): Shift down all elements of stack a by 1.</i></p>
<p>The last element becomes the first one.</p>
<p><i>rrb (reverse rotate b): Shift down all elements of stack b by 1.</i></p>
<p>The last element becomes the first one.</p>
<p><i>rrr : rra and rrb at the same time.</i><n/p>
<p></p>
<b>THE "push_swap" PROGRAM</b>
<p></p>
<p>Your project must comply with the following rules:</p>
<p>• You have to turn in a Makefile which will compile your source files. It must not
relink.</p>
<p>• Global variables are forbidden.</p>
<p>• You have to write a program named push_swap that takes as an argument the stack
a formatted as a list of integers. The first argument should be at the top of the
stack (be careful about the order).</p>
<p>• The program must display the smallest list of instructions possible to sort the stack
a, the smallest number being at the top.</p>
<p>• Instructions must be separated by a ’\n’ and nothing else.</p>
<p>• The goal is to sort the stack with the lowest possible number of operations. During
the evaluation process, the number of instructions found by your program will be
compared against a limit: the maximum number of operations tolerated. If your
program either displays a longer list or if the numbers aren’t sorted properly, your
grade will be 0.</p>
<p>• If no parameters are specified, the program must not display anything and give the
prompt back.</p>
<p>• In case of error, it must display "Error" followed by a ’\n’ on the standard error.
<p>Errors include for example: some arguments aren’t integers, some arguments are
bigger than an integer and/or there are duplicates.</p>
<p></p>
<b>BONUS PART</b>
<p></p>
<p>• Write a program named checker that takes as an argument the stack a formatted
as a list of integers. The first argument should be at the top of the stack (be careful
about the order). If no argument is given, it stops and displays nothing.</p>
<p>• It will then wait and read instructions on the standard input, each instruction will
be followed by ’\n’. Once all the instructions have been read, the program has to
execute them on the stack received as an argument.</p>
<p>• If after executing those instructions, the stack a is actually sorted and the stack b
is empty, then the program must display "OK" followed by a ’\n’ on the standard
output.</p>
<p>• In every other case, it must display "KO" followed by a ’\n’ on the standard output.</p>
<p>• In case of error, you must display "Error" followed by a ’\n’ on the standard error. Errors include for example: some arguments are not integers, some arguments
are bigger than an integer, there are duplicates, an instruction doesn’t exist and/or
is incorrectly formatted.</p>
