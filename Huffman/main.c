#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUF_SZ 100
#define NUM_ASCII 256

struct node
{
	char c;
	int frequency;
	struct node *left;
	struct node *right;
};

struct node **heap;
int lastHeapIdx = 0;
char codeBuf[100];
int codeBufIdx = -1;

int charFreq[NUM_ASCII]; // Ex) charFreq[96 (a)] = 10

void performEncoding(char *fName);
void showCharFrequency();
int countNonZeroCharacters(void);
void addToHeap(struct node *cur);
struct node *deleteFromHeap(void);
void traverse(struct node *cur, char c);

// argc : argument count
// argv : argument variable
// argv[0]=execution file name, argv[1], argv[2]...
int main(int argc, char *argv[])
{
	if(argc < 3)
	{
		printf("Usage : huff -e fileToEncode\n");
		printf("Usage : huff -d fileToEncode\n");

		return -1;
	}

	// if there is no option for huffman
	if(strcmp(argv[1], "-e") == 0)
	{
		// Huffman coding
		printf("Start Huffman Encoding\n");
		performEncoding(argv[2]);
	}
	else if(strcmp(argv[1], "-d") == 0)
	{
		// Decoding
		printf("Start Huffman Decoding\n");
//		performDecoding(argv[2]);
	}
	else
	{
		printf("Usage : huff -e fileToEncode\n");
		printf("Usage : huff -d fileToEncode\n");

		return -1;
	}

	return 0;
}

void performEncoding(char *fName)
{
	// fopen, fread, fclose
	FILE *fin;
	char buf[BUF_SZ];

	fin = fopen(fName, "rt");
	if(fin == 0)
	{
		printf("Unable to open %s, Program is terminated.\n", fName);
		return;
	}

	memset(charFreq, 0, NUM_ASCII*sizeof(int)); 	// set charFreq as zero

	// read line by line
	while(fgets(buf, BUF_SZ, fin) != 0)
	{
		int len = strlen(buf);
		for(int i=0; i<len; i++)
		{
			charFreq[(int)buf[i]]++;
		}
	}
//	showCharFrequency();
	fclose(fin);

	// Counts the frequency about greater 0
	int count = countNonZeroCharacters();
	heap = (struct node **) malloc((count+1)*sizeof(struct node *));
	memset(heap, 0, (count+1)*sizeof(struct node *));

	// Comprise Min heap
	for(int i=0; i<NUM_ASCII; i++)
	{
		if(charFreq[i]>0)
		{
			struct node *cur = (struct node *) malloc(sizeof(struct node));
			cur->c = (char)i;
			cur->frequency = charFreq[i];
			cur->left = cur->right = 0;
			addToHeap(cur);
		}
	}

	struct node *temp1 = deleteFromHeap();
	struct node *temp2 = deleteFromHeap();
	struct node *temp3 = deleteFromHeap();

//	printf("previous root %d (%c) : %d\n",(int)temp1->c, temp1->c, temp1->frequency);
//	printf("previous root %d (%c) : %d\n",(int)temp2->c, temp2->c, temp2->frequency);
//	printf("previous root %d (%c) : %d\n",(int)temp3->c, temp3->c, temp3->frequency);
//	printf("root %d (%c) : %d\n",(int)heap[1]->c, heap[1]->c, heap[1]->frequency);

	// Comprise Huffman tree
	
	struct node *first = 0;
	struct node *second = 0;

	while(1)
	{
		first = deleteFromHeap();
		second = deleteFromHeap();

		if(second == 0)
		{
			printf("Huffman tree building is ended\n");
			break;
		}
		
		struct node *newNode = (struct node *)malloc(sizeof(struct node));
		newNode->c = 0;
		newNode->frequency = first->frequency + second->frequency;
		newNode->left = first;
		newNode->right = second;

		addToHeap(newNode);
	}

	// first indicates the root node of Huffman Tree
	traverse(first->left, '0');
	traverse(first->right, '1');
}

void traverse(struct node *cur, char c)
{
	codeBufIdx++;
	codeBuf[codeBufIdx] = c;
	codeBuf[codeBufIdx+1] = 0; // to make string, there has to be null

	if(cur->left == 0 && cur->right == 0)
	{
		printf("character %d (%c) : %s\n", (int)cur->c, cur->c, codeBuf);

	}
	else 	// if there is any node
	{
		traverse(cur->left, '0');
		traverse(cur->right, '1');
	}

	codeBuf[codeBufIdx] = 0;
	codeBufIdx--;
	return;
}

/*///////////////////////////////////////////////////
 * 	Delete the root node in Heap
 *////////////////////////////////////////////////////
struct node *deleteFromHeap(void)
{
	if(lastHeapIdx <= 0)
	{
		printf("Heap is empty\n");
		return 0;
	}

	struct node *retValue = heap[1];

	heap[1] = heap[lastHeapIdx];
	lastHeapIdx--;

	int parent = 1;
	int left = 2*parent;
	int right = left+1;

	while(1)
	{
		if(left > lastHeapIdx) 		// the node doesn't have child in heap? maybe
		{
			break;
		}
		else if(right > lastHeapIdx) // there is only left child
		{
			if(heap[left]->frequency < heap[parent]->frequency)
			{
				struct node *temp = heap[left];
				heap[left] = heap[parent];
				heap[parent] = temp;

				parent = left;
				left = 2*parent;
				right = left+1;
			}
			else
			{
				break;
			}
		}
		else 		// the node has two child, left and right
		{
			int smaller;
			if(heap[left]->frequency <= heap[right]->frequency)
			{
				smaller = left;
			}
			else
			{
				smaller = right;
			}
			
			if(heap[smaller]->frequency < heap[parent]->frequency)
			{
				struct node *temp = heap[smaller];
				heap[smaller] = heap[parent];
				heap[parent] = temp;

				parent = smaller;
				left = 2*parent;
				right = left+1;
			}
			else
			{
				break;
			}

		}
	}

	return retValue;
}

/*//////////////////////////////////////////////////////////////
 * Adds new node to heap
 */////////////////////////////////////////////////////////////
void addToHeap(struct node *cur)
{
	lastHeapIdx++;
	heap[lastHeapIdx] = cur;

	int currentIdx = lastHeapIdx;
	int parentIdx = currentIdx/2;
	while(parentIdx >= 1)
	{
		if(heap[parentIdx]->frequency > heap[currentIdx]->frequency)
		{
			// have to swap parent node with my node
			struct node *temp = heap[parentIdx];
			heap[parentIdx] = heap[currentIdx];
			heap[currentIdx] = temp;

			currentIdx = parentIdx;
			parentIdx = currentIdx/2;
		}
		else
		{
			break;
		}
	}
}

/*///////////////////////////////////////////////////////////
 * 	counts all the number of frequency that is greater than 0
 *////////////////////////////////////////////////////////////
int countNonZeroCharacters(void)
{
	int cnt = 0;
	for(int i=0; i<NUM_ASCII; i++)
	{
		if(charFreq[i] > 0)
		{
			cnt++;
		}
	}

	return cnt;

}

void showCharFrequency(void)
{
	// charFreq
	for(int i=0; i<NUM_ASCII; i++)
	{
		// print a character greater than 1
		if(charFreq[i] > 0)
		{
			printf("ASCII code %d ( %c ) : %d \n", i, (char)i, charFreq[i]);
		}
	}
}
