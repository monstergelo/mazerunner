typedef struct tNode {
	int Id;
	int Parent;
	int Left;
	int Mid;
	int Right;
} Node;

Node mem[100];

#define Nil -1
int Parent(Node P) {return P.Parent;}

int Info(Node P) {return P.Id;}

int Left(Node P) {return P.Left;}

int Mid(Node P) {return P.Mid;}

int Right(Node P) {return P.Right;}

//------------------------------------------
void setParent(Node *P, int k) { P->Parent = k;}

void setId(Node *P, int k) { P->Id = k;}

void setLeft(Node *P, int k) { P->Left = k;}

void setMid(Node *P, int k) { P->Mid = k;}

void setRight(Node *P, int k) { P->Right = k;}
//------------------------------------------


void Add_Anak(int Id, int L , int M , int R);

int Aloc(int Id, int Pa);

void free_mem();
void putarBalik();
void maju();
void gerak();
bool cekLurus();
bool cekKanan();
bool cekKiri();
void Next_Node();
void Next_Node_Parent();
