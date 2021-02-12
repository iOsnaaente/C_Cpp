#!/usr/bin/python
from __future__ import print_function

# Escreva no lugar da lista abaixo
# as instrucoes de seu programa


def simulador(): 

    exit1=0
    


    program =  { \
                  0:10, 1:3,    2:9,    3:0, \
                  
                  4:5,  5:11,  6:16,    7:9,\

                  8:0,  9:1,    10:1,  11:11,\

                  12:14, 13:10 ,14:0,  15:9,    16:0,\

                  17:15, 18:4,   19:12,  20:22,\

                  21:8, 22:0,\
                  
               }

    while exit1 ==0:
        
        a=int(input())
        i=a
        
        if a==99:
            break

        b=int(input())
        if b!=99:
            program[i]=b
        else:
            break
        
        print(program)





    r0 = 0
    r1 = 0
    pc = 0

    while pc < 23:
        cmd = program[pc]
        print(pc,":",cmd,":",end='')
        if cmd == 0:
            break
        elif cmd < 8:
            if cmd == 1:
                r0 = r0 + r1
                print("r0 = r0 + r1; r0 =",r0)
            elif cmd == 2:
                r0 = r0 - r1
                print("r0 = r0 - r1; r0 =",r0)
            elif cmd == 3:
                r0 = r0 + 1
                print("r0 = r0 + 1; r0 =",r0)
            elif cmd == 4:
                r1 = r1 + 1
                print("r1 = r1 + 1; r1 =",r1)
            elif cmd == 5:
                r0 = r0 - 1
                print("r0 = r0 - 1; r0 =",r0)
            elif cmd == 6:
                r1 = r1 - 1
                print("r1 = r1 - 1; r1 =",r1)
            elif cmd == 7:
                print("beep!")
            pc = pc + 1
        else:
            arg = program[pc+1]
            if cmd == 8:
                print('PRINT("'+str(arg)+'")')
            elif cmd == 9:
                r0 = arg
                print("r0 = arg; r0 =",r0)
            elif cmd == 10:
                r1 = arg
                print("r1 = arg; r1 =",r1)
            elif cmd == 11:
                program[arg] = r0
                print("program["+str(arg)+"] = r0; r0 =",r0)
            elif cmd == 12:
                program[arg] = r1
                print("program["+str(arg)+"] = r1; r1 =",r1)
            elif cmd == 13:
                pc = arg - 2
                print("pc = arg; pc =",arg)
            elif cmd == 14:
                if r0 == 0:
                    pc = arg - 2
                print("if r0 == 0 then pc =",arg,"; r0 =",r0)
            elif cmd == 15:
                if r0 != 0:
                    pc = arg - 2
                print("if r0 != 0 then pc =",arg,"; r0 =",r0)
            pc = pc + 2
        try:
            input()
        except:
            pass
    print("program finished!")

simulador()








