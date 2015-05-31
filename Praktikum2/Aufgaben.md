#Aufgabenblatt zum zweiten Praktikum

__1. Der Aufruf int main(int argc, char* argv[]) kennt noch einen dritten Parameter. 
Wie lautet diese Parametervereinbarung? Welche Inhalte werden darüber erreicht?Welche zweite Möglichkeit gibt es noch, um auf die gleichen Inhalte zuzugreifen?__  
Die Parametervereinbarung lautet `char* envp[]`. Über die Vereinbarung werden Environment-Variablen erreicht.  
Andere Möglichkeiten sind `getenv()`oder extern `char ** environ;`.  

__2. Skizzieren Sie den Aufbau der Argumenten- bzw. der Umgebungsvariablenliste.__  
`*argv` zeigt auf ein Array mit pointern, die auf die Argumente und den Programmnamen zeigen.  
Gleiches gilt fuer `*envp`. Beide Arrays enden mit einer 0 bzw `NULL`.  

__3. Jedes Programm in der Ausführung hat Umgebungsvariablen. Mit welchen C-Aufrufen kann man sie setzen, ändern, löschen oder abfragen? Nennen Sie zusätzlich noch einige wichtige Umgebungsvariablen.__  
`getenv()`, `putenv()`, `setenv()`, `unsetenv()`.  
Wichtige Environment-Variablen sind zum Beispiel `HOME`, `SHELL`, ...

__4. Sie haben folgenden Aufruf: ./a.out eins zwei >file drei
Wie behandelt die Shell die Ausgabeumlenkung und welcher Wert steht in argc?__

__5. Sie haben folgenden Aufruf: ./a.out 3 * 4
Wie behandelt die Shell die Aufrufparameter und welcher Wert steht in argc?__

__6. Was passiert, wenn ein Elternprozess einen Kindprozess erzeugt, und wie kann ich feststellen, ob ich mich im Eltern- bzw. Kindprozess befinde?__

__7. Was erbt ein Kindprozess vom Elternprozess beim fork()-Aufruf, und was bleibt beim exec()-Aufruf erhalten?__

__8. Können nach dem Aufruf von fork() der Elternprozeß und der Kindprozeß noch Variablen oder Daten im jeweils anderen Prozeß manipulieren?__