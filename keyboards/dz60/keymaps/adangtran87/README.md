# Summary

Highlights:

* Split Spacebar
* HHKB
  * Backspace above enter
  * Pipe and forward slash on top row
* VIM
  * Capslock key is for Control when held and ESC when tapped
  * HJKL navigation

# Layout

Empty physical layout:

    ["","","","","","","","","","","","","",{a:7},"",""],
    [{a:4,w:1.5},"","","","","","","","","","","","","",{w:1.5},""],
    [{w:1.75},"","","","","","","","","","","","",{w:2.25},""],
    [{w:2.25},"","","","","","","","","","","",{w:1.75},"",{a:7},""],
    [{w:1.25},"",{a:4,w:1.25},"",{w:1.25},"",{a:7,w:2.25},"",{w:1.25},"",{w:2.75},"",{a:4,w:1.25},"",{w:1.25},"",{a:7,w:1.25},"",{w:1.25},""]

## Default Layer

The traditional capslock location is switched for `Control` when held and `ESC`
when tapped. Backspace is moved to layer 1

    ["~\n`","!\n1","@\n2","#\n3","$\n4","%\n5","^\n6","&\n7","*\n8","(\n9",")\n0","_\n-","+\n=",{a:7},"",""],
    [{a:4,w:1.5},"Tab","Q","W","E","R","T","Y","U","I","O","P","{\n[","}\n]",{w:1.5},"|\n\\"],
    [{t:"#000000\n#db0f0f",w:1.75},"Control\nESC",{t:"#000000"},"A","S","D","F","G","H","J","K","L",":\n;","\"\n'",{w:2.25},"Enter"],
    [{w:2.25},"Shift","Z","X","C","V","B","N","M","<\n,",">\n.","?\n/",{w:1.75},"Shift",{a:7},"FN3"],
    [{w:1.25},"",{a:4,w:1.25},"Win",{w:1.25},"Alt",{a:7,w:2.25},"FN1",{t:"#000000\n#db0f0f",a:4,f2:2,w:1.25},"FN2\nBackspace",{t:"#000000",a:7,w:2.75},"Space",{a:4,w:1.25},"Alt",{w:1.25},"Win",{a:7,w:1.25},"",{w:1.25},""]

## FN1 Layer

Navigation and Utility Layer

    [{a:7},"","F1","F2","F3","F4","F5","F6","F7","F8","F9","F10","F11","F12","",""],
    [{w:1.5},"","","VolUp","PgUp","","","","","Insert","","PScr","","",{w:1.5},""],
    [{w:1.75},"","HOME","VolDn","PgDn","END","","◄","▼","▲","►","","",{w:2.25},""],
    [{w:2.25},"","","","","","","","","","","",{w:1.75},"",""],
    [{w:1.25},"",{w:1.25},"",{w:1.25},"",{c:"#303030",w:2.25},"",{c:"#cccccc",w:1.25},"Del",{w:2.75},"",{w:1.25},"",{w:1.25},"",{w:1.25},"",{w:1.25},""]

## FN2 Layer

## FN3 Layer
