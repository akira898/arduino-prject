String extentions_soported[] = {".mp3", ".opus", ".wav"};
String filesAllowed[100];
int allowedCount = 0;

String* checkEtention(String files[], int siz) {
  allowedCount = 0;

  for (int i = 0; i < siz; i++) {
    for (int e = 0; e < sizeof(extentions_soported) /
                         sizeof(extentions_soported[0]); e++) {
      if (files[i].endsWith(extentions_soported[e])) {
        if (allowedCount < 100) {
          filesAllowed[allowedCount] = files[i];
          allowedCount++;
        }
        break;
      }
    }
  }

  return filesAllowed;
}
