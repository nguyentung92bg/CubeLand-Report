/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$CheckSystem
void Rotatelab_SeasonPass_SeasonPassController__CheckSystem (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$CheckSystem
   void Rotatelab_SeasonPass_SeasonPassController__CheckSystem
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__CheckSystem_10a34ec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_010b3708 + 0x10b3504);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b370c + 0x10b3518));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3710 + 0x10b3524));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3714 + 0x10b3530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3718 + 0x10b353c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b371c + 0x10b3548));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3720 + 0x10b3554));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3724 + 0x10b3560));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3728 + 0x10b356c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010b372c + 0x10b3580) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_20,0);
  uVar1 = uStack_1c;
  uVar3 = uStack_20;
  uVar6 = UnityEngine_PlayerPrefs__HasKey_35f74c0(**(undefined4 **)(_UNK_010b3730 + 0x10b35b4),0);
  if ((int)uVar6 == 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedValue_DateTime___set_Value_1a8b3bc
              (*(int *)(param_1 + 0x48),(int)((ulonglong)uVar6 >> 0x20),uVar3,uVar1,
               **(undefined4 **)(_UNK_010b3734 + 0x10b35ec));
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    Rotatelab_Save_SavedValue_DateTime___op_Implicit_1a8b5f0
              (&uStack_20,*(undefined4 *)(param_1 + 0x48),
               **(undefined4 **)(_UNK_010b3744 + 0x10b367c));
    if (*(int *)(**(int **)(_UNK_010b3748 + 0x10b3690) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar6 = Rotatelab_Extensions__IsInSameMonth_fc338c(uVar3,uVar1,uStack_20,uStack_1c,0);
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) {
      Rotatelab_SeasonPass_SeasonPassController__CheckResult_10a49f0(param_1);
      uVar4 = extraout_r1;
    }
    if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedValue_DateTime___set_Value_1a8b3bc
              (*(int *)(param_1 + 0x48),uVar4,uVar3,uVar1,
               **(undefined4 **)(_UNK_010b374c + 0x10b36f4));
  }
  else {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010b3738 + 0x10b3610));
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b373c + 0x10b3624));
    System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_010b3740 + 0x10b3640),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_HomePageCoordinator__Request_107a508(iVar2,4,uVar3,0);
  }
  return;
}

