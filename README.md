# TINKERCAD Pedestrian Crossing

Gyalogos Átkelő Jelzőlámpája (Arduino)

---

## 1. Projekt bemutatása és célja

A projekt célja egy okos gyalogosátkelőhely működésének modellezése **Arduino Uno** mikrokontroller segítségével. 

* **Alaphelyzet:** A gyalogosok számára szabad utat biztosít (a zöld jelzés világít).
* **Interakció:** Amikor egy gyalogos át szeretne kelni és megnyomja a nyomógombot, a rendszer érzékeli az igényt.
* **Működés:** Figyelmeztető (sárga/narancssárga) jelzésre vált, majd megállítja a gyalogosforgalmat (piros jelzés), mialatt az autósoknak adhatna utat (vagy fordított logikával a gyalogosnak nyit utat – a kód alapján a gomb megnyomásakar a zöldről sárgára, majd pirosra vált a lámpa, jelezve a várakozást és a lezárást).

---

## 2. Felhasznált alkatrészek listája (Bill of Materials)

| Alkatrész megnevezése | Mennyiség | Funkció |
| :--- | :---: | :--- |
| **Arduino Uno R3** | 1 db | A rendszer vezérlőegysége |
| **Próbapanel (Breadboard)** | 1 db | Az áramkörök forrasztásmentes felépítésére |
| **LEDs (Piros, Sárga, Zöld)** | 3 db | A fényjelzések megjelenítése |
| **220 $\Omega$-os ellenállás** | 4 db | Áramkorlátozás a LED-ek védelmére |
| **Nyomógomb (Pushbutton)** | 1 db | Az átkelési szándék jelzése |

---

## 3. Software

* **Tinkecard**
* **C++**

## 4. készítette

* Berényi Illés Zsolt


