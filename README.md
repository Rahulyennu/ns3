# ns3
# ns3 with python
# date: 9/6/2017
# device ubuntu 16.04
# Install with below instructions on terminal
$sudo apt-get install gcc g++ python python-dev mercurial bzr gdb valgrind gsl-bin libgsl0-dev libgsl0ldbl flex bison tcpdump sqlite sqlite3 libsqlite3-dev libxml2 libxml2-dev libgtk2.0-0 libgtk2.0-dev uncrustify doxygen graphviz imagemagick texlive texlive-latex-extra texlive-generic-extra texlive-generic-recommended texinfo dia texlive texlive-latex-extra texlive-extra-utils texlive-generic-recommended texi2html python-pygraphviz python-kiwi python-pygoocanvas libgoocanvas-dev python-pygccxml
# Downloading NS-3(ns-3 version 3.26 worked fine)
# after downloading ns 3.26, from terminal enter to the path of build.py and enter 
$ ./build.py --enable-examples --enable-tests
# Now from terminal enter to the path of waf and enter
$ ./waf -d debug --enable-examples --enable-tests configure
# You are supposed to execute your python code using waf shell so create waf shell then you can execute your code, to do this from terminal enter to the location where waf file is located.
$ ./waf shell
$ python examples/wireless/mixed-wireless.py
# Note that the you must execute your .py codes from same terminal where you created waf shell
