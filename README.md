# SlimboxMLite-Vial
Vial support for the [Slimbox M Lite](https://www.printables.com/model/1349620-slimbox-m-lite) design by Lingwendil on Printables

<img width="489" height="296" alt="image" src="https://github.com/user-attachments/assets/7e178288-a669-4bc6-aeab-a81915145818" />

hex was compiled for use on an Arduino Pro Micro

[Instructions to modify pins](#Instructions)

<img width="810" height="514" alt="image" src="https://github.com/user-attachments/assets/cceb39cb-807f-4915-b127-f0b2a192daf7" />

Setup QMK MSYS and vial-qmk

Place the slimpadm8 folder in handwired/ folder

Go into info.json and change the matrix pins to match your desired setup

      "matrix_pins": {
        "direct": [
            ["D1", "D0", "D4", null], // 3 Top Left Buttons
            ["D7", "E6", "B4", null], // 3 Top Right Buttons
            ["F7", "C6", null, null], //  Up Key and the lowered key on the right
            ["B2", "B6", "B5", null], // 3 Bottom Right Buttoms
            ["F4", "F5", "F6", "B3"]  // Left, Down, Right Keys and the lowest Key on the right
        ]
    }


run in QMK MSYS:

`qmk flash -kb handwired/slimpadm8 -km vial`

jump RST and Ground to go into bootloader mode when promted




