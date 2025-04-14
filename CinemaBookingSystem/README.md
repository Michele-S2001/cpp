## 📌 Progetto: "CinemaBookingSystem"

### 🎯 Obiettivo  
Creare un'applicazione console in C++ che permetta di gestire un sistema di prenotazioni per un cinema.

---

### 📂 Caratteristiche principali  

1. **Classe Film 🎬**  
   - Proprietà: titolo, durata.  
   - Metodi: mostra dettagli film.

2. **Classe Sala 🛋️**  
   - Proprietà: nome sala, numero di righe, numero di colonne.  
   - Metodi: mostra mappa posti, verifica disponibilità, assegna posti.

3. **Classe Proiezione ⏰**  
   - Proprietà: film, sala, orario di proiezione.  
   - Metodi: mostra dettagli proiezione.

4. **Classe Prenotazione 🧾**  
   - Proprietà: ID prenotazione, nome spettatore, proiezione, posti prenotati.  
   - Metodi: mostra dettagli prenotazione.

5. **Classe Cinema 📽️**  
   - Proprietà: elenco film, elenco sale, elenco proiezioni, elenco prenotazioni.  
   - Metodi:  
     - Aggiungi film.  
     - Aggiungi sala.  
     - Aggiungi proiezione.  
     - Prenota posti.  
     - Annulla prenotazione.  
     - Visualizza stato delle sale per una proiezione.

---

### 🖥️ Gestione dell'input utente  
Un semplice menu interattivo che consente di:
- Aggiungere film, sale e proiezioni.
- Visualizzare i film disponibili.
- Prenotare posti per una specifica proiezione.
- Annullare una prenotazione esistente.
- Visualizzare lo stato dei posti in una sala per una determinata proiezione.

---

### 🔥 Possibili Estensioni  
✅ Salvataggio e caricamento delle prenotazioni da file.  
✅ Supporto multi-sala e multi-orario.  
⬜ Interfaccia grafica.  
⬜ Filtraggio film per orario.

---

## ℹ️ Note  
Questo progetto è stato creato per esercitarsi con la programmazione orientata agli oggetti in C++.  
Se hai suggerimenti o vuoi contribuire, sentiti libero di aprire una issue o una pull request! 🚀
