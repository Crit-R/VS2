#ifndef KECCAK_H
#define KECCAK_H

void keccak160(uint64_t* x, uint64_t* y, uint32_t* hash);

//void keccak160sse(uint64_t* x0, uint64_t* x1, uint64_t* x2, uint64_t* x3,
//	uint64_t* y0, uint64_t* y1, uint64_t* y2, uint64_t* y3,
//	uint32_t* h0, uint32_t* h1, uint32_t* h2, uint32_t* h3);


static inline bool keccak160_comp_hash(uint8_t *h0, uint8_t *h1) {
	uint32_t *h0i = (uint32_t *)h0;
	uint32_t *h1i = (uint32_t *)h1;
	return (h0i[0] == h1i[0]) &&
		(h0i[1] == h1i[1]) &&
		(h0i[2] == h1i[2]) &&
		(h0i[3] == h1i[3]) &&
		(h0i[4] == h1i[4]);
}

#endif
