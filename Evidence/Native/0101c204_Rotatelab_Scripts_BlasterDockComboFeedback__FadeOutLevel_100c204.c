/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback$$FadeOutLevel
void Rotatelab_Scripts_BlasterDockComboFeedback__FadeOutLevel (Rotatelab_Scripts_BlasterDockComboFeedback_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback$$FadeOutLevel
   void Rotatelab_Scripts_BlasterDockComboFeedback__FadeOutLevel
   (Rotatelab_Scripts_BlasterDockComboFeedback_o* __this, int32_t index, const MethodInfo* method);
    */

void Rotatelab_Scripts_BlasterDockComboFeedback__FadeOutLevel_100c204(int param_1,uint param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  pcVar2 = (char *)(_UNK_0101c4b4 + 0x101c228);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c4b8 + 0x101c23c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c4bc + 0x101c248));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c4c0 + 0x101c254));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c4c4 + 0x101c260));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c4c8 + 0x101c26c));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar3 + 0xc) <= param_2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  uVar4 = 0;
  iVar3 = *(int *)(iVar3 + param_2 * 4 + 0x10);
  while( true ) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar4) break;
    if (*(uint *)(iVar3 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar7 = *(int *)(iVar3 + 0x10 + uVar4 * 4);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_ParticleSystem__Stop_368e968(iVar7,0,1,0);
    uVar4 = uVar4 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = *(int **)(_UNK_0101c4cc + 0x101c310);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (*(uint *)(iVar3 + 0xc) <= param_2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  PrimeTween_Tween__Stop_2ced694(iVar3 + param_2 * 0x10 + 0x10,0);
  iVar7 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar7 + 0xc) <= param_2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar5 = *(int *)(param_1 + 0x18);
  uVar10 = *(undefined4 *)(iVar7 + param_2 * 4 + 0x10);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar5 + 0xc) <= param_2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar6 = *(int **)(_UNK_0101c4d0 + 0x101c39c);
  uVar11 = *(undefined4 *)(iVar5 + param_2 * 4 + 0x10);
  iVar7 = *piVar6;
  if (*(int *)(iVar7 + 0x74) == 0) {
    FUN_00ec3934();
    iVar7 = *piVar6;
  }
  puVar1 = *(undefined4 **)(iVar7 + 0x5c);
  iVar5 = puVar1[2];
  if (iVar5 == 0) {
    if (*(int *)(iVar7 + 0x74) == 0) {
      FUN_00ec3934();
      puVar1 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar8 = *puVar1;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101c4d4 + 0x101c3e8));
    System_Action_object____ctor_1f11414(iVar5,uVar8,**(undefined4 **)(_UNK_0101c4d8 + 0x101c408),0)
    ;
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 8);
    *piVar6 = iVar5;
    thunk_FUN_00ec5080(piVar6,iVar5);
  }
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_object__15d6154
            (&uStack_48,uVar10,uVar11,iVar5,0,0,**(undefined4 **)(_UNK_0101c4dc + 0x101c454));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar3 + 0xc) <= param_2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar3 = iVar3 + param_2 * 0x10;
  *(undefined8 *)(iVar3 + 0x10) = uStack_48;
  *(undefined8 *)(iVar3 + 0x18) = uStack_40;
  thunk_FUN_00ec5080(iVar3 + 0x18,0);
  return;
}

