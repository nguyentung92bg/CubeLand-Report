/* IL2CPP: Rotatelab.UI.FailPanelController$$TryFailCloudRushRun
bool Rotatelab_UI_FailPanelController__TryFailCloudRushRun (int32_t exitOption, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$TryFailCloudRushRun
   bool Rotatelab_UI_FailPanelController__TryFailCloudRushRun (int32_t exitOption, const MethodInfo*
   method); */

bool Rotatelab_UI_FailPanelController__TryFailCloudRushRun_111ad00(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_0112ae20 + 0x112ad14);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ae24 + 0x112ad28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ae28 + 0x112ad34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ae2c + 0x112ad40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ae30 + 0x112ad4c));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112ae34 + 0x112ad60));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c(iVar1,0);
  if (iVar1 == 1) {
    piVar4 = *(int **)(_UNK_0112ae38 + 0x112ad98);
    iVar2 = *piVar4;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar4;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x19c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_bool__Int32Enum___Raise_23a3c20
              (iVar2,0,0,**(undefined4 **)(_UNK_0112ae3c + 0x112add4));
    iVar2 = *(int *)(*(int *)(*piVar4 + 0x5c) + 0x198);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_bool__Int32Enum___Raise_23a3c20
              (iVar2,0,param_1,**(undefined4 **)(_UNK_0112ae40 + 0x112ae08));
  }
  return iVar1 == 1;
}

