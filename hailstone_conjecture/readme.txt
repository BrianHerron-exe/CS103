CSCI 103 Programming Assignment 1, Hailstone

Name: Adithya Bellathur

Email Address: bellathu@usc.edu

NOTE: You can delete the questions, we only need your responses.

NOTE: It is helpful if you write at most 80 characters per line,
and avoid including special characters, so we can read your responses.

Please summarize the help you found useful for this assignment, which
may include office hours, discussion with peers, tutors, et cetera.
Saying "a CP on Tuesday" is ok if you don't remember their name.
If none, say "none".

:

================================ Questions ==================================

1. Which kind of a loop did you use for the first program? Why?

: I used a while loop, as it allowed me have the number either be divided by two, 
  or multiplied by 3 and added to 1, depending on the value of the number. the for 
  loop is a lot more structured, making the above logic difficult to implement.

2a. Once you've completed the second program, run hailstats on the following
inputs, and record your results in the table below:

  input range  | minimum length | achieved by | maximum length | achieved by
-----------------------------------------------------------------------------
    50 100     |       6        |     64      |      118       |     97        
   100 200     |       7        |     128     |      124       |     117        
   200 400     |       8        |     256     |      143       |     327        

2b. What pattern do you think there is in the values achieving minimum length?
Can you explain why it holds?

: the minimum length is the lowest power of 2, as it then will always be divisible 
  by 2 right down to 1, always resulting in the fewest number of steps.

3a. Let X be the smallest integer whose length is greater than 150.
By running your hailstats program several times on carefully chosen inputs,
determine what is the value of X.

X is : 703

3b. Explain, briefly, the way in which you used your hailstats program
(i.e., which inputs you gave it) to find this answer.

: I went up in increments of 200, starting at 400. The 600 to 800 group had
  '703', which results in a number greater than 150. So f checked if 600 to 
  702 (one less than that '703' max from last attempt) had any numbers that 
  resulted in a length greater than 150. There were none, so we now know that
  703 is the smallest integer to give a length greater than 150.

================================ Remarks ====================================

Filling in anything here is OPTIONAL.

Approximately how long did you spend on this assignment?

: This took me ~ 2 hrs. of dedicated time

Were there any specific problems you encountered? This is especially useful to
know if you turned it in incomplete.

: I mostly had trouble making sure my results were accurate. I was double 
  checking and going over the logi in my head for the saving of the max and
  min lengths.

Do you have any other remarks?

: n/a