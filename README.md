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

## Day 3 - Digital logic with TL-Verilog in Makerchip IDE

Topics discussed:
- Logic gates
- Introduction to Makerchip IDE
- State machines
- Values in Verilog
- Pipelines
- Easy and safe retiming
- Validity

### Labs

In these labs, I went ahead and developed the code and updated it on this GitHub, but didn't take screenshots, so I'll show a print of codes used for each calculator proposed in labs below

Image 15 - First calculator proposed and using previous state
<img width="1919" height="893" alt="day3-calculator" src="https://github.com/user-attachments/assets/39cf01a4-58ae-4276-96a6-302737870391" />

Image 16 - Seeing how the error are ORed together in pipeline and propagate
<img width="1919" height="899" alt="day2-pipelineerror" src="https://github.com/user-attachments/assets/ee5990a1-11dd-4dec-912c-2e5e7fc8b80d" />

Image 17 - Proposed changes in calculator
<img width="1919" height="906" alt="day2-calculatorandcounter" src="https://github.com/user-attachments/assets/3903536c-70d0-4a0b-a0a2-969d0b382705" />

Image 18 - Added a memory element (as shown in the mux) to the calculator and the concept of validity, after learning those two 
<img width="1919" height="911" alt="day3-calcmem1" src="https://github.com/user-attachments/assets/19e448de-e61e-4dca-b743-5545bb55dbe6" />

## Day 4 - Basic RISC-V CPU

The labs proposed to create a simple RISC-V CPU implementation to serve as a base for future pipeline implementation.

Image 19 - The first step was to create the program counter (branch code already included in print, which will be discussed further). The value of the PC passes to the instruction memory and the data is read in the next step
<img width="979" height="296" alt="day4-1" src="https://github.com/user-attachments/assets/7b710128-4066-462b-8a59-30b8b15fd05c" />

Images 20, 21, 22 - Then, the instruction was identified as to type (R,S,I,B,J,U) and the immediate and decode bits were built based on that. The validity of each type was also verified
<img width="1190" height="682" alt="day4-2" src="https://github.com/user-attachments/assets/6db80fa3-6275-45e3-b12a-fa9444cbc464" />
<img width="868" height="367" alt="day4-3" src="https://github.com/user-attachments/assets/77633401-9563-47c0-97eb-037aad2f0d62" />
<img width="949" height="346" alt="day4-4" src="https://github.com/user-attachments/assets/6698ec57-8636-4c2f-9ffa-d0de19191243" />

Image 23 - The instruction was decoded based on the funct7, funct3 and opcode fields
<img width="756" height="403" alt="day4-5" src="https://github.com/user-attachments/assets/6aa90762-f526-4b1b-89f9-0e67a41745e7" />

Image 24 - The register file was also added, and its read data was connected to the input of the ALU. The output of the ALU was connected to the write data of the RF

<img width="759" height="537" alt="day4-6" src="https://github.com/user-attachments/assets/1b06ed6a-68cb-4a12-a962-77fb69197d0b" />

Image 25 - To finalize this implementation, branch was also added. The branch taken variable is then read by the PC
<img width="1029" height="234" alt="day4-7" src="https://github.com/user-attachments/assets/d3016622-4799-4146-8a2f-9d222239ca19" />

Image 26 - This was tested using lines of code already provided by the instructor
<img width="1189" height="588" alt="day4-8" src="https://github.com/user-attachments/assets/896f6cbc-1cd9-4c5a-b766-bbb3aaad6652" />

## Day 5 - Pipelined RISC-V CPU

During this part of the workshop, we developed a pipeline and implemented other instructions over the previous basic core. 

Image 27 - For the first step of the pipeline, the PC had to account for the branch, jump and load instructions. The instruction memory is also read
<img width="824" height="424" alt="day5-1" src="https://github.com/user-attachments/assets/1273300a-f98b-48b4-861f-0551f2b2c55a" />

Images 28, 29 - The beginning of the decoder is basically the same, still on the second step of the pipeline (@1)
<img width="1161" height="783" alt="day5-2" src="https://github.com/user-attachments/assets/2f5f706f-ccd6-47a7-a741-b0f4cfc08e4d" />
<img width="973" height="620" alt="day5-3" src="https://github.com/user-attachments/assets/50ff5d6c-330b-40e4-917e-3276cd4e672e" />

Images 30, 31 - Here, we can see all of the instructions supported by the core being decoded
<img width="565" height="681" alt="day5-4" src="https://github.com/user-attachments/assets/bf27647f-a2df-461c-b38b-d2c87480e855" />
<img width="584" height="540" alt="day5-5" src="https://github.com/user-attachments/assets/dcfbbdd2-88ba-44d0-980b-b684544c6a17" />

Images 32 - In the third step of the pipeline, the register file is read. The srcx_value had to be updated to account for the read-after-write hazard
<img width="961" height="496" alt="day5-6" src="https://github.com/user-attachments/assets/90f4d06b-aef4-44e8-8825-e3b38867ca76" />

Image 33 - In the fourth step, the ALU was updated for all of the added instructions
<img width="1191" height="773" alt="day5-7" src="https://github.com/user-attachments/assets/e24e61d3-780b-4e16-ac26-4e3b3590cbd6" />

Image 34 - Still in the fourth step, we deal with the register file write logic, which can only happen if 2 steps behind a load instruction was issued, or if the writing is valid. We also create a valid logic that blocks the pipeline when there's a shadow of a load, branch or jump. Lastly, the type of branch is computed to determine if it's taken or not
<img width="1063" height="626" alt="day5-8" src="https://github.com/user-attachments/assets/e53d1a6a-f37c-47f3-a5b6-bfd4c1d9cef1" />

Image 35 - In the last step of the pipeline, we deal with the data memory, which can be: written if the instruction issued in this step is a store and valid; read if the instruction issued in this step is a load. The address are the first 4 bits of result that comes out of the ALU, and the write data comes from src2_value, linked to rs2
<img width="1077" height="324" alt="day5-9" src="https://github.com/user-attachments/assets/761824b7-6c4f-4c26-a622-f1dae434bc44" />

Image 36 - We used the register file and memories disponibilized by the workshop
<img width="1421" height="124" alt="day5-10" src="https://github.com/user-attachments/assets/279f2c76-2de0-40af-9bb9-a06993b6ca3e" />

Image 37 - To test the added memory, I added store and load word instructions
<img width="1179" height="675" alt="day5-11" src="https://github.com/user-attachments/assets/7a6a2717-b6b8-4d59-b5b2-53d0ba7826ae" />

Image 38 - Final diagram of the core, created in Makerchip
<img width="555" height="806" alt="day5-12" src="https://github.com/user-attachments/assets/3030d855-5429-4526-afe6-1d1561031105" />

