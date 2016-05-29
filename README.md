# Christoffen Logo Generator

The Christoffen Logo Generator

_**Requires the Cairo 2D Graphics Library and (possibly) its development files/headers as well. For more information on how to fill this dependency, please see [here](https://www.cairographics.org/download/).**_

## Installing to an APT box (Debian, Ubuntu, Mint, etc...)
The logo generator is also now available on Debian-based machines. This means that the logo generator has been packaged up into a nice, pretty little archive for you to enjoy. Follow the directions below for installation. 

```shell
# If not already, install git and the Cairo development header files:
sudo apt-get install git libcairo2-dev

# Clone the repository containing sources and the package you'll be installing:
git clone https://github.com/Christoffen-Corporation/logo-generator.git

# Go to the directory of the files git just checked out:
cd logo-generator

# Now, install the package to your machine:
sudo dpkg -i logo-generator-v2.0-test2_2-1_amd64.deb
```
Now, to test the newly installed package, let's make it do something:

```shell
# Starting from the logo-generator directory we left off in, go to your home directory:
cd ~

# Now, let's make a new directory to make some magic happen in!
mkdir magic-sha-kah-kah

# Let's move to the newly created directory:
cd magic-sha-kah-kah

# Now, for the prime function of the logo generator tool:
logo-generator 

# Run it one more time (explained below):
logo-generator
```
The reason we had to run it a second time was because of the fact that it generates the triangles as PNG files individually first, then uses those very same PNG files to compose the main logo (the blue "C") - think of each PNG as an individual piece of a jigsaw puzzle.

## Everyone Else (the boring, less-quick-in-hasty-situations way)
Here, we'll explain what you need to do in order to do generation on non-APT systems.

The Christoffen logo-generator repo cloned in the above section is the same one we'll use here:

```shell
# If not already, install git and any Cairo-based dependencies:
(varies by systems, but YOU DEFINITELY MUST HAVE GIT INSTALLED)

# Clone the repository containing the sources you'll need:
git clone https://github.com/Christoffen-Corporation/logo-generator.git

# Go to the directory of the files git just checked out:
cd logo-generator
```

Hold that thought. Open up your file manager application, and go to the folder containing the repo we just checked out via CLI. Then, minimize the file manager right then and save it for later as to be explained. Go back to the terminal.

```shell
# We're going to build with the GNU Make tool. 
sudo make

# Now, we'll install it:
sudo make install
```

Make has installed it to your system if you've made it thus far. In your CLI, go to any directory and type:

```shell
logo-generator
```

The resulting images can be found in that directory.

The above commands install it to usr/bin, but I thought I'd take a moment to show you the file manager as per above.

### Explaining Santa's Little ELF
When the generator was built, GCC linked some C and C headers together. This resulted in that ELF (purple diamond) that you see here. Others will correct me on that above statement, but that'sbecause they don't know the difference between "dumbed down" and "hard to understand."

The new file that appears should be called "logo-generator." This is what you don't see in the Debian version. You can double click that from anywhere, and it will output those images used to build the logo.

## Have fun!
This was a project to help automate a task that was needed to be manually done by hand, where Clark would say that "backups are good enough." Now, who needs backups when yu've got a *NIX system and some good know-how? This is a bit more professional when trying to apply effects to triangles individually and then reconstructing them. It makes it nice, clean, and systematic.

Hope you enjoyed tinkering!! ;)

--MGage Morgan




































