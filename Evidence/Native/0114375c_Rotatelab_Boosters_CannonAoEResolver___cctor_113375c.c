/* IL2CPP: Rotatelab.Boosters.CannonAoEResolver$$.cctor
void Rotatelab_Boosters_CannonAoEResolver___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonAoEResolver$$.cctor
   void Rotatelab_Boosters_CannonAoEResolver___cctor (const MethodInfo* method); */

void Rotatelab_Boosters_CannonAoEResolver___cctor_113375c(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_011437f4 + 0x114376c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011437f8 + 0x1143780));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011437fc + 0x114378c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143800 + 0x1143798));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01143804 + 0x11437ac));
  System_Collections_Generic_HashSet_object____ctor_241f6dc
            (uVar3,9,**(undefined4 **)(_UNK_01143808 + 0x11437c4));
  piVar4 = *(int **)(_UNK_0114380c + 0x11437d8);
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

