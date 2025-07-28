# RISC-V based MYTH + Design Project Workshop
This is a workshop organized by [VLSI System Design](https://www.vlsisystemdesign.com/riscv-based-myth/) with the objective of providing a solid introduction to RISC-V and steps needed to create your own pipelined microprocessor. The tools used are the terminal, GCC and [Makerchip](https://myth.makerchip.com/), developed by [Redwood EDA](https://www.redwoodeda.com/).

## Day 1 - RISC-V ISA and GNU compiler toolchain

Topics discussed:
- Software to hardware introduction
- Description of application binary interface (ABI) and how the operating system communicates with hardware
- ISA, types of instructions
- Binary number representation and negative numbers, two's complement

### Lab

Images 1, 2 - Creating and executing C program, disassembling output into assembly instructions
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/1a19c314-f289-4507-a86b-be900053f281" />
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/ab9daee4-c622-4570-aa96-f7fdd452d8ed" />

Image 3 - From the instructions, it's possible to see that main starts at 100b0 and finishes at 100dc memory locations
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/66cbb24b-8e79-4717-8d75-dd387b585d6a" />

Image 4 - With spike, we can debug the program and see what's stored in memory locations
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/e43d6b64-6fe0-4fc3-9c32-78be81d5091f" />

Images 5, 6 - New lab exercise, now showing highest unsigned number using a C program. If you make the exponent 64 bigger, it won't change the result, since it's already showing the highest value possible
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/64381511-b33c-4a4d-9bd8-57526a4ceb46" />
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/535a02b5-b7f9-4587-a365-951ae3b04b73" />

Images 7,8 - Lowest unsigned number
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/ef37b5b1-ba2d-436c-922a-90b7044ca91d" />
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/c33826f8-796a-4a94-8734-7bd92764ad40" />

Image 9 - Highest and lowest signed numbers
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/5b80b05a-8bcc-4e72-bf29-3f4a56a69f5e" />

## Day 2 - ABI and basic verification flow

Topics discussed:
- Detailed description of application binary interface
- 32 RISC-V registers, little-endian, byte-addressable


### Lab

Images 10, 11 - Custom ASM program
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/d18dd1be-119f-41d4-9da1-a494cc051c96" />
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/3c307aa7-2661-49b6-85b0-4769f2090ac5" />

Images 12, 13, 14 - Using the RV core and testbench provided to do a simple verification with iverilog
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/04bbedd8-bc6d-481f-8ec6-91cf50b21f94" />
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/b09d7798-d543-4682-b6d0-c11e4a81ce00" />
<img width="1920" height="966" alt="image" src="https://github.com/user-attachments/assets/0ffe4ee2-a467-4c82-a890-b1aed7329540" />





