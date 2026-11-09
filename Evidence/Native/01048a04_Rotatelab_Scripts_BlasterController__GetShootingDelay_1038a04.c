/* IL2CPP: Rotatelab.Scripts.BlasterController$$GetShootingDelay
UnityEngine_CustomYieldInstruction_o* Rotatelab_Scripts_BlasterController__GetShootingDelay (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$GetShootingDelay
   UnityEngine_CustomYieldInstruction_o* Rotatelab_Scripts_BlasterController__GetShootingDelay
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_BlasterController__GetShootingDelay_1038a04(void)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01048aac + 0x1048a14);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048ab0 + 0x1048a28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048ab4 + 0x1048a34));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01048ab8 + 0x1048a48));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Scripts_DockManager__get_ShootingBlasterCount_10044e4(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01048abc + 0x1048a78) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pfVar2 = (float *)&UNK_01048aa4;
  if (iVar1 == 0) {
    pfVar2 = (float *)&UNK_01048aa8;
  }
  fVar3 = *pfVar2;
  pcVar5 = (char *)(_UNK_0108c6d8 + 0x108c5c4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c6dc + 0x108c5d8),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c6e0 + 0x108c5e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c6e4 + 0x108c5f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c6e8 + 0x108c5fc));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0108c6ec + 0x108c610);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(**(int **)(iVar1 + 0x5c) + 0xc) < 1) {
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108c6f4 + 0x108c698));
    UnityEngine_CustomYieldInstruction___ctor_35ff10c(iVar1,0);
  }
  else {
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar6;
    }
    if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_Stack_object___Pop_1b04e0c
                      (**(int **)(iVar1 + 0x5c),**(undefined4 **)(_UNK_0108c6f0 + 0x108c67c));
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar4 = (float)UnityEngine_Time__get_time_3610900(0);
  *(float *)(iVar1 + 8) = fVar4 + fVar3;
  return iVar1;
}

