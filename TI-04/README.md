# Session 4 · Visual feedback

**Thu 12/11** · _Addressable LED strips with FastLED: wiring, colour, effects_

**Team:** Laia Formiga, Nineth Lagos, Pau Pujadas i Ivanna Yakubiak.

---

## Challenge: The object that answers

Make an object that greets, guides and thanks its user with light. Start from your night light or a new idea.

**Must have** (tick each box when it works: edit this file and change `[ ]` to `[x]`)

- [x] An idle light that invites a touch
- [x] A different light for each state
- [x] One animation made with `EVERY_N_MILLISECONDS`
- [ ] LEDs diffused, never bare

**Hand in by 11:30**

- Code
- Video

---

## What we built

_Two or three sentences: what does it do, who is it for, and how does a person interact with it?
Hem Fet un datafón, per una tarjeta de credit, q_

## Materials

_List every component and material you used._

| Component / material | Quantity | Notes |
| --- | --- | --- |
| Arduino Uno | 1 | |
| Cables      | 6 | |
| Botó        | 1 | |
| Resistencia | 1 | |
| Condensador | 1 | |
| Buzzer      | 1 | |
| Alimentació Externa | 1 | |
| Led Strip   | 1 | |
## Photo

![The object that answers: photo](media/esquema)

## Video

https://github.com/user-attachments/assets/9afc01ce-4ea3-4495-9025-2a07c1039f85

## Code

- Arduino sketch: [`ti04/ti04.ino`](ti04/ti04.ino)

## What each light means

| State | Colour / animation | Meaning for the user |
| --- | --- | --- |
| Idle    | Blue   | Invites The User |
| Loading | Yellow | Something is loading |
| Correct | Green  | The process was completed successfully.|
| Wrong   | Red    | The process could not be completed successfully. |

## Problems and fixes

Una de las cosas era hacer los estados de cambio, que hemos resuelto con la ayuda de la IA, i el problema con el busser - que no se puedo resolver por un motivo desconocido

## Going further

Hemos añadido el busser que ayuda a la persona quien utiliza el producto, orientarse mejor ya que añade un sonido de guia. 

## Use of AI

Hemos utilizado la IA para corregir la estructura total del proyecto, y para ver como añadir bien los estados. 
