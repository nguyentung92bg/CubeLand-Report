/* IL2CPP: Rotatelab.SoLevelABTestsData$$.cctor
void Rotatelab_SoLevelABTestsData___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelABTestsData$$.cctor
   void Rotatelab_SoLevelABTestsData___cctor (const MethodInfo* method); */

void Rotatelab_SoLevelABTestsData___cctor_fdd150(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_00fed1fc + 0xfed160);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed200 + 0xfed174));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed204 + 0xfed180));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed208 + 0xfed18c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed20c + 0xfed198));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fed210 + 0xfed1ac));
  Rotatelab_Save_SavedList_int____ctor_1a89f78
            (uVar3,**(undefined4 **)(_UNK_00fed214 + 0xfed1c0),
             **(undefined4 **)(_UNK_00fed218 + 0xfed1cc));
  piVar4 = *(int **)(_UNK_00fed21c + 0xfed1e0);
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

