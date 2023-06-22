#ifndef DOG_H
#define DOG_H


/**
 * struct dog - all about a dog
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 *
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
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
int _strlen(char *s);


#endif



