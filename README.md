# ShashChessStatistics

Il file WinProbability.cpp contiene un main che richiama una funzione che prende in input uno score e una depth (entrambi int) e restituisce la winProbability relativa,
calcolata come fa' Stockfish, sulla base del modello wdl di leela.
Ho bisogno d'una funzione analoga, ma meno onerosa in termini computazionali, che prende gli stessi input, ma restituisce il range di win probability, rappresentato da un intero, come specificato nella seguente tabella:

Win probability range | Shashin position’s type        | Shashin position's type number    | 
| --------------------| ------------------------------ | ----------------------------------|
| [0, 4]              | High Petrosian                 | -6                                | 
| [5, 9]              | Middle-High Petrosian          | -5                                |
| [10,12]             | Middle Petrosian               | -4                                |  
| [13,19]             | Middle-Low Petrosian           | -3                                |
| [20,24]             | Low Petrosian                  | -2                                |
| [25,49]             | Caos: Capablanca-Low Petrosian | -1                                |
| [50]                | Capablanca                     | 0                                 |
| [51,75]             | Caos: Capablanca-Low Tal       | 1                                 |  
| [76,80]             | Low Tal                        | 2                                 |
| [81,87]             | Low-Middle Tal                 | 3                                 |
| [88,90]             | Middle Tal                     | 4                                 |
| [91,95]             | Middle-High Tal                | 5                                 |
| [96,100]            | High Tal                       | 6                                 |


Ho usato il seguente compilatore online:

[https://www.onlinegdb.com/online_c++_compiler](https://www.onlinegdb.com/online_c++_compiler)

(C++20), ma naturalmente puoi usare quello che vuoi.
