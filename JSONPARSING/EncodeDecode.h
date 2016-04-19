typedef struct Data
{
    int width;
    float frame_rate;
    double rate;
    char *name;
}DATA;

extern char *encodeData(DATA *);
extern void decodeData(DATA *, char *);


