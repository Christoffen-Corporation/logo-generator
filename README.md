# Christoffen Generator
This is the readme for the Christoffen Logo Generator.

The program has two reasons of existance. Firstly, it's a learning project for development head Gage Morgan to
learn the ropes of Cairo. The second reason is due to logo editing between Gage Morgan and Elijah Clark.

The initial goal of the program is to be able to generate a much cleaner version of the Christoffen Logo, with a 
much more modular design. The *modular* design comes from when Clark and Morgan needed the pieces of the logo separated. 
This tool generates multiple copies, so no more backups are needed.

## Use Cases (Clark)
Just because I, (Morgan), can see this happening both ways: (Though I don't do this type of stuff doesn't mean I'm going to disregard the fact it exists) Firstly, although for me this would be going literally too far, but I'm sure Clark wouldn't be above it, fan art. I would think you'd have to be crazy to do such a thing, but it's actually likely to happen if we take off (have you seen Android and iOS lately?)

The second usage case is particularly specified by myself from the start - generally speaking, as a tool to learn Cairo. Eventually, we may add icon generation tools as well, because as I learn this, I want someone walking in my shoes 5 years from now to be able to come back and look at my work, how it was done. I'll write more of my thoughts on the wiki (open for interpetation).

## Made with Ubuntu 15.04
It's been a project that started on October 3rd, 2015. When Gage Morgan and Elijah Clark were trying to add shadow to 
the initial logo, Gage realized that shadow could not be applied to the logo without having to take apart the logo,
make a backup, and screw things up repeatedly. As stated above, this no longer requires Gage to make backups, as long
as the original codebase is standing.

At this point in development, (the use of Cairo was still forming as a brainchild in Morgan's mind) Gage saw it as an
opportunity to use Cairo, learn the ropes, and eventually end up with a desired product as a result. It has come to fruition.
It also saves Morgan time. At Christoffen, there are three types of people: UI, Universally Xcepted (the UXers) and the Development 
staff. Morgan resides in the UXers and Development groups (UX is defined as "those who would like to draw but prefer to program, 
for anyone who has heard UX before, Morgan will be the first to shoot you down over semantics. Unorthodox it is, he doesn't care.

Issues with Ubuntu caused a hiccup in development. It turned out that Ubuntu didn't understand the C includes statement for
cairo.h, so he had to dig the file out. It also happens that when Morgan tried compiling with Cairo's flags given on the website,
they did not work. After around three hours of digging, he found (deep in the bowels of the mailing list) a cc command that finally 
worked. This project is to alleviate problems that most Ubunteros may have if prompted in this situation.

## Why is this on GitHub?
Well, my friends, this is on GitHub for a number of reasons. Part of it is in Morgan's own past of math teachers not giving
him sufficient examples of how to do stuff. So, due to some of Cairo's setbacks, the way that certain things cannot be colored in 
here and there, and among other things, it serves as yet another example of how certain things are done. Particularly, the way the 
logo is generated is by firstly making all the pieces as separate images. Hmmm...does that sound like a familiar struggle? No 
coincidences. Also, the whole thing is generated in one piece using a subset of PNG-images-as-surfaces functionality that Cairo provides.
At this point, Cairo has proved sufficient, and I still have yet to count up the lines that have been writeen in the month it took (approximately) to make this happen.

Morgan is going to work with a Bezier method (6/7 gradients, for those Adobe-fanboy retards - no mercy, and to use Cairo, those Adobe 
freaks are gonna have to go and get their coffins if they don't have a pocket calculator, as Cairo doesn't use their RGB/RGBA specs) to 
put actual material shadows on the logo (unlike the flat, un-material-like shadows Clark used in Illustrator-of-death-for-design-in-general.


