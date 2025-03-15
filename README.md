Below is a forslag til en README.md, som du kan copy-paste direkte ind i dit GitHub-repo. Den beskriver kort projektet, indeholder dit kodeeksempel i et code block, og inkluderer et HTML-forsøg på at embedde YouTube-videoen (bemærk dog, at GitHub som udgangspunkt ikke altid tillader iframe-embeds – men linket virker under alle omstændigheder).

⸻



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

Video (YouTube Embed Forsøg)

<iframe width="560" height="315" src="https://www.youtube.com/embed/uKisdcdVRl8" frameborder="0" allowfullscreen>
</iframe>


Hvis ovenstående embed ikke vises (GitHub understøtter ofte ikke iframes), kan du bruge dette link:
https://www.youtube.com/watch?v=uKisdcdVRl8

⸻

TODO
	•	Danske specialtegn: Implementere korrekt mapping for Ø, Æ, Å og specialtegn (+, -, :, ?, € osv.) i koden.
	•	Bedre kompatibilitet: Tilføje support for både Mac og Windows i forhold til åbning af browser/søgefelt.

God fornøjelse!

