/* IL2CPP: Rotatelab.Scripts.BombController$$AnimateHit
void Rotatelab_Scripts_BombController__AnimateHit (Rotatelab_Scripts_BombController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BombController$$AnimateHit
   void Rotatelab_Scripts_BombController__AnimateHit (Rotatelab_Scripts_BombController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_BombController__AnimateHit_ff7198(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 uVar10;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar3 = (char *)(_UNK_010073f8 + 0x10071b4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010073fc + 0x10071c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007400 + 0x10071d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007404 + 0x10071e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007408 + 0x10071ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100740c + 0x10071f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007410 + 0x1007204));
    *pcVar3 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01007414 + 0x100721c);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0x60),0);
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(param_1 + 0x48);
  fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x24),
                                     (byte)(in_fpscr >> 0x16) & 3);
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + 1.0 / fVar9;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar4 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar7 = *(int **)(_UNK_01007418 + 0x1007290);
  iVar6 = *(int *)(iVar4 + 0x14);
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar7;
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Material__GetFloat_35cb1b4
                    (iVar6,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x60),0);
  piVar7 = *(int **)(_UNK_0100741c + 0x10072dc);
  uVar10 = *(undefined4 *)(param_1 + 0x58);
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar7;
  }
  puVar2 = *(undefined4 **)(iVar4 + 0x5c);
  iVar6 = puVar2[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar5 = *puVar2;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01007420 + 0x1007328));
    System_Action_object__float____ctor_1f19254
              (iVar6,uVar5,**(undefined4 **)(_UNK_01007424 + 0x1007348),0);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar7 = iVar6;
    thunk_FUN_00ec5080(piVar7,iVar6);
  }
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Custom_object__15d5b3c
            (&uStack_38,param_1,uVar1,uVar10,0x3e800000,iVar6,0,0,0,0,0,1,0,0,0,0,
             **(undefined4 **)(_UNK_01007428 + 0x1007394));
  *(undefined8 *)(param_1 + 0x60) = uStack_38;
  *(undefined8 *)(param_1 + 0x68) = uStack_30;
  thunk_FUN_00ec5080(param_1 + 0x68,0);
  return;
}

