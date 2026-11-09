/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$.cctor
void Rotatelab_Boosters_BaseBoosterController___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$.cctor
   void Rotatelab_Boosters_BaseBoosterController___cctor (const MethodInfo* method); */

void Rotatelab_Boosters_BaseBoosterController___cctor_1132604(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0114269c + 0x1142614);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011426a0 + 0x1142628));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011426a4 + 0x1142634));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011426a8 + 0x1142640));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011426ac + 0x1142654));
  System_Collections_Generic_List_Int32Enum____ctor_261dbf8
            (uVar3,4,**(undefined4 **)(_UNK_011426b0 + 0x114266c));
  piVar4 = *(int **)(_UNK_011426b4 + 0x1142680);
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

