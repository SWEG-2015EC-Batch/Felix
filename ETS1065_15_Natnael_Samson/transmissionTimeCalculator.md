This program calculates the time to transmit a file based on its size and a fixed transmission rate.

                                             Analysis

Input:
The user is prompted to enter the file size in bytes.

Process:
The program calculates the transmission time based on the given transmission rate of 960 characters per second: transmissionTime = fileSizeInCharacters / transmissionRate.

Output:
The program displays the time required to transmit the file in seconds.

                                              Algorithm Design (Pseudocode)
1. Display "Enter the file size in bytes: " prompt
2. Read user input and store it in the variable fileSizeInBytes
3. Set fileSizeInCharacters to fileSizeInBytes
4. Calculate transmissionTime using the formula: transmissionTime = fileSizeInCharacters / transmissionRate
5. Display "Time required to transmit the file: ", transmissionTime, " seconds"
6. End program
                                              
