# The Christoffen Corporation Logo Generator
The "small" set of scripts and C files scrapped together using redneck hacks back in October 2015 is growing up to be a big boy!!

This project has helped me learn how to write a program that's useful while at the same time extending to help me learn about the GNU Autotools, argp, Cairo (where it started), Gtk+, along with some other stuff. This is stuff colleges probably told people at one point they'd be lost without, but I'm only just getting out of the 11th grade.

## First Things First (I'm Da Realest)
The project has been going under a restructuring since late May to right now. The key here is to re-write this README to give instructions on how to use the generator and then a bit of a function walkthrough for those curious. I'm also adding in some generated imagery from GraphViz as well as a screencap of both CLI and Gtk+ frontends.

In order for you to be able to use the generator, you need to use the Autotools to generate a Makefile. The reason I'm doing it this way compared to in the past is because when I switched to Fedora, the Makefile I'd been using just straight-up broke. This way, I won't have to directly give the users a Makefile; just a template their system can use to make its own tailored Makefile. You can literally generate your own Makefile regardless of what OS you're using as long as you have the required dependencies. Furthermore, you can do all this in one shot:

```sh
./configure && make
```

After, there should be an executable file in the base directory of the logo generator. You can go to the folder in your favorite file manager, or open it via the terminal:

```sh
./logogenerator
```

## The Reference
Here, I explain the source code:

### options.c
![](/docs/images/options.png)
<br>
This file has the functions used elsewhere, such as in main(). This is basically the boilerplate for generating the exact Christoffen logo.
<br><br>
**all_imgs():**
<br>
![](/docs/images/options-all_imgs.png)
<br>
Showing all the functions called in the function all_imgs().
<br><br>
**outlined_nologo():**
<br>
![](/docs/images/options-outlined_nologo.png)
<br>
Showing all the functions called in the function outlined_nologo().
<br><br>
**outlined_all()**
<br>
![](/docs/images/options-outlined_all.png)
<br>
Showing all the functions called in the function outlined_all().
<br><br>




















