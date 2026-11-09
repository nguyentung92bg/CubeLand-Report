/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$CheckBoosterVisibility
void Rotatelab_Boosters_BoosterGenerator__CheckBoosterVisibility (Rotatelab_Boosters_BoosterGenerator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$CheckBoosterVisibility
   void Rotatelab_Boosters_BoosterGenerator__CheckBoosterVisibility
   (Rotatelab_Boosters_BoosterGenerator_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_BoosterGenerator__CheckBoosterVisibility_113d294(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_0114d3d4 + 0x114d2a4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d3d8 + 0x114d2b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d3dc + 0x114d2c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d3e0 + 0x114d2d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d3e4 + 0x114d2dc));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0114d3e8 + 0x114d2f0);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x40);
  if (*(int *)(**(int **)(_UNK_0114d3ec + 0x114d310) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_0114d3ec + 0x114d310));
  }
  uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114d3f0 + 0x114d34c));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar4 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x14) + 0xc);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar4 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),*(int *)(*(int *)(iVar4 + 0x10) + 0x24) <= iVar3,
             *(undefined4 *)(iVar1 + 0x14));
  return;
}

