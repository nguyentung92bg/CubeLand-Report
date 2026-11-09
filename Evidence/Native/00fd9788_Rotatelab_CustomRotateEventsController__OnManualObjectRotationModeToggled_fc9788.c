/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnManualObjectRotationModeToggled
void Rotatelab_CustomRotateEventsController__OnManualObjectRotationModeToggled (Rotatelab_CustomRotateEventsController_o* __this, bool isManuelRotationActivated, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnManualObjectRotationModeToggled
   void Rotatelab_CustomRotateEventsController__OnManualObjectRotationModeToggled
   (Rotatelab_CustomRotateEventsController_o* __this, bool isManuelRotationActivated, const
   MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnManualObjectRotationModeToggled_fc9788
               (undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_00fd9814 + 0xfd979c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd9818 + 0xfd97b0));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_00fd981c + 0xfd97cc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_CustomRotateEventsController__get_LevelBaseManualRotationUseCount_fc6564();
  Rotatelab_CustomRotateEventsController__set_LevelBaseManualRotationUseCount_fc65b8(iVar1 + 1);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(uint *)(iVar1 + 0x70);
  *(uint *)(iVar1 + 0x70) = uVar2 + 1;
  *(uint *)(iVar1 + 0x74) = *(int *)(iVar1 + 0x74) + (uint)(0xfffffffe < uVar2);
  return;
}

