/* IL2CPP: Rotatelab.Boosters.Booster$$OnLevelSucceededHandler
void Rotatelab_Boosters_Booster__OnLevelSucceededHandler (Rotatelab_Boosters_Booster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Booster$$OnLevelSucceededHandler
   void Rotatelab_Boosters_Booster__OnLevelSucceededHandler (Rotatelab_Boosters_Booster_o* __this,
   const MethodInfo* method); */

void Rotatelab_Boosters_Booster__OnLevelSucceededHandler_113bedc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_28 [16];
  
  pcVar3 = (char *)(_UNK_0114c034 + 0x114bef4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c038 + 0x114bf08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c03c + 0x114bf14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c040 + 0x114bf20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c044 + 0x114bf2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c048 + 0x114bf38));
    *pcVar3 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x3c) = 1;
  Rotatelab_Boosters_Booster__RefreshButtonInteractibility_113c064(param_1);
  piVar6 = *(int **)(_UNK_0114c04c + 0x114bf5c);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar4 = puVar2[4];
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar5 = *puVar2;
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114c050 + 0x114bfa4));
    System_Action_object____ctor_1f11414(iVar4,uVar5,**(undefined4 **)(_UNK_0114c054 + 0x114bfc4),0)
    ;
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 0x10);
    *piVar6 = iVar4;
    thunk_FUN_00ec5080(piVar6,iVar4);
  }
  if (*(int *)(**(int **)(_UNK_0114c058 + 0x114bfec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_object__15d6154
            (auStack_28,param_1,0x40000000,iVar4,0,0,**(undefined4 **)(_UNK_0114c05c + 0x114c014));
  return;
}

