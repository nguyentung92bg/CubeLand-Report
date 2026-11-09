/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$.cctor
void Rotatelab_CloudRush_CloudRushController___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$.cctor
   void Rotatelab_CloudRush_CloudRushController___cctor (const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController___cctor_10de8c8(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_010ee9d8 + 0x10ee8d8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee9dc + 0x10ee8ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee9e0 + 0x10ee8f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee9e4 + 0x10ee904));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee9e8 + 0x10ee910));
    *pcVar6 = '\x01';
  }
  iVar3 = FUN_00ec388c(**(undefined4 **)(_UNK_010ee9ec + 0x10ee928),3);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar3 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x14) = 3;
  if (2 < *(uint *)(iVar3 + 0xc)) {
    piVar7 = *(int **)(_UNK_010ee9f0 + 0x10ee974);
    *(undefined4 *)(iVar3 + 0x18) = 5;
    **(int **)(*piVar7 + 0x5c) = iVar3;
    thunk_FUN_00ec5080(*(undefined4 *)(*piVar7 + 0x5c),iVar3);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ee9f4 + 0x10ee99c));
    Rotatelab_Save_SavedFloat___ctor_108307c(uVar4,**(undefined4 **)(_UNK_010ee9f8 + 0x10ee9b8),0,0)
    ;
    puVar5 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 4);
    *puVar5 = uVar4;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

