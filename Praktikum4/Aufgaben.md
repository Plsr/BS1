###1. Erklären Sie, wofür man Shared Memory benötigt.  
Shared Memory bietet die Möglichkeit, zur N:M-Kommunikation. Im Gegensatz zu unnamed pipes (_nicht_ **named** pipes) können auch zwei Prozesse von verschiedenen Vätern über den shared memory kommunizieren. Außerdem ist Shared Memory effizienter, da es sich um "regulären" Speicher handelt (vgl. Pipes -> Prozesse).

###2. Erkären Sie die Funktionsweise von Shared Memory unter UNIX.  
Ein Prozess legt Shared Memory an. Dieser Shared Memory liegt nicht im privaten Speicherbereich des Prozesses, sondern wird im freien Speicherbereich des Systems angelegt. Auf diesen Speicher können nun beliebig viele Prozesse zugreifen (read & write). Für jeden zugreifenden Prozess wird die größe des Shared Memory gemapped und zur größe des Prozesses hinzu addiert.

###3. Ist es sinnvoll, im Shared Memory einen Zeiger (Pointer) zu hinterlegen? Begründen Sie Ihre Antwort.  
Einen Pointer im Shared Memory zu hinterlegen ist nur sinnvoll, wenn der pointer relative ist. 
>Be aware that the shared memory segment attached in this way may be attached at different addresses in different processes. Therefore, any pointers maintained within the shared memory must be made relative (typically to the starting address of the segment), rather than absolute.

###4. Darf ein Zeiger (Pointer) im privaten Speicherbereich ins Shared Memory zeigen?  
Ja.

###5. Welche Systemaufrufe stehen für die Nutzung von Shared Memory zur Verfügung?  
 * shmget()
 * shmat()
 * shmctl()
 * shmdt()

###6. Wie heißt der UNIX-Befehl, mit dem man in der Shell feststellen kann, ob ein Shared Memory existiert, und mit welchem Befehl kann es gelöscht werden?   
Anzeigen mit `ipcs`, löschen mit `ipcrm [id]`.