/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback$$TryActivate
void Rotatelab_Scripts_BlasterDockComboFeedback__TryActivate (Rotatelab_Scripts_BlasterDockComboFeedback_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback$$TryActivate
   void Rotatelab_Scripts_BlasterDockComboFeedback__TryActivate
   (Rotatelab_Scripts_BlasterDockComboFeedback_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterDockComboFeedback__TryActivate_100bd78(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar3 = (char *)(_UNK_0101c06c + 0x101bd94);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c070 + 0x101bda8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c074 + 0x101bdb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c078 + 0x101bdc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c07c + 0x101bdcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c080 + 0x101bdd8));
    *pcVar3 = '\x01';
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    fVar10 = *(float *)(param_1 + 0x24);
    fVar1 = (float)UnityEngine_Time__get_time_3610900(0);
    fVar10 = fVar10 - fVar1;
    if (0.0 < fVar10) {
      uVar5 = *(int *)(param_1 + 0x20) - 1;
      if (uVar5 != *(uint *)(param_1 + 0x28)) {
        if (-1 < (int)*(uint *)(param_1 + 0x28)) {
          Rotatelab_Scripts_BlasterDockComboFeedback__HideLevelImmediately_100c130(param_1);
        }
        *(uint *)(param_1 + 0x28) = uVar5;
      }
      iVar4 = *(int *)(param_1 + 0x1c);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar8 = *(int **)(_UNK_0101c084 + 0x101be4c);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        FUN_00ec3934();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      PrimeTween_Tween__Stop_2ced694(iVar4 + uVar5 * 0x10 + 0x10,0);
      iVar4 = *(int *)(param_1 + 0x10);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar4 + 0xc) <= *(uint *)(param_1 + 0x28)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar4 = *(int *)(iVar4 + *(uint *)(param_1 + 0x28) * 4 + 0x10);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar4,1,0);
      iVar4 = *(int *)(param_1 + 0x14);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar4 + 0xc) <= *(uint *)(param_1 + 0x28)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar5 = 0;
      iVar4 = *(int *)(iVar4 + *(uint *)(param_1 + 0x28) * 4 + 0x10);
      while( true ) {
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar5) break;
        if (*(uint *)(iVar4 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar6 = *(int *)(iVar4 + 0x10 + uVar5 * 4);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_ParticleSystem__Play_368e864(iVar6,0,0);
        uVar5 = uVar5 + 1;
      }
      if (*(int *)(*piVar8 + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0x30),0);
      piVar9 = *(int **)(_UNK_0101c088 + 0x101bf74);
      iVar4 = *piVar9;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar9;
      }
      puVar2 = *(undefined4 **)(iVar4 + 0x5c);
      iVar6 = puVar2[1];
      if (iVar6 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          FUN_00ec3934();
          puVar2 = *(undefined4 **)(*piVar9 + 0x5c);
        }
        uVar7 = *puVar2;
        iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101c08c + 0x101bfbc));
        System_Action_object____ctor_1f11414
                  (iVar6,uVar7,**(undefined4 **)(_UNK_0101c090 + 0x101bfdc),0);
        piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
        *piVar9 = iVar6;
        thunk_FUN_00ec5080(piVar9,iVar6);
      }
      if (*(int *)(*piVar8 + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Delay_object__15d6154
                (&uStack_38,param_1,fVar10,iVar6,0,0,**(undefined4 **)(_UNK_0101c094 + 0x101c028));
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined8 *)(param_1 + 0x30) = uStack_38;
      *(undefined8 *)(param_1 + 0x38) = uStack_30;
      thunk_FUN_00ec5080(param_1 + 0x38,0);
    }
  }
  return;
}

