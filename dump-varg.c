
a.out:     file format elf32-i386


Disassembly of section .init:

080482bc <_init>:
 80482bc:	55                   	push   %ebp
 80482bd:	89 e5                	mov    %esp,%ebp
 80482bf:	53                   	push   %ebx
 80482c0:	83 ec 04             	sub    $0x4,%esp
 80482c3:	e8 00 00 00 00       	call   80482c8 <_init+0xc>
 80482c8:	5b                   	pop    %ebx
 80482c9:	81 c3 2c 1d 00 00    	add    $0x1d2c,%ebx
 80482cf:	8b 93 fc ff ff ff    	mov    -0x4(%ebx),%edx
 80482d5:	85 d2                	test   %edx,%edx
 80482d7:	74 05                	je     80482de <_init+0x22>
 80482d9:	e8 1e 00 00 00       	call   80482fc <__gmon_start__@plt>
 80482de:	e8 dd 00 00 00       	call   80483c0 <frame_dummy>
 80482e3:	e8 18 02 00 00       	call   8048500 <__do_global_ctors_aux>
 80482e8:	58                   	pop    %eax
 80482e9:	5b                   	pop    %ebx
 80482ea:	c9                   	leave  
 80482eb:	c3                   	ret    

Disassembly of section .plt:

080482ec <__gmon_start__@plt-0x10>:
 80482ec:	ff 35 f8 9f 04 08    	pushl  0x8049ff8
 80482f2:	ff 25 fc 9f 04 08    	jmp    *0x8049ffc
 80482f8:	00 00                	add    %al,(%eax)
	...

080482fc <__gmon_start__@plt>:
 80482fc:	ff 25 00 a0 04 08    	jmp    *0x804a000
 8048302:	68 00 00 00 00       	push   $0x0
 8048307:	e9 e0 ff ff ff       	jmp    80482ec <_init+0x30>

0804830c <__libc_start_main@plt>:
 804830c:	ff 25 04 a0 04 08    	jmp    *0x804a004
 8048312:	68 08 00 00 00       	push   $0x8
 8048317:	e9 d0 ff ff ff       	jmp    80482ec <_init+0x30>

0804831c <printf@plt>:
 804831c:	ff 25 08 a0 04 08    	jmp    *0x804a008
 8048322:	68 10 00 00 00       	push   $0x10
 8048327:	e9 c0 ff ff ff       	jmp    80482ec <_init+0x30>

Disassembly of section .text:

08048330 <_start>:
 8048330:	31 ed                	xor    %ebp,%ebp
 8048332:	5e                   	pop    %esi
 8048333:	89 e1                	mov    %esp,%ecx
 8048335:	83 e4 f0             	and    $0xfffffff0,%esp
 8048338:	50                   	push   %eax
 8048339:	54                   	push   %esp
 804833a:	52                   	push   %edx
 804833b:	68 90 84 04 08       	push   $0x8048490
 8048340:	68 a0 84 04 08       	push   $0x80484a0
 8048345:	51                   	push   %ecx
 8048346:	56                   	push   %esi
 8048347:	68 e4 83 04 08       	push   $0x80483e4
 804834c:	e8 bb ff ff ff       	call   804830c <__libc_start_main@plt>
 8048351:	f4                   	hlt    
 8048352:	90                   	nop
 8048353:	90                   	nop
 8048354:	90                   	nop
 8048355:	90                   	nop
 8048356:	90                   	nop
 8048357:	90                   	nop
 8048358:	90                   	nop
 8048359:	90                   	nop
 804835a:	90                   	nop
 804835b:	90                   	nop
 804835c:	90                   	nop
 804835d:	90                   	nop
 804835e:	90                   	nop
 804835f:	90                   	nop

08048360 <__do_global_dtors_aux>:
 8048360:	55                   	push   %ebp
 8048361:	89 e5                	mov    %esp,%ebp
 8048363:	53                   	push   %ebx
 8048364:	83 ec 04             	sub    $0x4,%esp
 8048367:	80 3d 14 a0 04 08 00 	cmpb   $0x0,0x804a014
 804836e:	75 3f                	jne    80483af <__do_global_dtors_aux+0x4f>
 8048370:	a1 18 a0 04 08       	mov    0x804a018,%eax
 8048375:	bb 18 9f 04 08       	mov    $0x8049f18,%ebx
 804837a:	81 eb 14 9f 04 08    	sub    $0x8049f14,%ebx
 8048380:	c1 fb 02             	sar    $0x2,%ebx
 8048383:	83 eb 01             	sub    $0x1,%ebx
 8048386:	39 d8                	cmp    %ebx,%eax
 8048388:	73 1e                	jae    80483a8 <__do_global_dtors_aux+0x48>
 804838a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8048390:	83 c0 01             	add    $0x1,%eax
 8048393:	a3 18 a0 04 08       	mov    %eax,0x804a018
 8048398:	ff 14 85 14 9f 04 08 	call   *0x8049f14(,%eax,4)
 804839f:	a1 18 a0 04 08       	mov    0x804a018,%eax
 80483a4:	39 d8                	cmp    %ebx,%eax
 80483a6:	72 e8                	jb     8048390 <__do_global_dtors_aux+0x30>
 80483a8:	c6 05 14 a0 04 08 01 	movb   $0x1,0x804a014
 80483af:	83 c4 04             	add    $0x4,%esp
 80483b2:	5b                   	pop    %ebx
 80483b3:	5d                   	pop    %ebp
 80483b4:	c3                   	ret    
 80483b5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 80483b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

080483c0 <frame_dummy>:
 80483c0:	55                   	push   %ebp
 80483c1:	89 e5                	mov    %esp,%ebp
 80483c3:	83 ec 18             	sub    $0x18,%esp
 80483c6:	a1 1c 9f 04 08       	mov    0x8049f1c,%eax
 80483cb:	85 c0                	test   %eax,%eax
 80483cd:	74 12                	je     80483e1 <frame_dummy+0x21>
 80483cf:	b8 00 00 00 00       	mov    $0x0,%eax
 80483d4:	85 c0                	test   %eax,%eax
 80483d6:	74 09                	je     80483e1 <frame_dummy+0x21>
 80483d8:	c7 04 24 1c 9f 04 08 	movl   $0x8049f1c,(%esp)
 80483df:	ff d0                	call   *%eax
 80483e1:	c9                   	leave  
 80483e2:	c3                   	ret    
 80483e3:	90                   	nop

080483e4 <main>:

void showchar(int, int, ...);


int main()
{
 80483e4:	55                   	push   %ebp
 80483e5:	89 e5                	mov    %esp,%ebp
 80483e7:	83 e4 f0             	and    $0xfffffff0,%esp
 80483ea:	83 ec 30             	sub    $0x30,%esp
	showchar(8, 0xC, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h');
 80483ed:	c7 44 24 24 68 00 00 	movl   $0x68,0x24(%esp)
 80483f4:	00 
 80483f5:	c7 44 24 20 67 00 00 	movl   $0x67,0x20(%esp)
 80483fc:	00 
 80483fd:	c7 44 24 1c 66 00 00 	movl   $0x66,0x1c(%esp)
 8048404:	00 
 8048405:	c7 44 24 18 65 00 00 	movl   $0x65,0x18(%esp)
 804840c:	00 
 804840d:	c7 44 24 14 64 00 00 	movl   $0x64,0x14(%esp)
 8048414:	00 
 8048415:	c7 44 24 10 63 00 00 	movl   $0x63,0x10(%esp)
 804841c:	00 
 804841d:	c7 44 24 0c 62 00 00 	movl   $0x62,0xc(%esp)
 8048424:	00 
 8048425:	c7 44 24 08 61 00 00 	movl   $0x61,0x8(%esp)			// 'a'
 804842c:	00 
 804842d:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)			// 颜色C
 8048434:	00 
 8048435:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)				// 8个字符
 804843c:	e8 07 00 00 00       	call   8048448 <showchar>
	return 0;
 8048441:	b8 00 00 00 00       	mov    $0x0,%eax
}
 8048446:	c9                   	leave  
 8048447:	c3                   	ret    

08048448 <showchar>:

void showchar(int n, int color, ...)
{
 8048448:	55                   	push   %ebp
 8048449:	89 e5                	mov    %esp,%ebp
 804844b:	83 ec 28             	sub    $0x28,%esp
	int a, ret;															// a: ebp-0xc; ret: ebp-0x10
	va_list ap;															// ap: ebp-0x14

	va_start(ap, color);
 804844e:	8d 45 10             	lea    0x10(%ebp),%eax				// color栈变量地址 ebp, ip, n, color, 'a', 'b'
																		//						+4  +8  +12    +16	
 8048451:	89 45 ec             	mov    %eax,-0x14(%ebp)				// ap='a'的地址

	for(a=0; a!=n; a++) 
 8048454:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)				// a=0
 804845b:	eb 26                	jmp    8048483 <showchar+0x3b>
	{
		ret = va_arg(ap, int);
 804845d:	8b 45 ec             	mov    -0x14(%ebp),%eax				// mov ap, eax 		;'a'的地址
 8048460:	8d 50 04             	lea    0x4(%eax),%edx				// lea ap+4, edx 
 8048463:	89 55 ec             	mov    %edx,-0x14(%ebp)				// mov edx, ap		;'b'的地址
 8048466:	8b 00                	mov    (%eax),%eax					// mov 'a', eax
 8048468:	89 45 f0             	mov    %eax,-0x10(%ebp)				// mov eax, ret
		printf("%#x\n", ret);
 804846b:	b8 50 85 04 08       	mov    $0x8048550,%eax				// mov "%#x\n", eax
 8048470:	8b 55 f0             	mov    -0x10(%ebp),%edx				// mov ret, edx
 8048473:	89 54 24 04          	mov    %edx,0x4(%esp)				// push edx
 8048477:	89 04 24             	mov    %eax,(%esp)					// push eax
 804847a:	e8 9d fe ff ff       	call   804831c <printf@plt>			// printf 
	int a, ret;
	va_list ap;

	va_start(ap, color);

	for(a=0; a!=n; a++) 
 804847f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)				// a++
 8048483:	8b 45 f4             	mov    -0xc(%ebp),%eax				// 上来就跳到此处,比较
 8048486:	3b 45 08             	cmp    0x8(%ebp),%eax				// cmp n, a
 8048489:	75 d2                	jne    804845d <showchar+0x15>
		ret = va_arg(ap, int);
		printf("%#x\n", ret);
	}

	va_end(ap);															// va_end没有对ap做任何动作
}
 804848b:	c9                   	leave  
 804848c:	c3                   	ret    
 804848d:	90                   	nop
 804848e:	90                   	nop
 804848f:	90                   	nop

08048490 <__libc_csu_fini>:
 8048490:	55                   	push   %ebp
 8048491:	89 e5                	mov    %esp,%ebp
 8048493:	5d                   	pop    %ebp
 8048494:	c3                   	ret    
 8048495:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8048499:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

080484a0 <__libc_csu_init>:
 80484a0:	55                   	push   %ebp
 80484a1:	89 e5                	mov    %esp,%ebp
 80484a3:	57                   	push   %edi
 80484a4:	56                   	push   %esi
 80484a5:	53                   	push   %ebx
 80484a6:	e8 4f 00 00 00       	call   80484fa <__i686.get_pc_thunk.bx>
 80484ab:	81 c3 49 1b 00 00    	add    $0x1b49,%ebx
 80484b1:	83 ec 1c             	sub    $0x1c,%esp
 80484b4:	e8 03 fe ff ff       	call   80482bc <_init>
 80484b9:	8d bb 18 ff ff ff    	lea    -0xe8(%ebx),%edi
 80484bf:	8d 83 18 ff ff ff    	lea    -0xe8(%ebx),%eax
 80484c5:	29 c7                	sub    %eax,%edi
 80484c7:	c1 ff 02             	sar    $0x2,%edi
 80484ca:	85 ff                	test   %edi,%edi
 80484cc:	74 24                	je     80484f2 <__libc_csu_init+0x52>
 80484ce:	31 f6                	xor    %esi,%esi
 80484d0:	8b 45 10             	mov    0x10(%ebp),%eax
 80484d3:	89 44 24 08          	mov    %eax,0x8(%esp)
 80484d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80484da:	89 44 24 04          	mov    %eax,0x4(%esp)
 80484de:	8b 45 08             	mov    0x8(%ebp),%eax
 80484e1:	89 04 24             	mov    %eax,(%esp)
 80484e4:	ff 94 b3 18 ff ff ff 	call   *-0xe8(%ebx,%esi,4)
 80484eb:	83 c6 01             	add    $0x1,%esi
 80484ee:	39 fe                	cmp    %edi,%esi
 80484f0:	72 de                	jb     80484d0 <__libc_csu_init+0x30>
 80484f2:	83 c4 1c             	add    $0x1c,%esp
 80484f5:	5b                   	pop    %ebx
 80484f6:	5e                   	pop    %esi
 80484f7:	5f                   	pop    %edi
 80484f8:	5d                   	pop    %ebp
 80484f9:	c3                   	ret    

080484fa <__i686.get_pc_thunk.bx>:
 80484fa:	8b 1c 24             	mov    (%esp),%ebx
 80484fd:	c3                   	ret    
 80484fe:	90                   	nop
 80484ff:	90                   	nop

08048500 <__do_global_ctors_aux>:
 8048500:	55                   	push   %ebp
 8048501:	89 e5                	mov    %esp,%ebp
 8048503:	53                   	push   %ebx
 8048504:	83 ec 04             	sub    $0x4,%esp
 8048507:	a1 0c 9f 04 08       	mov    0x8049f0c,%eax
 804850c:	83 f8 ff             	cmp    $0xffffffff,%eax
 804850f:	74 13                	je     8048524 <__do_global_ctors_aux+0x24>
 8048511:	bb 0c 9f 04 08       	mov    $0x8049f0c,%ebx
 8048516:	66 90                	xchg   %ax,%ax
 8048518:	83 eb 04             	sub    $0x4,%ebx
 804851b:	ff d0                	call   *%eax
 804851d:	8b 03                	mov    (%ebx),%eax
 804851f:	83 f8 ff             	cmp    $0xffffffff,%eax
 8048522:	75 f4                	jne    8048518 <__do_global_ctors_aux+0x18>
 8048524:	83 c4 04             	add    $0x4,%esp
 8048527:	5b                   	pop    %ebx
 8048528:	5d                   	pop    %ebp
 8048529:	c3                   	ret    
 804852a:	90                   	nop
 804852b:	90                   	nop

Disassembly of section .fini:

0804852c <_fini>:
 804852c:	55                   	push   %ebp
 804852d:	89 e5                	mov    %esp,%ebp
 804852f:	53                   	push   %ebx
 8048530:	83 ec 04             	sub    $0x4,%esp
 8048533:	e8 00 00 00 00       	call   8048538 <_fini+0xc>
 8048538:	5b                   	pop    %ebx
 8048539:	81 c3 bc 1a 00 00    	add    $0x1abc,%ebx
 804853f:	e8 1c fe ff ff       	call   8048360 <__do_global_dtors_aux>
 8048544:	59                   	pop    %ecx
 8048545:	5b                   	pop    %ebx
 8048546:	c9                   	leave  
 8048547:	c3                   	ret    
