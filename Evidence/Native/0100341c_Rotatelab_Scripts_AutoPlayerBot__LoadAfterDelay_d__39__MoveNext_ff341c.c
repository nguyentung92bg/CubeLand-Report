/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot.<LoadAfterDelay>d__39$$MoveNext
bool Rotatelab_Scripts_AutoPlayerBot__LoadAfterDelay_d__39__MoveNext (Rotatelab_Scripts_AutoPlayerBot__LoadAfterDelay_d__39_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot.<LoadAfterDelay>d__39$$MoveNext
   bool Rotatelab_Scripts_AutoPlayerBot__LoadAfterDelay_d__39__MoveNext
   (Rotatelab_Scripts_AutoPlayerBot__LoadAfterDelay_d__39_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_AutoPlayerBot__LoadAfterDelay_d__39__MoveNext_ff341c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01003668 + 0x1003430);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100366c + 0x1003444));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01003670 + 0x1003450));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01003674 + 0x100345c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01003678 + 0x1003468));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100367c + 0x1003474));
    *pcVar4 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20);
        uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01003680 + 0x10034c0));
        UnityEngine_WaitForSeconds___ctor_360c704(uVar2,uVar5,0);
        *(undefined4 *)(param_1 + 0xc) = uVar2;
        thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar2);
        *(undefined4 *)(param_1 + 8) = 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    fVar3 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
    *(float *)(param_1 + 0x18) = fVar3 + 3.0;
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01003684 + 0x100352c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Scripts_DockManager__get_ShootingBlasterCount_10044e4(iVar1,0);
  if ((0 < iVar1) &&
     (fVar3 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0),
     fVar3 < *(float *)(param_1 + 0x18))) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    *(undefined4 *)(param_1 + 8) = 2;
    return 1;
  }
  puVar6 = *(undefined4 **)(_UNK_01003688 + 0x10035a0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Scripts_LevelManager__GetLevelData_106844c
                    (iVar1,*(undefined4 *)(param_1 + 0x14),1,0);
  if (*(int *)(**(int **)(_UNK_0100368c + 0x10035e0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar2,0,0);
  if (iVar1 != 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01003690 + 0x1003614));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_PopupManager__CloseAll_1124fb8(iVar1,0);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelManager__LoadLevelExternally_1069178(iVar1,uVar2,0);
  }
  return 0;
}

