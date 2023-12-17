# Problem Analysis
    Input: Total mark out of 100
    Process: Checking in which range the mark falls
    Output: The Grade for the corresponding range

# Pseudocode
    
    Print "Enter the student's mark out of 100: "
    Read mark
    
    If mark is between 0 and 100 inclusive:
        If mark >= 90, set result to "A+"
        Else if mark >= 80, set result to "A"
        Else if mark >= 75, set result to "B+"
        Else if mark >= 60, set result to "B"
        Else if mark >= 55, set result to "C+"
        Else if mark >= 45, set result to "C"
        Else if mark >= 30, set result to "D"
        Else set result to "F"
        
        Print "The corresponding grade to your mark is ", result
    Else:
        Print "Wrong input, please enter a number between 0 and 100 inclusive"
    End If

# Flowchart

```mermaid
graph TB

Start(Start) --> mark[/Read the mark/]
mark --> ifmaincase{"0 <= number <= 100"}
ifmaincase -- True --> Fcase{"Is number >= 90"}
Fcase -- True --> resultAP[result is A+]
Fcase -- False --> Dcase{"Is number >= 80"}
Dcase -- True --> resultA[result is A]
Dcase -- False --> Ccase{"Is number >= 75"}
Ccase -- True --> resultBP[result is B+]
Ccase -- False --> CPcase{"Is number >= 60"}
CPcase -- True --> resultB["result is B"]
CPcase -- False --> Bcase{"Is number >= 55"}
Bcase -- True --> resultCP[result is C+]
Bcase -- False --> BPcase{"Is number >= 45"}
BPcase -- True --> resultC["result is C"]
BPcase -- False --> Acase{"Is number >= 30"}
Acase -- True --> resultD[result is D]
Acase -- False --> resultF[result is F]
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
