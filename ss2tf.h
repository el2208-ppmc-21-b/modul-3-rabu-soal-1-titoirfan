/* Nama Prosedur  : inputMatrixData
 * Deskripsi      : Menginput data data matriks sesuai dengan abjad/elmt
 *                  sesuai yang tertera pada soal
 * Argumen        :
 *  - _matA        : Matriks A 
 *  - _matB        : Matriks B 
 *  - _matC        : Matriks C
 *  - data        : data yang ingin diinput  
 *  - elmt        : element / abjad yang merepresentasikan data pada Matrix A,B,C
 *                  (sesuai format pada soal)
 * Initial State  : _matA, _matB, _matC dapat kosong, dan dapat terisi
 * Final State    : terdapat 1 data yang diassign pada matriks A/B/C
 */
void inputMatrixData(float _matA[2][2], float _matB[2][1], float _matC[1][2], float *data, char elmt);

/* Nama Prosedur  : printNumerator
 * Deskripsi      : Mencetak Pembilang dari hasil Transfer Function
 * Argumen        :
 *  - a,b,c,d,e,f,g,h : data data elemen matriks
 * 
 * Initial State  : -
 * Final State    : Pembilang TF tercetak ke layar
 */
void printNumerator(float *a, float *b, float *c, float *d, float *e, float *f, float *g, float *h);

/* Nama Prosedur  : printDenominator
 * Deskripsi      : Mencetak Penyebut dari hasil Transfer Function
 * Argumen        :
 *  - matA        : Matriks A 
 *  - matB        : Matriks B 
 *  - matC        : Matriks C
 * 
 * Initial State  : -
 * Final State    : Penyebut TF tercetak ke layar
 */
void printDenominator(float _matA[2][2], float _matB[2][1], float _matC[1][2]);
