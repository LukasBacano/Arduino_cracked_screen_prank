# Arduino Micro HID Keyboard (US Layout → Dansk tilpasning undervejs)

Dette projekt demonstrerer, hvordan en [Arduino Micro](https://store.arduino.cc/products/arduino-micro) kan bruges som et USB HID-keyboard.  
Formålet er at afspille et YouTube-link direkte ved opstart og forsøge at kortlægge US-keyboard-udgange til danske taster.

## Koden
Kopier følgende kode fra mit repo.  
Bemærk, at den benytter biblioteket [HID-Project](https://github.com/NicoHood/HID), og at layoutet lige nu er sat til en **US-keyboard**-opsætning.  
Jeg arbejder på at mappe det korrekt til dansk layout, så de særlige danske tegn fungerer optimalt.

Sådan virker det
	1.	Board: Du skal bruge en Arduino Micro (eller et lignende board med indbygget HID-understøttelse).
	2.	US Layout: Koden her genererer tegn efter et amerikansk tastaturlayout. Derfor vil nogle symboler som &, ), _, > osv. mappe lidt underligt, hvis du kører dansk systemlayout.
	3.	Dansk kortlægning (in progress): Jeg arbejder på at finjustere koden, så danske tegn (Æ, Ø, Å, specialtegn osv.) bliver printet korrekt.
	4.	Afspiller YouTube-link: Ved opstart åbnes en webbrowser (Spotlight på Mac, CMD+SPACE) og navigerer til https://www.youtube.com/watch?v=uKisdcdVRl8. Derefter trykkes der på f for fuldskærm.


Se videoen på forhånd på dette link: 	https://www.youtube.com/watch?v=uKisdcdVRl8
Scriptet i aktion på dette link:    	 https://www.youtube.com/watch?v=xOxPFkAW95Y


⸻

TODO
	•	Danske specialtegn: Implementere korrekt mapping for Ø, Æ, Å og specialtegn (+, -, :, ?, € osv.) i koden.

God fornøjelse!

