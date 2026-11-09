/* IL2CPP: Rotatelab.Utilities$$<ProcessException>g__IsExceptionHarmless|9_0
bool Rotatelab_Utilities___ProcessException_g__IsExceptionHarmless_9_0 (System_Exception_o* e, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Utilities$$<ProcessException>g__IsExceptionHarmless|9_0
   bool Rotatelab_Utilities___ProcessException_g__IsExceptionHarmless_9_0 (System_Exception_o* e,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

bool Rotatelab_Utilities___ProcessException_g__IsExceptionHarmless_9_0_107e100
               (int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_0108e49c + 0x108e11c);
  uStack_14 = param_2;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e4a0 + 0x108e130));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e4a4 + 0x108e13c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e4a8 + 0x108e148));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e4ac + 0x108e154));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e4b0 + 0x108e160));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e4b4 + 0x108e16c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e4b8 + 0x108e178));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e4bc + 0x108e184));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e4c0 + 0x108e190));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e4c4 + 0x108e19c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e4c8 + 0x108e1a8));
    *pcVar5 = '\x01';
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(byte *)(**(int **)(_UNK_0108e4cc + 0x108e1c4) + 0xb8);
  if ((uVar3 <= *(byte *)(iVar1 + 0xb8)) &&
     (*(int *)(*(int *)(iVar1 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_0108e4cc + 0x108e1c4))) {
    if (*(int *)(**(int **)(_UNK_0108e4d0 + 0x108e1f8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = System_Threading_CancellationToken__get_IsCancellationRequested_2bde434(&uStack_14,0);
    if (iVar1 == 0) {
      return true;
    }
    iVar1 = *param_1;
  }
  if (iVar1 == **(int **)(_UNK_0108e4d4 + 0x108e230)) {
    if ((param_1[0x12] & param_1[0x13]) == 0xffffffff) {
      return true;
    }
    iVar1 = Nakama_HttpRequestAdapter__IsTransientException_2c20828(param_1,0);
    if (iVar1 != 0) {
      return true;
    }
    iVar1 = *param_1;
  }
  if (iVar1 == **(int **)(_UNK_0108e4d8 + 0x108e244)) {
    if ((param_1[0x12] & param_1[0x13]) == 0xffffffff) {
      return true;
    }
    iVar1 = Satori_HttpRequestAdapter__IsTransientException_2d1414c(param_1,0);
    if (iVar1 != 0) {
      return true;
    }
    iVar1 = *param_1;
  }
  uVar4 = (uint)*(byte *)(iVar1 + 0xb8);
  iVar8 = **(int **)(_UNK_0108e4dc + 0x108e258);
  uVar3 = (uint)*(byte *)(iVar8 + 0xb8);
  if ((((uVar4 < uVar3) || (*(int *)(*(int *)(iVar1 + 100) + uVar3 * 4 + -4) != iVar8)) ||
      (0xe < param_1[0x12] - 1U)) || ((0x600fU >> (param_1[0x12] - 1U & 0xff) & 1) == 0)) {
    uVar6 = (uint)*(byte *)(**(int **)(_UNK_0108e4e0 + 0x108e2ac) + 0xb8);
    if ((uVar4 < uVar6) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar6 * 4 + -4) != **(int **)(_UNK_0108e4e0 + 0x108e2ac)))
    {
      uVar6 = (uint)*(byte *)(**(int **)(_UNK_0108e4e4 + 0x108e2d8) + 0xb8);
      if ((uVar4 < uVar6) ||
         (*(int *)(*(int *)(iVar1 + 100) + uVar6 * 4 + -4) != **(int **)(_UNK_0108e4e4 + 0x108e2d8))
         ) {
        if (((uVar3 <= uVar4) && (*(int *)(*(int *)(iVar1 + 100) + uVar3 * 4 + -4) == iVar8)) ||
           (iVar1 == **(int **)(_UNK_0108e4e8 + 0x108e320))) {
          puVar7 = *(undefined4 **)(_UNK_0108e4ec + 0x108e334);
          uVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
          if (*(int *)(**(int **)(_UNK_0108e4f0 + 0x108e348) + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar2,0,0);
          if (iVar1 != 0) {
            iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(int *)(iVar1 + 0x2c) != 0) {
              iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
              if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              if (*(int *)(iVar1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              iVar1 = Hiro_NetworkMonitor__get_Online_296750c(*(int *)(iVar1 + 0x2c),0);
              if (iVar1 == 0) {
                return true;
              }
            }
          }
        }
        uVar2 = uStack_14;
        iVar1 = param_1[5];
        if (iVar1 == 0) {
          return false;
        }
        if (*(int *)(**(int **)(_UNK_0108e4f4 + 0x108e3f4) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar1 = Rotatelab_Utilities___ProcessException_g__IsExceptionHarmless_9_0_107e100
                          (iVar1,uVar2);
        return iVar1 != 0;
      }
    }
  }
  return true;
}

