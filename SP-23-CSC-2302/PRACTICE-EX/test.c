void add_node() {
    int position, ID, room, building;
    char name[20];
    printf("Enter the position: ");
    scanf("%d", &position);
    printf("Enter the name: ");
    scanf("%s", name);
    printf("Enter the ID: ");
    scanf("%d", &ID);
    printf("Enter the room: ");
    scanf("%d", &room);
    printf("Enter the building: ");
    scanf("%d", &building);
    request *temp = head;
    request *newNode = malloc(sizeof(request));
    newNode->ID = ID;
    newNode->room = room;
    newNode->building = building;
    strcpy(newNode->name, name);
    newNode->next = NULL;
    if (position == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        int i;
        for (i = 1; i < position - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Invalid position\n");
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}