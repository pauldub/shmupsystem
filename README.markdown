ShmupSystem (A project yet to be named)
---------------------------------------

ShmupSystem will be a engine (if it can be named like this) to make it easier for programmers to create Shoot em' Up games. It should implement niceties like Lua for game scripting, and BulletML to make very easier to create bullet patterns, even the more intrincated ones. ShmupSystem is also licenced with the BSD Licence, to make it flexible enough even for commercial games.
Games created with ShmupSystem should be able to run perfectly on Linux, Mac OS X and Windows. Other plataforms should be able to run it as well, but we aren't able to assure it. We won't focus on work on those alternative plataforms, but if you has a fix that will make ShmupSystem able to run, or even fixing a small problem, we would greatly appreciate the help!

Troubleshooting:
===============

ShmupSystem is a big work in project and in a very, very early stage of development. We can't assure it will even compile on your machine. Some strange or buggy patterns are also expected, as many things aren't implemented yet.

Helping out:
============

If you got a fix to something, or even if you implemented a nice feature, you can proceed that way to get your code on my project:

* Fork this project.
* Create your fix.
* Push to your fork.
* Send me a pull request.

ShmupSystem uses a default of 4 spaces for identing, and opening brackets on the line after the statement. We also compile it with -Wall and -Werror, so make sure no warnings raises during compilation. Testing on OS X/Linux/Windows is also appreciated.

Even if you aren't a programmer, you can help with testing and feature requests. Just send me a message (of fill a bug on "Issues") and i'll take a look on it.


Licence:
=======

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

TODO:
=====

* Search for another engine to replace Clanlib.
* Implement BulletML.
* Make the bulletstack play nicely with BulletML.
* Implement Lua for scripting.
* Make BulletML play nicely with Lua.
* Create the Sound subsystem.
* Implement a simple api for level scripting.
* Implement a powerup system.
* Implement a bombing system.
