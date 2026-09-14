# Flash Locally

Use this path while GitHub Actions is blocked by account billing. This builds and flashes from the computer that has the M5Paper plugged in.

## One-time setup

1. Install Visual Studio Code.
2. Install the ESP-IDF extension by Espressif Systems.
3. In VS Code, open the Command Palette:
   - Windows/Linux: `Ctrl+Shift+P`
   - Mac: `Cmd+Shift+P`
4. Run `ESP-IDF: Configure ESP-IDF extension`.
5. Choose `Express` setup and let it finish.

## Get the code

In VS Code, open a terminal and run:

```bash
git clone https://github.com/Mini-God/M5paper.git
cd M5paper
```

Or use VS Code's `Clone Git Repository` command with:

```text
https://github.com/Mini-God/M5paper.git
```

## Flash with VS Code

1. Plug the M5Paper into the computer with a USB-C data cable.
2. Open the cloned `M5paper` folder in VS Code.
3. Use the ESP-IDF bottom toolbar:
   - Set target: `esp32`
   - Select the serial port for the M5Paper
   - Click `Build, Flash and Monitor`
4. Success looks like this in the monitor:

```text
M5Paper bare-metal starter online.
Awaiting next structural directive...
```

## Flash with terminal

Use this if the ESP-IDF terminal is already configured:

```bash
idf.py set-target esp32
idf.py build
idf.py flash monitor
```

If there are multiple serial devices, specify the port:

```bash
idf.py -p /dev/ttyUSB0 flash monitor
```

On macOS the port often looks like:

```bash
idf.py -p /dev/cu.usbserial-0001 flash monitor
```

On Windows it often looks like:

```bash
idf.py -p COM3 flash monitor
```

## Notes

This repo already includes `sdkconfig.defaults`, which tells ESP-IDF to use `partitions.csv` and 16 MB flash settings. You should not need to manually configure the partition table for the first flash.

GitHub Actions can be fixed later. For now, this local flash proves the M5Paper is running your firmware.
