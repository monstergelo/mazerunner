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

void lurus();
void belokKanan();
void belokKiri();
void putarBalik();
void maju();
void utara();
void timur();
void selatan();
void barat();
void buntu();
void gerak();
bool cekLurus();
bool cekKanan();
bool cekKiri();
void cekSimpangan();
void Next_Node();
void Next_Node_Parent();


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
} stack;

stack sMem;

void push(int i);
int pop();
void backStep();
