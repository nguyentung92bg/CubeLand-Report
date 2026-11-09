/* IL2CPP: Rotatelab.Shop.StarChallenge$$.cctor
void Rotatelab_Shop_StarChallenge___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallenge$$.cctor
   void Rotatelab_Shop_StarChallenge___cctor (const MethodInfo* method); */

void Rotatelab_Shop_StarChallenge___cctor_10c5fa4(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_010d603c + 0x10d5fb4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6040 + 0x10d5fc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6044 + 0x10d5fd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6048 + 0x10d5fe0));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d604c + 0x10d5ff4));
  Rotatelab_GameAction_object__object____ctor_23a4f78
            (uVar3,0,**(undefined4 **)(_UNK_010d6050 + 0x10d600c));
  piVar4 = *(int **)(_UNK_010d6054 + 0x10d6020);
  **(undefined4 **)(*piVar4 + 0x5c) = uVar3;
  uVar5 = *(uint *)(*piVar4 + 0x5c);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (uVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

