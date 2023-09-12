#ifndef DOG_H
#define DOG_H
/**
 * struct dog - contain 3 members
 * @name : frist member
 * @age : second member
 * @owner : thired member
 * Description: just definition
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
