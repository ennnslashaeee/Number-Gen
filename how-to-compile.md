**How to Compile**

prerequisites: 1. have git 2. have gcc (or another compiler)
These can be installed with sudo pacman -S git gcc or sudo apt install git && gcc

**Use These Commands**

git clone https://github.com/ennnslashaeee/Number-Gen.git
cd Number-Gen
gcc main.c -o number-me
mkdir -p $HOME/bin/numberme
mv number-me $HOME/bin

**Adding as a Global command**

Add the following lines to the end of your .bashrc which is typically found in $HOME/.bashrc

export PATH="$HOME/bin/numberme:$PATH"

Then simply run number-me
