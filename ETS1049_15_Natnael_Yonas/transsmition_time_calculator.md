# Problem Analysis
    1. Input: The user is prompted to enter the file size in bytes.
    2. Process: The program calculates the transmission time based on the given transmission rate of 960 characters per second: transmissionTime = fileSizeInCharacters / transmissionRate
    3. output: Output: The program displays the time required to transmit the file in seconds.

# Algorithm Design 
    1. Start
    2. Prompt user for input: "Enter the file size in bytes: " 
    3. Read user input and store it in the variable fileSizeInBytes
    4. Calculate transmissionTime using the formula: transmissionTime = fileSizeInCharacters / transmissionRate
    5. Display "Time required to transmit the file: ", transmissionTime, " seconds"
    6. End program
# Flowchart
```mermaid
flowchart TD;
A([Start]) --> B[/Enter the file size in bytes:/];
B--> C["transmissionTime = fileSizeInCharacters / transmissionRate"];
C --> D[/'Time required to transmit the file:' transmissionTime/];
D --> E([End]);
```
