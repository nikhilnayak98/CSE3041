
prog:     file format elf64-x86-64


Disassembly of section .init:

00000000004004b8 <_init>:
  4004b8:	48 83 ec 08          	sub    $0x8,%rsp
  4004bc:	48 8b 05 35 0b 20 00 	mov    0x200b35(%rip),%rax        # 600ff8 <_DYNAMIC+0x1d0>
  4004c3:	48 85 c0             	test   %rax,%rax
  4004c6:	74 05                	je     4004cd <_init+0x15>
  4004c8:	e8 73 00 00 00       	callq  400540 <__isoc99_scanf@plt+0x10>
  4004cd:	48 83 c4 08          	add    $0x8,%rsp
  4004d1:	c3                   	retq   

Disassembly of section .plt:

00000000004004e0 <puts@plt-0x10>:
  4004e0:	ff 35 22 0b 20 00    	pushq  0x200b22(%rip)        # 601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  4004e6:	ff 25 24 0b 20 00    	jmpq   *0x200b24(%rip)        # 601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  4004ec:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004004f0 <puts@plt>:
  4004f0:	ff 25 22 0b 20 00    	jmpq   *0x200b22(%rip)        # 601018 <_GLOBAL_OFFSET_TABLE_+0x18>
  4004f6:	68 00 00 00 00       	pushq  $0x0
  4004fb:	e9 e0 ff ff ff       	jmpq   4004e0 <_init+0x28>

0000000000400500 <__stack_chk_fail@plt>:
  400500:	ff 25 1a 0b 20 00    	jmpq   *0x200b1a(%rip)        # 601020 <_GLOBAL_OFFSET_TABLE_+0x20>
  400506:	68 01 00 00 00       	pushq  $0x1
  40050b:	e9 d0 ff ff ff       	jmpq   4004e0 <_init+0x28>

0000000000400510 <printf@plt>:
  400510:	ff 25 12 0b 20 00    	jmpq   *0x200b12(%rip)        # 601028 <_GLOBAL_OFFSET_TABLE_+0x28>
  400516:	68 02 00 00 00       	pushq  $0x2
  40051b:	e9 c0 ff ff ff       	jmpq   4004e0 <_init+0x28>

0000000000400520 <__libc_start_main@plt>:
  400520:	ff 25 0a 0b 20 00    	jmpq   *0x200b0a(%rip)        # 601030 <_GLOBAL_OFFSET_TABLE_+0x30>
  400526:	68 03 00 00 00       	pushq  $0x3
  40052b:	e9 b0 ff ff ff       	jmpq   4004e0 <_init+0x28>

0000000000400530 <__isoc99_scanf@plt>:
  400530:	ff 25 02 0b 20 00    	jmpq   *0x200b02(%rip)        # 601038 <_GLOBAL_OFFSET_TABLE_+0x38>
  400536:	68 04 00 00 00       	pushq  $0x4
  40053b:	e9 a0 ff ff ff       	jmpq   4004e0 <_init+0x28>

Disassembly of section .plt.got:

0000000000400540 <.plt.got>:
  400540:	ff 25 b2 0a 20 00    	jmpq   *0x200ab2(%rip)        # 600ff8 <_DYNAMIC+0x1d0>
  400546:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

0000000000400550 <_start>:
  400550:	31 ed                	xor    %ebp,%ebp
  400552:	49 89 d1             	mov    %rdx,%r9
  400555:	5e                   	pop    %rsi
  400556:	48 89 e2             	mov    %rsp,%rdx
  400559:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  40055d:	50                   	push   %rax
  40055e:	54                   	push   %rsp
  40055f:	49 c7 c0 40 07 40 00 	mov    $0x400740,%r8
  400566:	48 c7 c1 d0 06 40 00 	mov    $0x4006d0,%rcx
  40056d:	48 c7 c7 46 06 40 00 	mov    $0x400646,%rdi
  400574:	e8 a7 ff ff ff       	callq  400520 <__libc_start_main@plt>
  400579:	f4                   	hlt    
  40057a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400580 <deregister_tm_clones>:
  400580:	b8 57 10 60 00       	mov    $0x601057,%eax
  400585:	55                   	push   %rbp
  400586:	48 2d 50 10 60 00    	sub    $0x601050,%rax
  40058c:	48 83 f8 0e          	cmp    $0xe,%rax
  400590:	48 89 e5             	mov    %rsp,%rbp
  400593:	76 1b                	jbe    4005b0 <deregister_tm_clones+0x30>
  400595:	b8 00 00 00 00       	mov    $0x0,%eax
  40059a:	48 85 c0             	test   %rax,%rax
  40059d:	74 11                	je     4005b0 <deregister_tm_clones+0x30>
  40059f:	5d                   	pop    %rbp
  4005a0:	bf 50 10 60 00       	mov    $0x601050,%edi
  4005a5:	ff e0                	jmpq   *%rax
  4005a7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
  4005ae:	00 00 
  4005b0:	5d                   	pop    %rbp
  4005b1:	c3                   	retq   
  4005b2:	0f 1f 40 00          	nopl   0x0(%rax)
  4005b6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  4005bd:	00 00 00 

00000000004005c0 <register_tm_clones>:
  4005c0:	be 50 10 60 00       	mov    $0x601050,%esi
  4005c5:	55                   	push   %rbp
  4005c6:	48 81 ee 50 10 60 00 	sub    $0x601050,%rsi
  4005cd:	48 c1 fe 03          	sar    $0x3,%rsi
  4005d1:	48 89 e5             	mov    %rsp,%rbp
  4005d4:	48 89 f0             	mov    %rsi,%rax
  4005d7:	48 c1 e8 3f          	shr    $0x3f,%rax
  4005db:	48 01 c6             	add    %rax,%rsi
  4005de:	48 d1 fe             	sar    %rsi
  4005e1:	74 15                	je     4005f8 <register_tm_clones+0x38>
  4005e3:	b8 00 00 00 00       	mov    $0x0,%eax
  4005e8:	48 85 c0             	test   %rax,%rax
  4005eb:	74 0b                	je     4005f8 <register_tm_clones+0x38>
  4005ed:	5d                   	pop    %rbp
  4005ee:	bf 50 10 60 00       	mov    $0x601050,%edi
  4005f3:	ff e0                	jmpq   *%rax
  4005f5:	0f 1f 00             	nopl   (%rax)
  4005f8:	5d                   	pop    %rbp
  4005f9:	c3                   	retq   
  4005fa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400600 <__do_global_dtors_aux>:
  400600:	80 3d 49 0a 20 00 00 	cmpb   $0x0,0x200a49(%rip)        # 601050 <__TMC_END__>
  400607:	75 11                	jne    40061a <__do_global_dtors_aux+0x1a>
  400609:	55                   	push   %rbp
  40060a:	48 89 e5             	mov    %rsp,%rbp
  40060d:	e8 6e ff ff ff       	callq  400580 <deregister_tm_clones>
  400612:	5d                   	pop    %rbp
  400613:	c6 05 36 0a 20 00 01 	movb   $0x1,0x200a36(%rip)        # 601050 <__TMC_END__>
  40061a:	f3 c3                	repz retq 
  40061c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400620 <frame_dummy>:
  400620:	bf 20 0e 60 00       	mov    $0x600e20,%edi
  400625:	48 83 3f 00          	cmpq   $0x0,(%rdi)
  400629:	75 05                	jne    400630 <frame_dummy+0x10>
  40062b:	eb 93                	jmp    4005c0 <register_tm_clones>
  40062d:	0f 1f 00             	nopl   (%rax)
  400630:	b8 00 00 00 00       	mov    $0x0,%eax
  400635:	48 85 c0             	test   %rax,%rax
  400638:	74 f1                	je     40062b <frame_dummy+0xb>
  40063a:	55                   	push   %rbp
  40063b:	48 89 e5             	mov    %rsp,%rbp
  40063e:	ff d0                	callq  *%rax
  400640:	5d                   	pop    %rbp
  400641:	e9 7a ff ff ff       	jmpq   4005c0 <register_tm_clones>

0000000000400646 <main>:
  400646:	55                   	push   %rbp
  400647:	48 89 e5             	mov    %rsp,%rbp
  40064a:	b8 00 00 00 00       	mov    $0x0,%eax
  40064f:	e8 0d 00 00 00       	callq  400661 <function1>
  400654:	b8 00 00 00 00       	mov    $0x0,%eax
  400659:	e8 56 00 00 00       	callq  4006b4 <function2>
  40065e:	90                   	nop
  40065f:	5d                   	pop    %rbp
  400660:	c3                   	retq   

0000000000400661 <function1>:
  400661:	55                   	push   %rbp
  400662:	48 89 e5             	mov    %rsp,%rbp
  400665:	48 83 ec 20          	sub    $0x20,%rsp
  400669:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  400670:	00 00 
  400672:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  400676:	31 c0                	xor    %eax,%eax
  400678:	bf 54 07 40 00       	mov    $0x400754,%edi
  40067d:	b8 00 00 00 00       	mov    $0x0,%eax
  400682:	e8 89 fe ff ff       	callq  400510 <printf@plt>
  400687:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40068b:	48 89 c6             	mov    %rax,%rsi
  40068e:	bf 62 07 40 00       	mov    $0x400762,%edi
  400693:	b8 00 00 00 00       	mov    $0x0,%eax
  400698:	e8 93 fe ff ff       	callq  400530 <__isoc99_scanf@plt>
  40069d:	90                   	nop
  40069e:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4006a2:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  4006a9:	00 00 
  4006ab:	74 05                	je     4006b2 <function1+0x51>
  4006ad:	e8 4e fe ff ff       	callq  400500 <__stack_chk_fail@plt>
  4006b2:	c9                   	leaveq 
  4006b3:	c3                   	retq   

00000000004006b4 <function2>:
  4006b4:	55                   	push   %rbp
  4006b5:	48 89 e5             	mov    %rsp,%rbp
  4006b8:	bf 67 07 40 00       	mov    $0x400767,%edi
  4006bd:	e8 2e fe ff ff       	callq  4004f0 <puts@plt>
  4006c2:	90                   	nop
  4006c3:	5d                   	pop    %rbp
  4006c4:	c3                   	retq   
  4006c5:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  4006cc:	00 00 00 
  4006cf:	90                   	nop

00000000004006d0 <__libc_csu_init>:
  4006d0:	41 57                	push   %r15
  4006d2:	41 56                	push   %r14
  4006d4:	41 89 ff             	mov    %edi,%r15d
  4006d7:	41 55                	push   %r13
  4006d9:	41 54                	push   %r12
  4006db:	4c 8d 25 2e 07 20 00 	lea    0x20072e(%rip),%r12        # 600e10 <__frame_dummy_init_array_entry>
  4006e2:	55                   	push   %rbp
  4006e3:	48 8d 2d 2e 07 20 00 	lea    0x20072e(%rip),%rbp        # 600e18 <__init_array_end>
  4006ea:	53                   	push   %rbx
  4006eb:	49 89 f6             	mov    %rsi,%r14
  4006ee:	49 89 d5             	mov    %rdx,%r13
  4006f1:	4c 29 e5             	sub    %r12,%rbp
  4006f4:	48 83 ec 08          	sub    $0x8,%rsp
  4006f8:	48 c1 fd 03          	sar    $0x3,%rbp
  4006fc:	e8 b7 fd ff ff       	callq  4004b8 <_init>
  400701:	48 85 ed             	test   %rbp,%rbp
  400704:	74 20                	je     400726 <__libc_csu_init+0x56>
  400706:	31 db                	xor    %ebx,%ebx
  400708:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  40070f:	00 
  400710:	4c 89 ea             	mov    %r13,%rdx
  400713:	4c 89 f6             	mov    %r14,%rsi
  400716:	44 89 ff             	mov    %r15d,%edi
  400719:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  40071d:	48 83 c3 01          	add    $0x1,%rbx
  400721:	48 39 eb             	cmp    %rbp,%rbx
  400724:	75 ea                	jne    400710 <__libc_csu_init+0x40>
  400726:	48 83 c4 08          	add    $0x8,%rsp
  40072a:	5b                   	pop    %rbx
  40072b:	5d                   	pop    %rbp
  40072c:	41 5c                	pop    %r12
  40072e:	41 5d                	pop    %r13
  400730:	41 5e                	pop    %r14
  400732:	41 5f                	pop    %r15
  400734:	c3                   	retq   
  400735:	90                   	nop
  400736:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40073d:	00 00 00 

0000000000400740 <__libc_csu_fini>:
  400740:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000400744 <_fini>:
  400744:	48 83 ec 08          	sub    $0x8,%rsp
  400748:	48 83 c4 08          	add    $0x8,%rsp
  40074c:	c3                   	retq   
