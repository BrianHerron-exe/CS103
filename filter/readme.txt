Prelab:
1.  The size of the largest padded image is 256+N-1 x 256+N-1,
	which in the case of a 11x11 kernel is 256 + 10 x 256+10
	The lower right pixel of the image will be placed in the 
	pixel with coordinates (255+5,255+5). 

2. 	0.7788  |  0.8824  |  0.7788 
	0.8824  |  1.0000  |  0.8824
	0.7788  |  0.8824  |  0.7788

---------------------------------------------------------------

1.	when sigma is varied and N is constant, the intensity of the
	filter is increased. The details are harder to notice.
	However, there is an effective 'max' amount of blurring,
	where the viewer no longer notices an increase in blur.
	When N is increased the picture is more 'diffused' (the blur
	is spread out more).

2.	The sobel filter seems to detect 'edges' of objects in 
	photos. Just the edges of objects are white, while the rest
	of the object is a black.

3.	the blur and unsharp filters are not inverse operations, as 
	the blur filter causes the 

---------------------------------------------------------------

Express in mathematical terms how the number of calculations 
your program does grows with the size, N, of the kernel.

Answer: As the size of the kernel increases, the number of 
		pixels being considered for the final value of the 
		pixel. This means that the pixel color and intesnity 
		is closer to the average of the picture. Blurs become 
		more blurry and the unsharp has more defined / thicker
		sharpenning areas. 

		in mathmatical notation, the program does:

		(Size)^2 * 3 * N^2 [divide to find the average]
		calculations

		As the size increases, the number of calculations
		increases at a rate of N^2 ( O(N^2) )