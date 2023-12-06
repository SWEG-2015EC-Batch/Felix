## Problem Analysis
  Input: A character to identify its identity
  Process: Identify if the character is an odd or even number, consonant or vowel, uppercase or lowercase alphabet, or a special case
  Output: Return the identity

## Pseudocode


## Flowchart
```mermaid
graph TB
  start(start) --> InputChar[/Receive the character x/]
  InputChar --> IsAlpha{"isalpha(x)"}
  IsAlpha -- True --> IsUpper{"isupper(x)"}
  IsUpper -- True --> IsVowel{"It is vowel"}
  IsVowel -- True --> UpperVowel[/Vowel, Uppercase, letter/]
  IsVowel -- False --> UpperConsonant[/Consonant, Uppercase, letter/]
  IsUpper -- False --> IsVowelLower{"It is vowel"}
  IsVowelLower -- True --> LowerVowel[/Vowel, Lowercase, letter/]
  IsVowelLower -- False --> LowerConsonant[/Consonant, Lowercase, letter/]
  IsAlpha -- False --> IsNum{"isdigit(x)"}
  IsNum -- True --> IsEven{"x % 2 == 0"}
  IsEven -- True --> EvenNum[/Even Number/]
  IsEven -- False --> OddNum[/Odd NUmber/]
  IsNum -- False --> Special[/Special Character/]
  UpperVowel --> End(End)
  UpperConsonant --> End
  LowerVowel --> End
  LowerConsonant --> End
  EvenNum --> End
  OddNum --> End
  Special --> End
