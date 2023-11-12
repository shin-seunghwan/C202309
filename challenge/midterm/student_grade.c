#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

void printStudentResults(char studentNames[][CHARNUM], double studentScores[][SUBJECTS], int studentCount, int subjectCount);
void printSubjectResults(char subjectNames[][CHARNUM], double studentScores[][SUBJECTS], int studentCount, int subjectCount);


int main() {
    char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
    char studentNames[STUDENTS][CHARNUM] = { "" }; // �л� �̸��� ����� �迭
    double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // �л��� ���� �� ������ ������ ����� �迭
    printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);
    // TODO 1.1: �л� �̸��� �Է¹޴� �ڵ� ��� �ۼ�

    for (int i = 0; i < STUDENTS; i++) {
            printf("  %d��° �л��� �̸��� �Է��ϼ��� : ", i+1 ,"\n");
            scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
    }

    // �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
    printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
    printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("%s", studentNames[i]);
        if (i != STUDENTS - 1) {
            printf(", ");
        }
    }
    printf("\n");
    printf("--------------------\n");
    printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);


    // TODO 1.2: �л����� ���� �� ������ �Է¹޴� �ڵ� ��� �ۼ�
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < SUBJECTS; j++) {
            printf("   %s�� ���� : " , studentNames[i]);
            scanf_s("%s", &studentScores[i][j]);
        }
    }


    printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
    printf("--------------------\n");
    printf("�л� �� ������ ������ �����ϴ� \n");


    // TODO 1.3: �л� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
    // HINT1: 2�� for��: (1) �л��� (2) ������� ���� �հ� ����� ���ϰ� ���
    // HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ����: %.2lf\n", studentNames[i], finalScore);
    // �л� �� ��� ������ ����ϴ� �ڵ� ���
    printStudentResults(studentNames, studentScores, STUDENTS, SUBJECTS);



    printf("--------------------\n");
    printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");
    // TODO 1.4: ���� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
    // HINT1: 2�� for������ (1) ���� (2) �л����� ���� �հ� ����� ���ϰ� ���   
    // HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n", subjectNames[i], subjectScore);
    // ���� �� ��� ������ ����ϴ� �ڵ� ���
    
    printSubjectResults(subjectNames, studentScores, STUDENTS, SUBJECTS);

    printf("���α׷��� �����մϴ�. ");
    return 0;
}

void printStudentResults(char studentNames[][CHARNUM], double studentScores[][SUBJECTS], int studentCount, int subjectCount){
    for (int i = 0; i < STUDENTS; i++) {
        double sum = 0.0;
                for (int j = 0; j < SUBJECTS; j++) {
                sum += studentScores[i][j]; // �� �л��� ���� ������ ����
            }
            double average = sum / SUBJECTS; // ����� ����
            printf("\t%s�� ��� ����: %.2lf\n", studentNames[i], average);
        }
}

void printSubjectResults(char subjectNames[][CHARNUM], double studentScores[][SUBJECTS], int studentCount, int subjectCount)
{
    for (int j = 0; j < SUBJECTS; j++) {
    double sum = 0.0; // ���� ���� �հ踦 ������ ����
        for (int i = 0; i < STUDENTS; i++) {
            sum += studentScores[i][j]; // �ش� ���� ���� ��� �л��� ������ ����
        }
        double subjectAverage = sum / STUDENTS; // ���� ����� ���
        printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n", subjectNames[j], subjectAverage);
    }

}