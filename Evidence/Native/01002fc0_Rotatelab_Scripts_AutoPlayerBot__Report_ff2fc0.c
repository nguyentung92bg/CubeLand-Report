/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$Report
void Rotatelab_Scripts_AutoPlayerBot__Report (Rotatelab_Scripts_AutoPlayerBot_o* __this, System_String_o* outcome, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$Report
   void Rotatelab_Scripts_AutoPlayerBot__Report (Rotatelab_Scripts_AutoPlayerBot_o* __this,
   System_String_o* outcome, const MethodInfo* method); */

void Rotatelab_Scripts_AutoPlayerBot__Report_ff2fc0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  pcVar6 = (char *)(_UNK_010030e8 + 0x1002fdc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010030ec + 0x1002ff0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010030f0 + 0x1002ffc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010030f4 + 0x1003008));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010030f8 + 0x100301c));
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_010030fc + 0x1003038) + 0x74) == 0) {
      FUN_00ec3934();
    }
    piVar2 = (int *)Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_28 = (**(code **)(*piVar2 + 0xf0))(piVar2,*(undefined4 *)(*piVar2 + 0xf4));
    iVar5 = *(int *)(_UNK_01003100 + 0x1003084);
    uVar3 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x34),&uStack_28);
    uStack_2c = *(undefined4 *)(param_1 + 0x48);
    uVar4 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x24),&uStack_2c);
    uVar3 = System_String__Format_2a0c2b4
                      (**(undefined4 **)(_UNK_01003104 + 0x10030c8),uVar3,param_2,uVar4,0);
    Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8(iVar1,uVar3,0);
  }
  return;
}

