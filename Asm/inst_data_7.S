ori	$2, $0, 0xffff
sll	$2,	$2,	16
ori	$2,	$2,	0xfff1
ori	$3,	$0, 0x11

div	$2,$3
divu $2, $3
div $3, $2