typedef struct Student{
	int school_number;
	char name[100];
	char surname[100];
	char departman[100];
	float agno;
	int class_num;

	//cift baglı list:
	struct Student *after; // SONRKİ node isaret eden pointer
	struct Student *before; // onceki node isaret eden poinetre
}Student;
// *head = student ilk
//*head=Student;

// node listemiz double linked list
typedef struct {
    int _count;
    Student* pos;   // now NODE
    Student* head;  // bas NODE
    Student* rear; // end


}LIST;



