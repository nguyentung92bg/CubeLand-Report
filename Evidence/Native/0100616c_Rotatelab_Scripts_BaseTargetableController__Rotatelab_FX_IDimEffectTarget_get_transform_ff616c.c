/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$Rotatelab.FX.IDimEffectTarget.get_transform
UnityEngine_Transform_o* Rotatelab_Scripts_BaseTargetableController__Rotatelab_FX_IDimEffectTarget_get_transform (Rotatelab_Scripts_BaseTargetableController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$Rotatelab.FX.IDimEffectTarget.get_transform
   UnityEngine_Transform_o*
   Rotatelab_Scripts_BaseTargetableController__Rotatelab_FX_IDimEffectTarget_get_transform
   (Rotatelab_Scripts_BaseTargetableController_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_BaseTargetableController__Rotatelab_FX_IDimEffectTarget_get_transform_ff616c
              (int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iStack_14;
  
  pcVar4 = (char *)(iRam0360e2f0 + 0x360e1a8);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam0360e2f4 + 0x360e1bc),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam0360e2f8 + 0x360e1c8));
    *pcVar4 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
  }
  pcVar1 = *(code **)(iRam0360e2fc + 0x360e1f4);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = (code *)thunk_FUN_00ec3774(iRam0360e300 + 0x360e204);
    *(code **)(iRam0360e304 + 0x360e214) = pcVar1;
  }
  iVar2 = (*pcVar1)(iVar2);
  iVar5 = **(int **)(iRam0360e308 + 0x360e22c);
  if (*(int *)(iVar5 + 0x1c) == 0) {
    thunk_FUN_00efd7c4(iVar5);
  }
  iVar3 = 0;
  iStack_14 = 0;
  if (iVar2 != 0) {
    pcVar4 = (char *)(iRam0360e30c + 0x360e25c);
    if (*pcVar4 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam0360e310 + 0x360e270));
      *pcVar4 = '\x01';
    }
    iVar3 = 0;
    iStack_14 = iVar2;
    iVar2 = FUN_0166c57c(&iStack_14,0);
    iVar5 = **(int **)(iVar5 + 0x1c);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = thunk_FUN_00efd768(iVar5);
    }
    if ((iVar2 != 0) && (iVar3 = thunk_FUN_00f00bc8(iVar2,iVar5), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f4fe34(iVar2,iVar5);
    }
  }
  return iVar3;
}

