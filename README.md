If location of `keymap.c` and `config.h` is `C:\Users\natur\qmk_firmware\keyboards\crkbd\rev1\keymaps\aj_config`
Commands to execute in `QMK MSYS`:
1. `cd /c/Users/natur/qmk_firmware/keyboards/crkbd/rev1/keymaps/aj_config`
2. `qmk compile`
3. Optionally generate json: `qmk c2json -km aj_config -kb crkbd/rev1 C:/Users/natur/qmk_firmware/keyboards/crkbd/rev1/keymaps/aj_config/keymap.c --no-cpp`
