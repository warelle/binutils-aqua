 .data
foodata: .word 42
 .text
footext:
	.text
	.global add
add:
	add r0,r0,r0
	add rgp,rgp,rgp
	add r16,r16,r16
	add r15,r15,r15
	add r1,r1,r1
	add r11,rsp,r15
	add r8,rgp,rsp
	add r11,r19,r20
	.text
	.global addi
addi:
	addi r0,r0,0
	addi rgp,rgp,4095
	addi r16,r16,2048
	addi r15,r15,2047
	addi r1,r1,1
	addi rtp,rsp,2602
	addi r5,r3,387
	addi r26,r26,524
	.text
	.global sub
sub:
	sub r0,r0,r0
	sub rgp,rgp,rgp
	sub r16,r16,r16
	sub r15,r15,r15
	sub r1,r1,r1
	sub r14,r5,r22
	sub r16,rbp,r0
	sub r17,r14,r11
	.text
	.global subi
subi:
	subi r0,r0,0
	subi rgp,rgp,4095
	subi r16,r16,2048
	subi r15,r15,2047
	subi r1,r1,1
	subi rra,r26,2922
	subi r14,r15,464
	subi r20,r19,2288
	.text
	.global sll
sll:
	sll r0,r0,r0
	sll rgp,rgp,rgp
	sll r16,r16,r16
	sll r15,r15,r15
	sll r1,r1,r1
	sll r4,rbp,r15
	sll r18,rtp,r10
	sll r4,r5,rgp
	.text
	.global slli
slli:
	slli r0,r0,0
	slli rgp,rgp,4095
	slli r16,r16,2048
	slli r15,r15,2047
	slli r1,r1,1
	slli r14,r25,2039
	slli r16,r17,3364
	slli r24,r26,3368
	.text
	.global srl
srl:
	srl r0,r0,r0
	srl rgp,rgp,rgp
	srl r16,r16,r16
	srl r15,r15,r15
	srl r1,r1,r1
	srl rsp,r23,rra
	srl r16,r19,rbp
	srl rsp,r16,r23
	.text
	.global srli
srli:
	srli r0,r0,0
	srli rgp,rgp,4095
	srli r16,r16,2048
	srli r15,r15,2047
	srli r1,r1,1
	srli r19,r20,280
	srli r26,r2,3965
	srli rra,r26,3878
	.text
	.global sra
sra:
	sra r0,r0,r0
	sra rgp,rgp,rgp
	sra r16,r16,r16
	sra r15,r15,r15
	sra r1,r1,r1
	sra r9,r7,r21
	sra r25,r7,rgp
	sra r6,r7,r15
	.text
	.global srai
srai:
	srai r0,r0,0
	srai rgp,rgp,4095
	srai r16,r16,2048
	srai r15,r15,2047
	srai r1,r1,1
	srai r17,rgp,2712
	srai r0,r23,2343
	srai r1,r25,199
	.text
	.global and
and:
	and r0,r0,r0
	and rgp,rgp,rgp
	and r16,r16,r16
	and r15,r15,r15
	and r1,r1,r1
	and r14,r13,rgp
	and r8,r13,r0
	and r23,r21,r19
	.text
	.global andi
andi:
	andi r0,r0,0
	andi rgp,rgp,4095
	andi r16,r16,2048
	andi r15,r15,2047
	andi r1,r1,1
	andi r15,rtp,1220
	andi r3,r8,168
	andi r12,r20,3345
	.text
	.global or
or:
	or r0,r0,r0
	or rgp,rgp,rgp
	or r16,r16,r16
	or r15,r15,r15
	or r1,r1,r1
	or r22,r16,r16
	or r6,r8,r9
	or r8,r8,r5
	.text
	.global ori
ori:
	ori r0,r0,0
	ori rgp,rgp,4095
	ori r16,r16,2048
	ori r15,r15,2047
	ori r1,r1,1
	ori r24,r2,618
	ori r10,r15,898
	ori rra,r4,788
	.text
	.global xor
xor:
	xor r0,r0,r0
	xor rgp,rgp,rgp
	xor r16,r16,r16
	xor r15,r15,r15
	xor r1,r1,r1
	xor r20,rra,rra
	xor r15,r2,r21
	xor rgp,r11,rsp
	.text
	.global xori
xori:
	xori r0,r0,0
	xori rgp,rgp,4095
	xori r16,r16,2048
	xori r15,r15,2047
	xori r1,r1,1
	xori r0,rtp,1356
	xori r15,r15,581
	xori r17,r10,1387
	.text
	.global addx4
addx4:
	addx4 r0,r0,r0
	addx4 rgp,rgp,rgp
	addx4 r16,r16,r16
	addx4 r15,r15,r15
	addx4 r1,r1,r1
	addx4 r4,r16,rbp
	addx4 r18,r14,rgp
	addx4 r10,r0,r5
	.text
	.global addx4i
addx4i:
	addx4i r0,r0,0
	addx4i rgp,rgp,4095
	addx4i r16,r16,2048
	addx4i r15,r15,2047
	addx4i r1,r1,1
	addx4i r25,rsp,673
	addx4i r18,r9,3744
	addx4i r21,r25,4012
	.text
	.global subx4
subx4:
	subx4 r0,r0,r0
	subx4 rgp,rgp,rgp
	subx4 r16,r16,r16
	subx4 r15,r15,r15
	subx4 r1,r1,r1
	subx4 rgp,r17,r22
	subx4 r15,r14,r5
	subx4 r16,r8,r11
	.text
	.global subx4i
subx4i:
	subx4i r0,r0,0
	subx4i rgp,rgp,4095
	subx4i r16,r16,2048
	subx4i r15,r15,2047
	subx4i r1,r1,1
	subx4i r7,rbp,1523
	subx4i rtp,r16,735
	subx4i r14,r24,2012
	.text
	.global mul
mul:
	mul r0,r0,r0
	mul rgp,rgp,rgp
	mul r16,r16,r16
	mul r15,r15,r15
	mul r1,r1,r1
	mul r19,r0,r17
	mul r13,r0,r23
	mul r25,r13,r15
	.text
	.global muli
muli:
	muli r0,r0,0
	muli rgp,rgp,4095
	muli r16,r16,2048
	muli r15,r15,2047
	muli r1,r1,1
	muli r13,r3,4095
	muli r2,r18,1941
	muli rtp,r6,473
	.text
	.global mulh
mulh:
	mulh r0,r0,r0
	mulh rgp,rgp,rgp
	mulh r16,r16,r16
	mulh r15,r15,r15
	mulh r1,r1,r1
	mulh rra,r18,rbp
	mulh rbp,rra,r3
	mulh r26,r0,r10
	.text
	.global mulhi
mulhi:
	mulhi r0,r0,0
	mulhi rgp,rgp,4095
	mulhi r16,r16,2048
	mulhi r15,r15,2047
	mulhi r1,r1,1
	mulhi r23,r15,3081
	mulhi r16,r15,2444
	mulhi r11,r14,3753
	.text
	.global eq
eq:
	eq r0,r0,r0
	eq rgp,rgp,rgp
	eq r16,r16,r16
	eq r15,r15,r15
	eq r1,r1,r1
	eq r18,r6,r4
	eq r2,r16,r17
	eq r12,r5,r17
	.text
	.global eqi
eqi:
	eqi r0,r0,0
	eqi rgp,rgp,4095
	eqi r16,r16,2048
	eqi r15,r15,2047
	eqi r1,r1,1
	eqi r16,rgp,2708
	eqi r13,r21,783
	eqi r0,r11,3828
	.text
	.global ne
ne:
	ne r0,r0,r0
	ne rgp,rgp,rgp
	ne r16,r16,r16
	ne r15,r15,r15
	ne r1,r1,r1
	ne rra,r10,r18
	ne r18,r22,r23
	ne r7,r4,r23
	.text
	.global nei
nei:
	nei r0,r0,0
	nei rgp,rgp,4095
	nei r16,r16,2048
	nei r15,r15,2047
	nei r1,r1,1
	nei r10,r24,1951
	nei r11,r4,2365
	nei r26,r14,96
	.text
	.global lt
lt:
	lt r0,r0,r0
	lt rgp,rgp,rgp
	lt r16,r16,r16
	lt r15,r15,r15
	lt r1,r1,r1
	lt rtp,r7,r19
	lt r19,r2,r26
	lt rgp,r25,r17
	.text
	.global lti
lti:
	lti r0,r0,0
	lti rgp,rgp,4095
	lti r16,r16,2048
	lti r15,r15,2047
	lti r1,r1,1
	lti r7,r19,3774
	lti r3,r17,2232
	lti r10,r2,4029
	.text
	.global le
le:
	le r0,r0,r0
	le rgp,rgp,rgp
	le r16,r16,r16
	le r15,r15,r15
	le r1,r1,r1
	le r22,r4,r5
	le rtp,r20,r26
	le r5,r17,r8
	.text
	.global lei
lei:
	lei r0,r0,0
	lei rgp,rgp,4095
	lei r16,r16,2048
	lei r15,r15,2047
	lei r1,r1,1
	lei r18,r6,519
	lei rra,r0,2359
	lei r26,r24,1100
	.text
	.global ult
ult:
	ult r0,r0,r0
	ult rgp,rgp,rgp
	ult r16,r16,r16
	ult r15,r15,r15
	ult r1,r1,r1
	ult r8,r21,rra
	ult rbp,r3,r17
	ult r25,r13,r26
	.text
	.global ulti
ulti:
	ulti r0,r0,0
	ulti rgp,rgp,4095
	ulti r16,r16,2048
	ulti r15,r15,2047
	ulti r1,r1,1
	ulti r1,r18,1466
	ulti r14,r18,2303
	ulti r14,r16,30
	.text
	.global ule
ule:
	ule r0,r0,r0
	ule rgp,rgp,rgp
	ule r16,r16,r16
	ule r15,r15,r15
	ule r1,r1,r1
	ule r26,r7,rgp
	ule r2,r18,r20
	ule r2,rsp,r5
	.text
	.global ulei
ulei:
	ulei r0,r0,0
	ulei rgp,rgp,4095
	ulei r16,r16,2048
	ulei r15,r15,2047
	ulei r1,r1,1
	ulei r8,r11,3785
	ulei r11,r19,265
	ulei r4,r25,1854
	.text
	.global gt
gt:
	gt r0,r0,r0
	gt rgp,rgp,rgp
	gt r16,r16,r16
	gt r15,r15,r15
	gt r1,r1,r1
	gt r13,r14,r6
	gt r14,r16,r18
	gt r0,r3,rbp
	.text
	.global gti
gti:
	gti r0,r0,0
	gti rgp,rgp,4095
	gti r16,r16,2048
	gti r15,r15,2047
	gti r1,r1,1
	gti r21,r23,753
	gti rtp,rtp,2108
	gti r21,r5,2851
	.text
	.global ugt
ugt:
	ugt r0,r0,r0
	ugt rgp,rgp,rgp
	ugt r16,r16,r16
	ugt r15,r15,r15
	ugt r1,r1,r1
	ugt r17,rgp,r0
	ugt r13,r20,r25
	ugt rbp,rbp,r18
	.text
	.global ugti
ugti:
	ugti r0,r0,0
	ugti rgp,rgp,4095
	ugti r16,r16,2048
	ugti r15,r15,2047
	ugti r1,r1,1
	ugti r25,r13,3075
	ugti r12,rra,2050
	ugti r16,rra,3546
	.text
	.global sysenter
sysenter:
	sysenter 0
	sysenter 4095
	sysenter 2048
	sysenter 2047
	sysenter 1
	sysenter 1018
	sysenter 3133
	sysenter 964
	.text
	.global sysexit
sysexit:
	sysexit 0
	sysexit 4095
	sysexit 2048
	sysexit 2047
	sysexit 1
	sysexit 2608
	sysexit 2788
	sysexit 3800
	.text
	.global li
li:
	li r0,0
	li rgp,2097151
	li r16,1048576
	li r15,1048575
	li r1,1
	li rgp,1251742
	li r11,1809704
	li r6,1455433
	.text
	.global lih
lih:
	lih r0,0
	lih rgp,2097151
	lih r16,1048576
	lih r15,1048575
	lih r1,1
	lih r9,2018520
	lih rsp,220540
	lih r16,568766
	.text
	.global jl
jl:
	jl r0,0
	jl rgp,2097151
	jl r16,1048576
	jl r15,1048575
	jl r1,1
	jl r17,1401425
	jl r6,361354
	jl r4,947618
	.text
	.global load
load:
	load r0,0
	load rgp,65535
	load r16,32768
	load r15,32767
	load r1,1
	load r22,14920
	load r13,2648
	load r12,2617
	.text
	.global store
store:
	store r0,0
	store rgp,-1
	store r16,-32768
	store r15,32767
	store r1,1
	store r22,-2919
	store r20,12737
	store r13,-25164
	.text
	.global jr
jr:
	jr r0,0
	jr rgp,-1
	jr r16,-32768
	jr r15,32767
	jr r1,1
	jr rbp,32194
	jr rbp,7776
	jr r8,10348
	.text
	.global jeq
jeq:
	jeq r0,0
	jeq rgp,-1
	jeq r16,-32768
	jeq r15,32767
	jeq r1,1
	jeq rgp,11865
	jeq rtp,-27598
	jeq r5,-30202
	.text
	.global jne
jne:
	jne r0,0
	jne rgp,-1
	jne r16,-32768
	jne r15,32767
	jne r1,1
	jne r0,19931
	jne r22,-14283
	jne r18,-14172
	.text
	.global jlt
jlt:
	jlt r0,0
	jlt rgp,-1
	jlt r16,-32768
	jlt r15,32767
	jlt r1,1
	jlt r23,27444
	jlt r15,18241
	jlt r24,-28983
	.text
	.global jle
jle:
	jle r0,0
	jle rgp,-1
	jle r16,-32768
	jle r15,32767
	jle r1,1
	jle rtp,-12395
	jle r0,25107
	jle r13,11276
	.text
	.global jgt
jgt:
	jgt r0,0
	jgt rgp,-1
	jgt r16,-32768
	jgt r15,32767
	jgt r1,1
	jgt r23,-28382
	jgt r17,9693
	jgt r9,-30140
	.text
	.global jge
jge:
	jge r0,0
	jge rgp,-1
	jge r16,-32768
	jge r15,32767
	jge r1,1
	jge r15,16403
	jge r6,-3676
	jge rra,7313
	.text
	.global nop
nop:
	nop
