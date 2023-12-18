# Problem Analysis
1. Input : Test 15%,  Quiz 5%, Project 20%, Assignment 10%, Final exam 50%
2. Process: check if the inputs are with in the range allowed,
            calculate the total mark totalMark 100%  = test + quiz + assignment + finalExam +project
3. output: display the grade based on the total mark

# Flow Chart
```mermaid
graph TD;
Start(Start) --> mark[/Read the mark/];
mark --> ifmaincase{"0 <= number <= 100"};
ifmaincase -- True --> Fcase{"Is number less than 30"};
Fcase -- True --> resultF[result is F];
Fcase -- False --> Dcase{"Is number less than 45"};
Dcase -- True --> resultD[result is D];
Dcase -- False --> Ccase{"Is number less than 55"};
Ccase -- True --> resultC[result is C];
Ccase -- False --> CPcase{"Is number less than 60"};
CPcase -- True --> resultCP["result is C+"];
CPcase -- False --> Bcase{"Is number less than 75"};
Bcase -- True --> resultB[result is B];
Bcase -- False --> BPcase{"Is number less than 80"};
BPcase -- True --> resultBP["result is B+"];
BPcase -- False --> Acase{"Is number less than 90"};
Acase -- True --> resultA[result is A];
Acase -- False --> resultAP[result is A+];
resultF --> Finalresult[Showing Grade];
resultD --> Finalresult;
resultC --> Finalresult;
resultCP --> Finalresult;
resultB --> Finalresult;
resultBP --> Finalresult;
resultA --> Finalresult;
resultAP --> Finalresult;
ifmaincase -- False --> Final(End);
Finalresult --> Final;
```
# Psuedo code
1. start
2. calculate total mark
3. check if the mark is between 100 and 0
4. if false go to 20
5. if true, check if the number is less than 30
6. if true, print F and go to 20
7. if false; check if the number is less than 45
8. if true, print D and go to 20
9. if false; check if the number is less than 55
10. if true, print C and go to 20
11. if false; check if the number is less than 60
12. if true, print C+ and go to 20
13. if false; check if the number is less than 75
14. if true, print B and go to 20
15. if false; check if the number is less than 80
16. if true, print B+ and go to 20
17. if false; check if the number is less than 90
18. if true, print A and go to 20
19. otherwise print A+ and goto 20
20. end
