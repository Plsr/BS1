#Aufgabenblatt zum ersten Praktikum

__1. Was ist die Aufgabe der Shell?__  
Die Shell ist ein Kommandozeileninterpreter, der die die Kommandos eine Nutzer liest, analysiert und selbst ausführt oder sie an andere Programme weiter reicht.
Der User kommuniziert also nicht direkt mit dem Betriebssystem. Die Shell liegt wie eine Schale um das Betriebssystem, daher auch ihr Name.

__2. Welche Schritte werden durchlaufen, wenn man einen Befehl eingibt?__

*   Ist der Aufruf ein Interner Befehl, so wird er direkt ausgefuehrt.
*   Ist das nicht der Fall wird ueberprueft, ob der Aufruf eine absolute Pfadangabe besitzt und dann ausgefuehrt.
*   Ist auch das nicht der Fall, werden die Pfade aus der Umgebungsvariable `PATH` benutzt, sofern der Befehl dort gefunden wird.
*   Wird der Befehl auch dort nicht gefunden wird eine Fehlermeldung erzeugt.  


__3. Welche Funktion haben Shell-Variablen?__
In Shell-Variablen kann man Texte für die spätere Verwendung speichern und diese beim Aufruf der jeweiligen Variablen zurueck geben lassen.
Ihr Datentyp ist kontext-sensitiv.

__4. Nennen sie mindestens 3 nützliche Befehle fuer Shell-Variablen__

* `echo`: Inhalt einer Variablen ausgeben  
* `<var name> = <var content>`: Inhalt einer Variablen via Kommandozeile setzen
* `$a`: Auf den Inhalt der variablen a zugreifen

__5. Was ist der Unterschied zwischen einer Shell-Variablen und einer Umgebungsvariablen und wie wird die Umgebungsvariable angelegt?__  
Umgebungsvariablen haben eine höhere Sichtbarkeit als Shell-Variablen und können somit auch von Kindprozessen genutzt werden.
Umgebungsvariablen werden als Shell-Variablen angelegt und müssen dann mit `export $var` exportiert werden. Man kann sie mit `setenv [variable]:wert` ändern.

__6. Welche Ausgabe wird durch das folgende Skript erzeugt?__  
```
 #! /usr/bin/sh  
 a=Eins  
 b=Zwei  
 c = Drei  
 echo "$a, $b, $c"
```  
"Eins, Zwei, ", die Variable `c` ist wegen der Leerzeichen nicht korrekt zugewiesen.

__7. Welche ausgabe wird durch die Ã„nderung der Zeile erzeugt?__  
Aufgrund der strong quotes `''` werden die Variablen nicht ausgelesen und tauchen als `$a` und `$b` in der Ausgabe auf.

__8. Was steht in der variable benutzer?__
``benutzer=`who | cut -c1-10 | sort` ``  
Alle eingeloggten benutzer, alle Zeilen werden nach dem 10. char abgeschnitten und alphabetisch sortiert.

__9. Wie kann der Rueckabewert des zuletzt ausgefuehrten Programmes überprueft werden?__  
`echo $0`

__10. Was steht in bashuser?__  
`` bashuser=`ypcat passwd | grep bash | cut -d: -f5` ``  
Die Fullnames aller user, die bash benutzen (oder "bash" in ihrem namen haben). Als erstes wird die systemweite passwort-map aufgerufen und nach "bash" gefiltert. Dann wird das 5. Feld, dass durch einen : getrennt ist ausgegeben.