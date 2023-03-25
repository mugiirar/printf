printf is the C language function to do format-ted printing. The same function is also available inPERL. This paper explains how
printf works, andhow to design the proper formatting speciﬁcation forany occasion.
1 Background
In the early days, computer programmers wouldwrite their own subroutines to read in and print outnumbers. It is not terribly diﬃcult, actually. Justallocate a character array to hold the result, dividethe number by ten, keep the remainder, add x30 toit, and store it at the end of the array. Repeat theprocess until all the digits are found.
