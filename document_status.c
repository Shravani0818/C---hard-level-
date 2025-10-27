#include <stdio.h>

int main()
{
    int status;
    printf("Document Approval Status\n");
    printf("1. Draft\n2. Submitted\n3. Approved\n4. Rejected\n");
    printf("Enter approval status: ");
    scanf("%d", &status);

    switch (status)
    {
    case 1:
        printf("Document in DRAFT stage\n");
        break;
    case 2:
        printf("Document SUBMITTED\n");
        break;
    case 3:
        printf("Document APPROVED\n");
        break;
    case 4:
        printf("Document REJECTED\n");
        break;
    default:
        printf("Invalid status.\n");
        break;
    }

    return 0;
}
