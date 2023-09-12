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
typedef dog_t
#endif
