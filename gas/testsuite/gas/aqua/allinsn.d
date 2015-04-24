#as:
#objdump: -dr
#name: allinsn

dump.o:     file format elf32-aqua


Disassembly of section .text:

00000000 <add>:
   0:	04 00 00 00 	add r0,r0,r0
   4:	07 ff f8 00 	add rgp,rgp,rgp
   8:	06 10 80 00 	add r16,r16,r16
   c:	05 ef 78 00 	add r15,r15,r15
  10:	04 21 08 00 	add r1,r1,r1
  14:	05 7c 78 00 	add r11,rsp,r15
  18:	05 1f e0 00 	add r8,rgp,rsp
  1c:	05 73 a0 00 	add r11,r19,r20

00000020 <addi>:
  20:	00 00 00 00 	nop
  24:	03 ff ff f0 	addi rgp,rgp,4095
  28:	02 10 80 00 	addi r16,r16,2048
  2c:	01 ef 7f f0 	addi r15,r15,2047
  30:	00 21 00 10 	addi r1,r1,1
  34:	03 dc a2 a0 	addi rtp,rsp,2602
  38:	00 a3 18 30 	addi r5,r3,387
  3c:	03 5a 20 c0 	addi r26,r26,524

00000040 <sub>:
  40:	04 00 00 01 	sub r0,r0,r0
  44:	07 ff f8 01 	sub rgp,rgp,rgp
  48:	06 10 80 01 	sub r16,r16,r16
  4c:	05 ef 78 01 	sub r15,r15,r15
  50:	04 21 08 01 	sub r1,r1,r1
  54:	05 c5 b0 01 	sub r14,r5,r22
  58:	06 1b 00 01 	sub r16,rbp,r0
  5c:	06 2e 58 01 	sub r17,r14,r11

00000060 <subi>:
  60:	00 00 00 01 	subi r0,r0,0
  64:	03 ff ff f1 	subi rgp,rgp,4095
  68:	02 10 80 01 	subi r16,r16,2048
  6c:	01 ef 7f f1 	subi r15,r15,2047
  70:	00 21 00 11 	subi r1,r1,1
  74:	03 ba b6 a1 	subi rra,r26,2922
  78:	01 cf 1d 01 	subi r14,r15,464
  7c:	02 93 8f 01 	subi r20,r19,2288

00000080 <sll>:
  80:	04 00 00 02 	sll r0,r0,r0
  84:	07 ff f8 02 	sll rgp,rgp,rgp
  88:	06 10 80 02 	sll r16,r16,r16
  8c:	05 ef 78 02 	sll r15,r15,r15
  90:	04 21 08 02 	sll r1,r1,r1
  94:	04 9b 78 02 	sll r4,rbp,r15
  98:	06 5e 50 02 	sll r18,rtp,r10
  9c:	04 85 f8 02 	sll r4,r5,rgp

000000a0 <slli>:
  a0:	00 00 00 02 	slli r0,r0,0
  a4:	03 ff ff f2 	slli rgp,rgp,4095
  a8:	02 10 80 02 	slli r16,r16,2048
  ac:	01 ef 7f f2 	slli r15,r15,2047
  b0:	00 21 00 12 	slli r1,r1,1
  b4:	01 d9 7f 72 	slli r14,r25,2039
  b8:	02 11 d2 42 	slli r16,r17,3364
  bc:	03 1a d2 82 	slli r24,r26,3368

000000c0 <srl>:
  c0:	04 00 00 03 	srl r0,r0,r0
  c4:	07 ff f8 03 	srl rgp,rgp,rgp
  c8:	06 10 80 03 	srl r16,r16,r16
  cc:	05 ef 78 03 	srl r15,r15,r15
  d0:	04 21 08 03 	srl r1,r1,r1
  d4:	07 97 e8 03 	srl rsp,r23,rra
  d8:	06 13 d8 03 	srl r16,r19,rbp
  dc:	07 90 b8 03 	srl rsp,r16,r23

000000e0 <srli>:
  e0:	00 00 00 03 	srli r0,r0,0
  e4:	03 ff ff f3 	srli rgp,rgp,4095
  e8:	02 10 80 03 	srli r16,r16,2048
  ec:	01 ef 7f f3 	srli r15,r15,2047
  f0:	00 21 00 13 	srli r1,r1,1
  f4:	02 74 11 83 	srli r19,r20,280
  f8:	03 42 f7 d3 	srli r26,r2,3965
  fc:	03 ba f2 63 	srli rra,r26,3878

00000100 <sra>:
 100:	04 00 00 04 	sra r0,r0,r0
 104:	07 ff f8 04 	sra rgp,rgp,rgp
 108:	06 10 80 04 	sra r16,r16,r16
 10c:	05 ef 78 04 	sra r15,r15,r15
 110:	04 21 08 04 	sra r1,r1,r1
 114:	05 27 a8 04 	sra r9,r7,r21
 118:	07 27 f8 04 	sra r25,r7,rgp
 11c:	04 c7 78 04 	sra r6,r7,r15

00000120 <srai>:
 120:	00 00 00 04 	srai r0,r0,0
 124:	03 ff ff f4 	srai rgp,rgp,4095
 128:	02 10 80 04 	srai r16,r16,2048
 12c:	01 ef 7f f4 	srai r15,r15,2047
 130:	00 21 00 14 	srai r1,r1,1
 134:	02 3f a9 84 	srai r17,rgp,2712
 138:	00 17 92 74 	srai r0,r23,2343
 13c:	00 39 0c 74 	srai r1,r25,199

00000140 <and>:
 140:	04 00 00 05 	and r0,r0,r0
 144:	07 ff f8 05 	and rgp,rgp,rgp
 148:	06 10 80 05 	and r16,r16,r16
 14c:	05 ef 78 05 	and r15,r15,r15
 150:	04 21 08 05 	and r1,r1,r1
 154:	05 cd f8 05 	and r14,r13,rgp
 158:	05 0d 00 05 	and r8,r13,r0
 15c:	06 f5 98 05 	and r23,r21,r19

00000160 <andi>:
 160:	00 00 00 05 	andi r0,r0,0
 164:	03 ff ff f5 	andi rgp,rgp,4095
 168:	02 10 80 05 	andi r16,r16,2048
 16c:	01 ef 7f f5 	andi r15,r15,2047
 170:	00 21 00 15 	andi r1,r1,1
 174:	01 fe 4c 45 	andi r15,rtp,1220
 178:	00 68 0a 85 	andi r3,r8,168
 17c:	01 94 d1 15 	andi r12,r20,3345

00000180 <or>:
 180:	04 00 00 06 	or r0,r0,r0
 184:	07 ff f8 06 	or rgp,rgp,rgp
 188:	06 10 80 06 	or r16,r16,r16
 18c:	05 ef 78 06 	or r15,r15,r15
 190:	04 21 08 06 	or r1,r1,r1
 194:	06 d0 80 06 	or r22,r16,r16
 198:	04 c8 48 06 	or r6,r8,r9
 19c:	05 08 28 06 	or r8,r8,r5

000001a0 <ori>:
 1a0:	00 00 00 06 	ori r0,r0,0
 1a4:	03 ff ff f6 	ori rgp,rgp,4095
 1a8:	02 10 80 06 	ori r16,r16,2048
 1ac:	01 ef 7f f6 	ori r15,r15,2047
 1b0:	00 21 00 16 	ori r1,r1,1
 1b4:	03 02 26 a6 	ori r24,r2,618
 1b8:	01 4f 38 26 	ori r10,r15,898
 1bc:	03 a4 31 46 	ori rra,r4,788

000001c0 <xor>:
 1c0:	04 00 00 07 	xor r0,r0,r0
 1c4:	07 ff f8 07 	xor rgp,rgp,rgp
 1c8:	06 10 80 07 	xor r16,r16,r16
 1cc:	05 ef 78 07 	xor r15,r15,r15
 1d0:	04 21 08 07 	xor r1,r1,r1
 1d4:	06 9d e8 07 	xor r20,rra,rra
 1d8:	05 e2 a8 07 	xor r15,r2,r21
 1dc:	07 eb e0 07 	xor rgp,r11,rsp

000001e0 <xori>:
 1e0:	00 00 00 07 	xori r0,r0,0
 1e4:	03 ff ff f7 	xori rgp,rgp,4095
 1e8:	02 10 80 07 	xori r16,r16,2048
 1ec:	01 ef 7f f7 	xori r15,r15,2047
 1f0:	00 21 00 17 	xori r1,r1,1
 1f4:	00 1e 54 c7 	xori r0,rtp,1356
 1f8:	01 ef 24 57 	xori r15,r15,581
 1fc:	02 2a 56 b7 	xori r17,r10,1387

00000200 <addx4>:
 200:	04 00 00 08 	addx4 r0,r0,r0
 204:	07 ff f8 08 	addx4 rgp,rgp,rgp
 208:	06 10 80 08 	addx4 r16,r16,r16
 20c:	05 ef 78 08 	addx4 r15,r15,r15
 210:	04 21 08 08 	addx4 r1,r1,r1
 214:	04 90 d8 08 	addx4 r4,r16,rbp
 218:	06 4e f8 08 	addx4 r18,r14,rgp
 21c:	05 40 28 08 	addx4 r10,r0,r5

00000220 <addx4i>:
 220:	00 00 00 08 	addx4i r0,r0,0
 224:	03 ff ff f8 	addx4i rgp,rgp,4095
 228:	02 10 80 08 	addx4i r16,r16,2048
 22c:	01 ef 7f f8 	addx4i r15,r15,2047
 230:	00 21 00 18 	addx4i r1,r1,1
 234:	03 3c 2a 18 	addx4i r25,rsp,673
 238:	02 49 ea 08 	addx4i r18,r9,3744
 23c:	02 b9 fa c8 	addx4i r21,r25,4012

00000240 <subx4>:
 240:	04 00 00 09 	subx4 r0,r0,r0
 244:	07 ff f8 09 	subx4 rgp,rgp,rgp
 248:	06 10 80 09 	subx4 r16,r16,r16
 24c:	05 ef 78 09 	subx4 r15,r15,r15
 250:	04 21 08 09 	subx4 r1,r1,r1
 254:	07 f1 b0 09 	subx4 rgp,r17,r22
 258:	05 ee 28 09 	subx4 r15,r14,r5
 25c:	06 08 58 09 	subx4 r16,r8,r11

00000260 <subx4i>:
 260:	00 00 00 09 	subx4i r0,r0,0
 264:	03 ff ff f9 	subx4i rgp,rgp,4095
 268:	02 10 80 09 	subx4i r16,r16,2048
 26c:	01 ef 7f f9 	subx4i r15,r15,2047
 270:	00 21 00 19 	subx4i r1,r1,1
 274:	00 fb 5f 39 	subx4i r7,rbp,1523
 278:	03 d0 2d f9 	subx4i rtp,r16,735
 27c:	01 d8 7d c9 	subx4i r14,r24,2012

00000280 <mul>:
 280:	04 00 00 0a 	mul r0,r0,r0
 284:	07 ff f8 0a 	mul rgp,rgp,rgp
 288:	06 10 80 0a 	mul r16,r16,r16
 28c:	05 ef 78 0a 	mul r15,r15,r15
 290:	04 21 08 0a 	mul r1,r1,r1
 294:	06 60 88 0a 	mul r19,r0,r17
 298:	05 a0 b8 0a 	mul r13,r0,r23
 29c:	07 2d 78 0a 	mul r25,r13,r15

000002a0 <muli>:
 2a0:	00 00 00 0a 	muli r0,r0,0
 2a4:	03 ff ff fa 	muli rgp,rgp,4095
 2a8:	02 10 80 0a 	muli r16,r16,2048
 2ac:	01 ef 7f fa 	muli r15,r15,2047
 2b0:	00 21 00 1a 	muli r1,r1,1
 2b4:	01 a3 ff fa 	muli r13,r3,4095
 2b8:	00 52 79 5a 	muli r2,r18,1941
 2bc:	03 c6 1d 9a 	muli rtp,r6,473

000002c0 <mulh>:
 2c0:	04 00 00 0b 	mulh r0,r0,r0
 2c4:	07 ff f8 0b 	mulh rgp,rgp,rgp
 2c8:	06 10 80 0b 	mulh r16,r16,r16
 2cc:	05 ef 78 0b 	mulh r15,r15,r15
 2d0:	04 21 08 0b 	mulh r1,r1,r1
 2d4:	07 b2 d8 0b 	mulh rra,r18,rbp
 2d8:	07 7d 18 0b 	mulh rbp,rra,r3
 2dc:	07 40 50 0b 	mulh r26,r0,r10

000002e0 <mulhi>:
 2e0:	00 00 00 0b 	mulhi r0,r0,0
 2e4:	03 ff ff fb 	mulhi rgp,rgp,4095
 2e8:	02 10 80 0b 	mulhi r16,r16,2048
 2ec:	01 ef 7f fb 	mulhi r15,r15,2047
 2f0:	00 21 00 1b 	mulhi r1,r1,1
 2f4:	02 ef c0 9b 	mulhi r23,r15,3081
 2f8:	02 0f 98 cb 	mulhi r16,r15,2444
 2fc:	01 6e ea 9b 	mulhi r11,r14,3753

00000300 <eq>:
 300:	1c 00 00 00 	eq r0,r0,r0
 304:	1f ff f8 00 	eq rgp,rgp,rgp
 308:	1e 10 80 00 	eq r16,r16,r16
 30c:	1d ef 78 00 	eq r15,r15,r15
 310:	1c 21 08 00 	eq r1,r1,r1
 314:	1e 46 20 00 	eq r18,r6,r4
 318:	1c 50 88 00 	eq r2,r16,r17
 31c:	1d 85 88 00 	eq r12,r5,r17

00000320 <eqi>:
 320:	18 00 00 00 	eqi r0,r0,0
 324:	1b ff ff f0 	eqi rgp,rgp,4095
 328:	1a 10 80 00 	eqi r16,r16,2048
 32c:	19 ef 7f f0 	eqi r15,r15,2047
 330:	18 21 00 10 	eqi r1,r1,1
 334:	1a 1f a9 40 	eqi r16,rgp,2708
 338:	19 b5 30 f0 	eqi r13,r21,783
 33c:	18 0b ef 40 	eqi r0,r11,3828

00000340 <ne>:
 340:	1c 00 00 01 	ne r0,r0,r0
 344:	1f ff f8 01 	ne rgp,rgp,rgp
 348:	1e 10 80 01 	ne r16,r16,r16
 34c:	1d ef 78 01 	ne r15,r15,r15
 350:	1c 21 08 01 	ne r1,r1,r1
 354:	1f aa 90 01 	ne rra,r10,r18
 358:	1e 56 b8 01 	ne r18,r22,r23
 35c:	1c e4 b8 01 	ne r7,r4,r23

00000360 <nei>:
 360:	18 00 00 01 	nei r0,r0,0
 364:	1b ff ff f1 	nei rgp,rgp,4095
 368:	1a 10 80 01 	nei r16,r16,2048
 36c:	19 ef 7f f1 	nei r15,r15,2047
 370:	18 21 00 11 	nei r1,r1,1
 374:	19 58 79 f1 	nei r10,r24,1951
 378:	19 64 93 d1 	nei r11,r4,2365
 37c:	1b 4e 06 01 	nei r26,r14,96

00000380 <lt>:
 380:	1c 00 00 02 	lt r0,r0,r0
 384:	1f ff f8 02 	lt rgp,rgp,rgp
 388:	1e 10 80 02 	lt r16,r16,r16
 38c:	1d ef 78 02 	lt r15,r15,r15
 390:	1c 21 08 02 	lt r1,r1,r1
 394:	1f c7 98 02 	lt rtp,r7,r19
 398:	1e 62 d0 02 	lt r19,r2,r26
 39c:	1f f9 88 02 	lt rgp,r25,r17

000003a0 <lti>:
 3a0:	18 00 00 02 	lti r0,r0,0
 3a4:	1b ff ff f2 	lti rgp,rgp,4095
 3a8:	1a 10 80 02 	lti r16,r16,2048
 3ac:	19 ef 7f f2 	lti r15,r15,2047
 3b0:	18 21 00 12 	lti r1,r1,1
 3b4:	18 f3 eb e2 	lti r7,r19,3774
 3b8:	18 71 8b 82 	lti r3,r17,2232
 3bc:	19 42 fb d2 	lti r10,r2,4029

000003c0 <le>:
 3c0:	1c 00 00 03 	le r0,r0,r0
 3c4:	1f ff f8 03 	le rgp,rgp,rgp
 3c8:	1e 10 80 03 	le r16,r16,r16
 3cc:	1d ef 78 03 	le r15,r15,r15
 3d0:	1c 21 08 03 	le r1,r1,r1
 3d4:	1e c4 28 03 	le r22,r4,r5
 3d8:	1f d4 d0 03 	le rtp,r20,r26
 3dc:	1c b1 40 03 	le r5,r17,r8

000003e0 <lei>:
 3e0:	18 00 00 03 	lei r0,r0,0
 3e4:	1b ff ff f3 	lei rgp,rgp,4095
 3e8:	1a 10 80 03 	lei r16,r16,2048
 3ec:	19 ef 7f f3 	lei r15,r15,2047
 3f0:	18 21 00 13 	lei r1,r1,1
 3f4:	1a 46 20 73 	lei r18,r6,519
 3f8:	1b a0 93 73 	lei rra,r0,2359
 3fc:	1b 58 44 c3 	lei r26,r24,1100

00000400 <ult>:
 400:	1c 00 00 04 	ult r0,r0,r0
 404:	1f ff f8 04 	ult rgp,rgp,rgp
 408:	1e 10 80 04 	ult r16,r16,r16
 40c:	1d ef 78 04 	ult r15,r15,r15
 410:	1c 21 08 04 	ult r1,r1,r1
 414:	1d 15 e8 04 	ult r8,r21,rra
 418:	1f 63 88 04 	ult rbp,r3,r17
 41c:	1f 2d d0 04 	ult r25,r13,r26

00000420 <ulti>:
 420:	18 00 00 04 	ulti r0,r0,0
 424:	1b ff ff f4 	ulti rgp,rgp,4095
 428:	1a 10 80 04 	ulti r16,r16,2048
 42c:	19 ef 7f f4 	ulti r15,r15,2047
 430:	18 21 00 14 	ulti r1,r1,1
 434:	18 32 5b a4 	ulti r1,r18,1466
 438:	19 d2 8f f4 	ulti r14,r18,2303
 43c:	19 d0 01 e4 	ulti r14,r16,30

00000440 <ule>:
 440:	1c 00 00 05 	ule r0,r0,r0
 444:	1f ff f8 05 	ule rgp,rgp,rgp
 448:	1e 10 80 05 	ule r16,r16,r16
 44c:	1d ef 78 05 	ule r15,r15,r15
 450:	1c 21 08 05 	ule r1,r1,r1
 454:	1f 47 f8 05 	ule r26,r7,rgp
 458:	1c 52 a0 05 	ule r2,r18,r20
 45c:	1c 5c 28 05 	ule r2,rsp,r5

00000460 <ulei>:
 460:	18 00 00 05 	ulei r0,r0,0
 464:	1b ff ff f5 	ulei rgp,rgp,4095
 468:	1a 10 80 05 	ulei r16,r16,2048
 46c:	19 ef 7f f5 	ulei r15,r15,2047
 470:	18 21 00 15 	ulei r1,r1,1
 474:	19 0b ec 95 	ulei r8,r11,3785
 478:	19 73 10 95 	ulei r11,r19,265
 47c:	18 99 73 e5 	ulei r4,r25,1854

00000480 <gt>:
 480:	1c 00 00 06 	gt r0,r0,r0
 484:	1f ff f8 06 	gt rgp,rgp,rgp
 488:	1e 10 80 06 	gt r16,r16,r16
 48c:	1d ef 78 06 	gt r15,r15,r15
 490:	1c 21 08 06 	gt r1,r1,r1
 494:	1d ae 30 06 	gt r13,r14,r6
 498:	1d d0 90 06 	gt r14,r16,r18
 49c:	1c 03 d8 06 	gt r0,r3,rbp

000004a0 <gti>:
 4a0:	18 00 00 06 	gti r0,r0,0
 4a4:	1b ff ff f6 	gti rgp,rgp,4095
 4a8:	1a 10 80 06 	gti r16,r16,2048
 4ac:	19 ef 7f f6 	gti r15,r15,2047
 4b0:	18 21 00 16 	gti r1,r1,1
 4b4:	1a b7 2f 16 	gti r21,r23,753
 4b8:	1b de 83 c6 	gti rtp,rtp,2108
 4bc:	1a a5 b2 36 	gti r21,r5,2851

000004c0 <ugt>:
 4c0:	1c 00 00 07 	ugt r0,r0,r0
 4c4:	1f ff f8 07 	ugt rgp,rgp,rgp
 4c8:	1e 10 80 07 	ugt r16,r16,r16
 4cc:	1d ef 78 07 	ugt r15,r15,r15
 4d0:	1c 21 08 07 	ugt r1,r1,r1
 4d4:	1e 3f 00 07 	ugt r17,rgp,r0
 4d8:	1d b4 c8 07 	ugt r13,r20,r25
 4dc:	1f 7b 90 07 	ugt rbp,rbp,r18

000004e0 <ugti>:
 4e0:	18 00 00 07 	ugti r0,r0,0
 4e4:	1b ff ff f7 	ugti rgp,rgp,4095
 4e8:	1a 10 80 07 	ugti r16,r16,2048
 4ec:	19 ef 7f f7 	ugti r15,r15,2047
 4f0:	18 21 00 17 	ugti r1,r1,1
 4f4:	1b 2d c0 37 	ugti r25,r13,3075
 4f8:	19 9d 80 27 	ugti r12,rra,2050
 4fc:	1a 1d dd a7 	ugti r16,rra,3546

00000500 <sysenter>:
 500:	c0 00 00 00 	sysenter 0
 504:	c0 00 ff f0 	sysenter 4095
 508:	c0 00 80 00 	sysenter 2048
 50c:	c0 00 7f f0 	sysenter 2047
 510:	c0 00 00 10 	sysenter 1
 514:	c0 00 3f a0 	sysenter 1018
 518:	c0 00 c3 d0 	sysenter 3133
 51c:	c0 00 3c 40 	sysenter 964

00000520 <sysexit>:
 520:	c0 00 00 01 	sysexit 0
 524:	c0 00 ff f1 	sysexit 4095
 528:	c0 00 80 01 	sysexit 2048
 52c:	c0 00 7f f1 	sysexit 2047
 530:	c0 00 00 11 	sysexit 1
 534:	c0 00 a3 01 	sysexit 2608
 538:	c0 00 ae 41 	sysexit 2788
 53c:	c0 00 ed 81 	sysexit 3800

00000540 <li>:
 540:	48 00 00 00 	li r0,0
 544:	4b ff ff ff 	li rgp,2097151
 548:	4a 10 00 00 	li r16,1048576
 54c:	49 ef ff ff 	li r15,1048575
 550:	48 20 00 01 	li r1,1
 554:	4b f3 19 9e 	li rgp,1251742
 558:	49 7b 9d 28 	li r11,1809704
 55c:	48 d6 35 49 	li r6,1455433

00000560 <lih>:
 560:	4c 00 00 00 	lih r0,0
 564:	4f ff ff ff 	lih rgp,2097151
 568:	4e 10 00 00 	lih r16,1048576
 56c:	4d ef ff ff 	lih r15,1048575
 570:	4c 20 00 01 	lih r1,1
 574:	4d 3e cc d8 	lih r9,2018520
 578:	4f 83 5d 7c 	lih rsp,220540
 57c:	4e 08 ad be 	lih r16,568766

00000580 <jl>:
 580:	80 00 00 00 	jl r0,0
 584:	83 ff ff ff 	jl rgp,2097151
 588:	82 10 00 00 	jl r16,1048576
 58c:	81 ef ff ff 	jl r15,1048575
 590:	80 20 00 01 	jl r1,1
 594:	82 35 62 51 	jl r17,1401425
 598:	80 c5 83 8a 	jl r6,361354
 59c:	80 8e 75 a2 	jl r4,947618

000005a0 <load>:
 5a0:	60 00 00 00 	load r0,0
 5a4:	63 e0 ff ff 	load rgp,65535
 5a8:	62 00 80 00 	load r16,32768
 5ac:	61 e0 7f ff 	load r15,32767
 5b0:	60 20 00 01 	load r1,1
 5b4:	62 c0 3a 48 	load r22,14920
 5b8:	61 a0 0a 58 	load r13,2648
 5bc:	61 80 0a 39 	load r12,2617

000005c0 <store>:
 5c0:	64 00 00 00 	store r0,0
 5c4:	67 e0 07 ff 	store rgp,-1
 5c8:	66 00 00 00 	store r16,-32768
 5cc:	65 e0 07 ff 	store r15,32767
 5d0:	64 00 00 01 	store r0,1
 5d4:	67 c0 04 99 	store rtp,-2919
 5d8:	64 c0 01 c1 	store r6,12737
 5dc:	66 60 05 b4 	store r19,-25164

000005e0 <jr>:
 5e0:	84 00 00 00 	jr r0,0
 5e4:	87 e0 07 ff 	jr rgp,-1
 5e8:	86 00 00 00 	jr r16,-32768
 5ec:	85 e0 07 ff 	jr r15,32767
 5f0:	84 00 00 01 	jr r0,1
 5f4:	85 e0 05 c2 	jr r15,32194
 5f8:	84 60 06 60 	jr r3,7776
 5fc:	84 a0 00 6c 	jr r5,10348

00000600 <jeq>:
 600:	a0 00 00 00 	jeq r0,0
 604:	a3 e0 07 ff 	jeq rgp,-1
 608:	a2 00 00 00 	jeq r16,-32768
 60c:	a1 e0 07 ff 	jeq r15,32767
 610:	a0 00 00 01 	jeq r0,1
 614:	a0 a0 06 59 	jeq r5,11865
 618:	a2 40 04 32 	jeq r18,-27598
 61c:	a2 20 02 06 	jeq r17,-30202

00000620 <jne>:
 620:	a4 00 00 00 	jne r0,0
 624:	a7 e0 07 ff 	jne rgp,-1
 628:	a6 00 00 00 	jne r16,-32768
 62c:	a5 e0 07 ff 	jne r15,32767
 630:	a4 00 00 01 	jne r0,1
 634:	a5 20 05 db 	jne r9,19931
 638:	a7 20 00 35 	jne r25,-14283
 63c:	a7 20 00 a4 	jne r25,-14172

00000640 <jlt>:
 640:	a8 00 00 00 	jlt r0,0
 644:	ab e0 07 ff 	jlt rgp,-1
 648:	aa 00 00 00 	jlt r16,-32768
 64c:	a9 e0 07 ff 	jlt r15,32767
 650:	a8 00 00 01 	jlt r0,1
 654:	a9 a0 03 34 	jlt r13,27444
 658:	a9 00 07 41 	jlt r8,18241
 65c:	aa 20 06 c9 	jlt r17,-28983

00000660 <jle>:
 660:	ac 00 00 00 	jle r0,0
 664:	af e0 07 ff 	jle rgp,-1
 668:	ae 00 00 00 	jle r16,-32768
 66c:	ad e0 07 ff 	jle r15,32767
 670:	ac 00 00 01 	jle r0,1
 674:	af 20 07 95 	jle r25,-12395
 678:	ad 80 02 13 	jle r12,25107
 67c:	ac a0 04 0c 	jle r5,11276

00000680 <jgt>:
 680:	b0 00 00 00 	jgt r0,0
 684:	b3 e0 07 ff 	jgt rgp,-1
 688:	b2 00 00 00 	jgt r16,-32768
 68c:	b1 e0 07 ff 	jgt r15,32767
 690:	b0 00 00 01 	jgt r0,1
 694:	b2 40 01 22 	jgt r18,-28382
 698:	b0 80 05 dd 	jgt r4,9693
 69c:	b2 20 02 44 	jgt r17,-30140

000006a0 <jge>:
 6a0:	b4 00 00 00 	jge r0,0
 6a4:	b7 e0 07 ff 	jge rgp,-1
 6a8:	b6 00 00 00 	jge r16,-32768
 6ac:	b5 e0 07 ff 	jge r15,32767
 6b0:	b4 00 00 01 	jge r0,1
 6b4:	b5 00 00 13 	jge r8,16403
 6b8:	b7 c0 01 a4 	jge rtp,-3676
 6bc:	b4 60 04 91 	jge r3,7313

000006c0 <nop>:
 6c0:	00 00 00 00 	nop
