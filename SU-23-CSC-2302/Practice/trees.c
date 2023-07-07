#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Individual {
    char name[50];
    struct Individual* father;
    struct Individual* mother;
} Individual;

Individual* createIndividual(const char* name, Individual* father, Individual* mother) {
    Individual* individual = (Individual*)malloc(sizeof(Individual));
    strcpy(individual->name, name);
    individual->father = father;
    individual->mother = mother;
    return individual;
}

int areSiblings(Individual* individual1, Individual* individual2) {
    if (individual1 == NULL || individual2 == NULL)
        return 0;
    if (individual1->father == individual2->father && individual1->mother == individual2->mother)
        return 1;
    return 0;
}

Individual* findParent(Individual* individual, const char* parentName) {
    if (individual == NULL)
        return NULL;
    if (individual->father != NULL && strcmp(individual->father->name, parentName) == 0)
        return individual->father;
    if (individual->mother != NULL && strcmp(individual->mother->name, parentName) == 0)
        return individual->mother;
    return NULL;
}

void findSiblings(Individual* individual) {
    if (individual == NULL)
        return;
    Individual* father = individual->father;
    Individual* mother = individual->mother;

    if (father != NULL && mother != NULL) {
        printf("Siblings of %s: ", individual->name);
        Individual* sibling = father->mother;
        while (sibling != NULL) {
            if (strcmp(sibling->name, individual->name) != 0)
                printf("%s ", sibling->name);
            sibling = sibling->father;
        }
        sibling = mother->father;
        while (sibling != NULL) {
            if (strcmp(sibling->name, individual->name) != 0)
                printf("%s ", sibling->name);
            sibling = sibling->mother;
        }
        printf("\n");
    } else {
        printf("%s does not have any siblings.\n", individual->name);
    }
}

void findCousins(Individual* individual) {
    if (individual == NULL)
        return;
    Individual* father = individual->father;
    Individual* mother = individual->mother;

    if (father != NULL && mother != NULL) {
        printf("Cousins of %s: ", individual->name);
        Individual* grandparent = father->father;
        if (grandparent != NULL) {
            Individual* uncleOrAunt = grandparent->father;
            while (uncleOrAunt != NULL) {
                Individual* cousin = uncleOrAunt->mother;
                while (cousin != NULL) {
                    if (strcmp(cousin->name, individual->name) != 0)
                        printf("%s ", cousin->name);
                    cousin = cousin->mother;
                }
                uncleOrAunt = uncleOrAunt->father;
            }
        }
        grandparent = mother->father;
        if (grandparent != NULL) {
            Individual* uncleOrAunt = grandparent->mother;
            while (uncleOrAunt != NULL) {
                Individual* cousin = uncleOrAunt->father;
                while (cousin != NULL) {
                    if (strcmp(cousin->name, individual->name) != 0)
                        printf("%s ", cousin->name);
                    cousin = cousin->father;
                }
                uncleOrAunt->mother;
            }
        }
        printf("\n");
    } else {
        printf("%s does not have any cousins.\n", individual->name);
    }
}

void findAncestors(Individual* individual) {
    if (individual == NULL)
        return;
    printf("Ancestors of %s: ", individual->name);
    Individual* father = individual->father;
    Individual* mother = individual->mother;
    if (father != NULL) {
        printf("%s ", father->name);
        findAncestors(father);
    }
    if (mother != NULL) {
        printf("%s ", mother->name);
        findAncestors(mother);
    }
}

int main() {
    // Create the genealogical tree
    Individual* john = createIndividual("John", NULL, NULL);
    Individual* mary = createIndividual("Mary", NULL, NULL);
    Individual* david = createIndividual("David", john, mary);
    Individual* sarah = createIndividual("Sarah", NULL, NULL);
    Individual* peter = createIndividual("Peter", john, mary);
    Individual* emily = createIndividual("Emily", david, sarah);

    // Test the functionalities
    printf("Are David and Peter siblings? %s\n", areSiblings(david, peter) ? "Yes" : "No");
    printf("Are David and Emily siblings? %s\n", areSiblings(david, emily) ? "Yes" : "No");

    printf("Parents of Emily: ");
    Individual* emilyFather = findParent(emily, "David");
    if (emilyFather != NULL)
        printf("%s ", emilyFather->name);
    Individual* emilyMother = findParent(emily, "Sarah");
    if (emilyMother != NULL)
        printf("%s", emilyMother->name);
    printf("\n");

    findSiblings(peter);
    findSiblings(emily);
    findCousins(peter);
    findCousins(emily);
    findAncestors(emily);

    return 0;
}
