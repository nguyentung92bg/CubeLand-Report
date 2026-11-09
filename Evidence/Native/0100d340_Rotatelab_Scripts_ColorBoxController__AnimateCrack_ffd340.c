/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$AnimateCrack
void Rotatelab_Scripts_ColorBoxController__AnimateCrack (Rotatelab_Scripts_ColorBoxController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$AnimateCrack
   void Rotatelab_Scripts_ColorBoxController__AnimateCrack (Rotatelab_Scripts_ColorBoxController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxController__AnimateCrack_ffd340(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 uVar11;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar5 = (char *)(_UNK_0100d580 + 0x100d35c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d584 + 0x100d370));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d588 + 0x100d37c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d58c + 0x100d388));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d590 + 0x100d394));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d594 + 0x100d3a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d598 + 0x100d3ac));
    *pcVar5 = '\x01';
  }
  piVar9 = *(int **)(_UNK_0100d59c + 0x100d3c4);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0x40),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24),
                                      (byte)(in_fpscr >> 0x16) & 3);
  piVar6 = *(int **)(_UNK_0100d5a0 + 0x100d40c);
  iVar8 = *(int *)(param_1 + 0x38);
  iVar1 = *piVar6;
  iVar3 = *(int *)(iVar1 + 0x74);
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + 1.0 / fVar10;
  if (iVar3 == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_MaterialPropertyBlock__GetFloat_35c4294
                    (iVar8,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x50),0);
  piVar6 = *(int **)(_UNK_0100d5a4 + 0x100d464);
  uVar11 = *(undefined4 *)(param_1 + 0x34);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x5c);
  iVar3 = puVar4[2];
  if (iVar3 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar7 = *puVar4;
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0100d5a8 + 0x100d4b0));
    System_Action_object__float____ctor_1f19254
              (iVar3,uVar7,**(undefined4 **)(_UNK_0100d5ac + 0x100d4d0),0);
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 8);
    *piVar6 = iVar3;
    thunk_FUN_00ec5080(piVar6,iVar3);
  }
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Custom_object__15d5b3c
            (&uStack_38,param_1,uVar2,uVar11,0x3e800000,iVar3,0,0,0,0,0,1,0,0,0,0,
             **(undefined4 **)(_UNK_0100d5b0 + 0x100d51c));
  *(undefined8 *)(param_1 + 0x40) = uStack_38;
  *(undefined8 *)(param_1 + 0x48) = uStack_30;
  thunk_FUN_00ec5080(param_1 + 0x48,0);
  return;
}

