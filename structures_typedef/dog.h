#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's identity
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog_t my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
