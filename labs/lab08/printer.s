    #hello world for MIPS Brian Chen
    .data 
hello: .asciiz "Brian Chen \n"
    .text
main: li $v0, 4
    la $a0, hello
    syscall

    li $a1, 18
    li $a2, 27
    li $a3, -11
    add $t0, $a2, $a3
    add $a0, $a1, $t0

    li $v0, 1
    syscall

    li $v0, 10
    syscall