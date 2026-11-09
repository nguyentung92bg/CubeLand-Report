/* IL2CPP: Rotatelab.Scripts.CameraManager$$TrySetManualRotationAllowed
void Rotatelab_Scripts_CameraManager__TrySetManualRotationAllowed (Rotatelab_Scripts_CameraManager_o* __this, bool isAllowed, Il2CppObject* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.CameraManager$$TrySetManualRotationAllowed
   void Rotatelab_Scripts_CameraManager__TrySetManualRotationAllowed
   (Rotatelab_Scripts_CameraManager_o* __this, bool isAllowed, Il2CppObject* source, const
   MethodInfo* method); */

uint Rotatelab_Scripts_CameraManager__TrySetManualRotationAllowed_ffbbd4
               (int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_0100bcc8 + 0x100bbf0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bccc + 0x100bc04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd0 + 0x100bc10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd4 + 0x100bc1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd8 + 0x100bc28));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(**(int **)(_UNK_0100bcdc + 0x100bc40) + 0x74);
  if (param_2 != 0) {
    if (iVar2 == 0) {
      FUN_00ec3934();
    }
    iVar2 = **(int **)(_UNK_0100bce0 + 0x100bc68);
    if ((*(int *)(iVar2 + 0x1c) == 0) &&
       (FUN_00ec37c0(*(undefined4 *)(_UNK_01498550 + 0x14984d4)), *(int *)(iVar2 + 0x1c) == 0)) {
      FUN_00efd7c4(iVar2);
    }
    if (iVar5 != 0) {
      uVar1 = System_Collections_Generic_List_object___IndexOf_267e86c
                        (iVar5,param_3,*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8));
      if (-1 < (int)uVar1) {
        if (*(int *)(**(int **)(_UNK_01498554 + 0x1498520) + 0x74) == 0) {
          FUN_00ec3934();
        }
        Rotatelab_Extensions__RemoveAtFast_object__14882cc
                  (iVar5,uVar1,*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0xc));
      }
      return ~uVar1 >> 0x1f;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__AddUnique_object__1484964
            (iVar5,param_3,**(undefined4 **)(_UNK_0100bce4 + 0x100bc90));
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x18) + 0xc);
    if ((int)uVar1 < 1) {
      return uVar1;
    }
    pcVar4 = (char *)(_UNK_0100b928 + 0x100b898);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0100b92c + 0x100b8ac));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0100b930 + 0x100b8b8));
      *pcVar4 = '\x01';
    }
    if (*(char *)(param_1 + 0x1c) == '\0') {
      return 0;
    }
    piVar3 = *(int **)(_UNK_0100b934 + 0x100b8e0);
    *(undefined1 *)(param_1 + 0x1c) = 0;
    iVar2 = *piVar3;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar3;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x10);
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(iVar2 + 0xc))
                          (*(undefined4 *)(iVar2 + 0x20),0,*(undefined4 *)(iVar2 + 0x14));
        return uVar1;
      }
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

