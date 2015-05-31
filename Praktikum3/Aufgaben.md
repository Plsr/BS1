##1. Erklären Sie, wofür man eine Pipe benötigt.
Eine Pipe ermöglicht die Verkettung von zwei Prozessen. In der Regel wird die Standardausgabe von einem Prozess mit der Standardeingabe eines anderen verkettet.  
Eine Pipe stellt keine Möglichkeit zur Interprozesskommunikation auf verschiedenen Maschinen dar.

##2. Was ist die Vorraussetzung für einen namelose (unnamed) Pipe?  
Eine unnamed pipe kann nur von verwandten Prozessen (eltern/kind oder kind/kind mit dem selben Vater) genutzt werden.

##3. In welche Richtungen und welcher Reihenfolge werden die Daten in einer Pipe üblicherweise transferiert?
Eine pipe ist in der Regel unidrektional. Die Daten werden vom Eigang der pipe (pipe[1]) zum Ausgang der pipe (pipe[0]) transportiert. Die Daten werden in FIFO-Riehnefolge transefriert.

##4. Wann setzt man eine benannte (named pipe) Pipe ein?
Eine named pipe setzt man ein, wenn zwei nicht-verwnadte Prozesse auf die pipe zugreifen sollen. Ein Porzess kann die pipe dann als reader und einer als writer benutzen.

##5. Fehlermeldungen eines selbstgeschriebenen C-Programms sollen immer auf dem Bildschirm erscheinen, auch wenn die Standardausgabe in eine Datei oder eine Pipe gelenkt wird. Wie erreiche ich das?
Die Fehlermeldung in `stderr` schreiben (da, wo sie hin gehört) und nicht in die Standardausgabe.
`fprintf(stderr, "Error Message);`