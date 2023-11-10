#include <stddef.h>

char         *scope_models[] = {
  "DHO802",
  "DHO804",
  "DHO812",
  "DHO814",
  "DHO914",
  "DHO914S",
  "DHO924",
  "DHO924S",
  "DS70104",
  "DS70204",
  "DS70304",
  "DS70404",
  "DS70504",
  "DS70604",
  "HDO1052",
  "HDO1054",
  "HDO1072",
  "HDO1074",
  "HDO1102",
  "HDO1104",
  "HDO1202",
  "HDO1204",
  "HDO2104",
  "HDO2204",
  "HDO4104",
  "HDO4204",
  "HDO4304",
  "HDO4404",
  "HDO4504",
  "HDO4804",
  "MSO8064",
  "MSO8064A",
  "MSO8104",
  "MSO8104A",
  "MSO8204",
  "MSO8204A",
  "MSO8304A",
  NULL
};

char         *scope_options[] = {
  "AERO",
  "ARINC",
  "AUDIO",
  "AUTO",
  "BND",
  "BODE",
  "BW100T20",
  "BW10T20",
  "BW15T25",
  "BW2T4",
  "BW2T8",
  "BW4T8",
  "BW7T10",
  "BW7T15",
  "BW7T20",
  "CM_ENET",
  "CM_HDMI",
  "CM_MIPI",
  "CM_USB",
  "COMP",
  "COUNT",
  "DG",
  "EMBD",
  "EYE",
  "FLEX",
  "JITTER",
  "MSO",
  "PWR",
  "RLU",
  "RTSA",
  "UPA",
  NULL
};

//   "DHO Series ADB Service IP:",
//   "adb connect %s:55555",
//   "adb -s %s:55555 shell",
//   "ls -l",
//   "%s#0#%s#4#0#0",
//   "%s%2x",
//   "%s@%s",
//   "/rigol/data",
//   "adb -s %s:55555 push %s\\%s  %s/%s",
//   "Error",
//   "Unable to get device information, please connect the LAN device and try again.",
//   "\\rigol\\data\\vendor.bin",
//   "\\rigol\\data\\Key.data",
//   "\\rigol",
//   "/%s.lic",
//   "Information",
//   "Please manually restart your device from it.",
//   "Complete",
//   "The option serial number has been added, do you want to restart the device?",
//   "reboot",
//   "\\rigol\\data\\vendor.bin",
//   "\\rigol\\data\\Key.data",
//   "914S.bin",
//   "Error",
//   "Your hardware does not carry a signal source, so this operation poses a risk.",
//   "vendor.bin",
//   "Information",
//   "Please manually restart your device from it.",
//   " %.2f %s",
//   "/rigol/data",
//   "adb -s %s:55555 pull %s/Key.data %s\\Key.data",
//   "adb -s %s:55555 pull %s/vendor.bin %s\\vendor.bin",
//   "\\Key.data",
//   "\\vendor.bin",
//   "adb -s %s:55555 pull %s/%s %s\\%s",
//   "cd  %s",
//   "ls -l"