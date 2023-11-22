    #Homework 09 Brian Chen
    .data
x:    .word 10
    .word 2
    .word 31
    .word 44
    .word 0
    .word 9
prompt:
    .asciiz "Result: "

    .text
main:
    la $s0, x

    add $s1, $0, $0

loop:
    lw $t2, 0($s0)
    beq $t2, $0, done

    li $t3, 30
    bgt $t2, $t3, greater_than
    
    j skip_adding
    
greater_than:
    add $s1, $s1, $t2

skip_adding:
    add $s0, $s0, 4

    j loop
done:

    li $v0, 4
    la $a0, prompt
    syscall

    li $v0, 1
    addi $a0, $s1, 0
    syscall

    li $v0, 10
    syscall