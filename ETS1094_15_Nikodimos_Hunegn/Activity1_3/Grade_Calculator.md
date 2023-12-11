## Problem Analysis
    Input: Total mark out of 100
    Process: Checking in which range the mark falls
    Output: The Grade for the corresponding range

## Pseudocode
    
    Print "Enter the student's mark out of 100: "
    Read mark
    
    If mark is between 0 and 100 inclusive:
        If mark < 30, set result to "F"
        Else if mark < 45, set result to "D"
        Else if mark < 55, set result to "C"
        Else if mark < 60, set result to "C+"
        Else if mark < 75, set result to "B"
        Else if mark < 80, set result to "B+"
        Else if mark < 90, set result to "A"
        Else set result to "A+"
        
        Print "The corresponding grade to your mark is ", result
    Else:
        Print "Wrong input, please enter a number between 0 and 100 inclusive"
    End If

## Flowchart

```mermaid
graph TB

Start(Start) --> mark[/Read the mark/]
mark --> ifmaincase{"0 <= number <= 100"}
ifmaincase -- True --> Fcase{"Is number less than 30"}
Fcase -- True --> resultF[result is F]
Fcase -- False --> Dcase{"Is number less than 45"}
Dcase -- True --> resultD[result is D]
Dcase -- False --> Ccase{"Is number less than 55"}
Ccase -- True --> resultC[result is C]
Ccase -- False --> CPcase{"Is number less than 60"}
CPcase -- True --> resultCP["result is C+"]
CPcase -- False --> Bcase{"Is number less than 75"}
Bcase -- True --> resultB[result is B]
Bcase -- False --> BPcase{"Is number less than 80"}
BPcase -- True --> resultBP["result is B+"]
BPcase -- False --> Acase{"Is number less than 90"}
Acase -- True --> resultA[result is A]
Acase -- False --> resultAP[result is A+]
resultF --> Finalresult[Showing Grade]
resultD --> Finalresult
resultC --> Finalresult
resultCP --> Finalresult
resultB --> Finalresult
resultBP --> Finalresult
resultA --> Finalresult
resultAP --> Finalresult
ifmaincase -- False --> Final(End)
Finalresult --> Final
