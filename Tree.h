typedef struct tNode {
	int Id;
	int Parent;
	int Left;
	int Mid;
	int Right;
	int Cek;
	int On;
} Node;

typedef struct tDir {
	int Id;
	int Turn;
} Dir;

Node mem[100];
Dir stack[100];

#define Nil -1
int Parent(int P) {return mem[P].Parent;}

int Info(int P) {return mem[P].Id;}

int Left(int P) {return mem[P].Left;}

int Mid(int P) {return mem[P].Mid;}

int Right(int P) {return mem[P].Right;}

int Cek(int P) {return mem[P].Cek;}

int Turn(int S) {return stack[S-1].Turn;}
//------------------------------------------
void setParent(Node *P, int k) { P->Parent = k;}

void setId(Node *P, int k) { P->Id = k;}

void setLeft(Node *P, int k) { P->Left = k;}

void setMid(Node *P, int k) { P->Mid = k;}

void setRight(Node *P, int k) { P->Right = k;}
//------------------------------------------
int Aloc(int Id, int Pa);

void free_mem();
void putarBalik();
void maju();
void gerak();
bool cekLurus();
bool cekKanan();
bool cekKiri();
void kill_node();
void Next_Node_Parent();
void Next_Node_Root();
void Alokasi_Simpangan();
void Next_Node();
void Pulang();

//=======================================================================================
//stack, untuk balik kembali

//Id menunjukkan gerakan yang dilakukan
//0, kiri
//1, lurus
//2, kanan
typedef struct stackNode {
	int Id;
} sNode;

typedef struct {
		sNode data[50];
		int top;
} Stack;

Stack sMem;

void Push(int i);
int Pop();
void backStep();
