# unicode-converter
A minimal program to convert glyph characters to Unicode codes
<br></br>
## Adding characters
At the moment only characters from 32 to 126 (dec) are included. You can add more characters by simply adding them into the <a href="table.txt">"table.txt"</a> file using the right order (*glyph and code are optional*):
> U+0000  x     nu

## Known Issues
- Space " " character doesn't work.
You can't split words due to the space issue.

- Trying to compile this into VS 2022 won't work unless you <a href="https://stackoverflow.com/a/20753468">enable "_CRT_SECURE_NO_WARNINGS" </a>into C/C++ compiler options.

