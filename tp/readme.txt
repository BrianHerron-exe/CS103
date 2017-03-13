/*********************************************************
 * File name : readme.txt 
 * Author    : Adithya Bellathur
 * Date      : 2/12/17
 * Purpose   : Notes on tp.cpp
 *********************************************************/

Init. # of Squares (N)	Prob. of Big Chooser (p)	Result
------------------------------------------------------------
		10						0.5					3.52485
		10						0.732				1.56879
		25						0.5					5.61141
		25						0.2					19.0744


Using N = 10 and p = 0.5,

	Number of trials		Results			Average of 
						(Average after 		Results
							# trials)	
------------------------------------------------------
	100						3.83
							3.36
							3.72
							3.76
							3.91			3.716
------------------------------------------------------
	1000					3.419
							3.536
							3.482
							3.519
							3.513			3.4938
------------------------------------------------------
	10000					3.547
							3.4987
							3.5159
							3.5216
							3.5152			3.51968
------------------------------------------------------
	100000					3.52378
							3.51299
							3.53586
							3.5267
							3.52316			3.524498
------------------------------------------------------
	1000000					3.52491
							3.52272
							3.52509
							3.52182
							3.52388			3.523684
------------------------------------------------------

Point of Diminishing Returns:
->The point of diminishing returns for this experiment seems 
  to be around the 100,000 trials region. The Average of the 
  said average is almost identical to the presumed theoretical 
  value given in instructions guide to an accuracy of 3 decimal 
  points. Any of the measured trials above are not more than 
  0.01 away from the theoretical value, which means that any 
  value taken from an experiment of 100,000 trials should be 
  accurate to +-0.3%, which is more accuracy than is 
  realistically needed.
