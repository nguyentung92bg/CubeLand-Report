/* IL2CPP: Rotatelab.Boosters.CannonBoosterController.<>c$$.cctor
void Rotatelab_Boosters_CannonBoosterController___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController.<>c$$.cctor
   void Rotatelab_Boosters_CannonBoosterController___c___cctor (const MethodInfo* method); */

void Rotatelab_Boosters_CannonBoosterController___c___cctor_11368c4(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_0114692c + 0x11468d4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146930 + 0x11468e8));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01146934 + 0x11468fc);
  uVar3 = thunk_FUN_00f00cdc(*piVar5);
  System_Object___ctor_2bb93bc(uVar3,0);
  **(undefined4 **)(*piVar5 + 0x5c) = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (*(uint *)(*piVar5 + 0x5c) >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((*(uint *)(*piVar5 + 0x5c) & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

